//
// Created by Ivan Cardenas on 22/05/2023.
//
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* nextNode;
};

void addToQueue(Node *&, int);
void dequeue(Node *&, int &);

int main(){
    Node* queue = NULL;
    int entryData;
    char continueResponse;

    do {
        cout << "Type a number: ";
        cin >> entryData;
        addToQueue(queue, entryData);

        cout << "Do you want to entry more numbers? (Y/n): ";
        cin >> continueResponse;

    } while ((continueResponse == 'y') || (continueResponse == 'Y') || (continueResponse == '\n'));

    cout << "\n----Dequeue----\n"<< endl;
    while (queue != NULL){
        dequeue(queue, entryData);
        if(queue != NULL){
            cout << entryData << " , ";
        } else {
            cout <<entryData<< ".";
        }
    }
}

void addToQueue(Node *&queue, int n) {
    Node* newNode = new Node();
    newNode->data = n;
    newNode->nextNode = queue;
    queue = newNode;
}

void dequeue(Node *& queue, int &n) {
    Node* aux = queue;
    n = aux->data;
    queue = aux->nextNode;
    delete aux;
}