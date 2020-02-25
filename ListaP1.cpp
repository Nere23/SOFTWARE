#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo*siguiente;
};

void insertar_lista(nodo *&,int); //prototipo de la función 

int main(){
	nodo*lista=NULL;
	int dato;
        do{
		cout<<"1) Insertar Datos"<<endl;
		cout<<"2) Mostrar Datos"<<endl;
		cout<<"3) Buscar un Elemento"<<endl;
		cout<<"4) Eliminar un elemento"<<endl;
		cout<<"5) Eliminar..."<<endl
		cout<<"6) Salir"<<endl;
		cout<<endl<<"Eliga la opcion de su agrado:";
	    cin>>opc;
	    swhitch (opc){
	    	case 1:
	    cout<<"ingresar datos"<<endl;
	    cin>>
		}
    
    cout<<"Teclee un numero"<<endl;
	cin>>dato;
	insertar_lista(lista,dato);
	cout<<"Teclee un numero"<<endl;
	cin>>dato;
	insertar_lista(lista,dato);
	cout<<"Teclee un numero"<<endl;
	cin>>dato;
	insertar_lista(lista,dato);
	getch();
}
    

void insertar_lista(nodo *&lista,int n){
	nodo*nvo_nodo = new nodo();
	nvo_nodo -> dato= n;
	nodo*aux1=lista;
	nodo*aux2;
	while((aux1->dato<n)){
		aux2=aux1;
		aux1=aux1 -> siguiente;
	}
	
	if (lista == aux1)
    {
    	lista = nvo_nodo;
	}	
	else{
		aux2 -> siguiente = nvo_nodo;
	}
	
   nvo_nodo -> siguiente=aux1;
   cout<<"\t Elemento"<<n<<"insertado a la lista correctamente"<<endl;
}
   
