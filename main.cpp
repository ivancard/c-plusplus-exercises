#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void agregarNodo(Nodo *&, int );

int main(){
    Nodo* pila = NULL;

    return 0;
}

void agregarNodo(Nodo* &pila , int n){
    Nodo* newNode = new Nodo();
    newNode->dato = n;
    newNode->siguiente = pila;
    pila = newNode;
}