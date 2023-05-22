#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void agregarNodo(Nodo *&, int );
void sacarNodo(Nodo *&, int &);

int maidn(){
    Nodo* pila = NULL;
    int dato;

    cout << "Digite un numero: ";
    cin >> dato;
    agregarNodo(pila, dato);

    cout << "Digite un numero: ";
    cin >> dato;
    agregarNodo(pila, dato);

    cout << "Digite un numero: ";
    cin >> dato;
    agregarNodo(pila, dato);

    cout << "Sacando los elementos de la pila:" << endl;

    while(pila != NULL) {
        sacarNodo(pila, dato);
        if(pila != NULL){
            cout << dato << " , ";
        } else {
            cout << dato << "." << endl;
        }
    }

    return 0;
}

void agregarNodo(Nodo* &pila , int n){
    Nodo* newNode = new Nodo();
    newNode->dato = n;
    newNode->siguiente = pila;
    pila = newNode;
}

void sacarNodo(Nodo *&pila, int &n) {
    Nodo* aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}