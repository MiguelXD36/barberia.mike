#include "cola.h"

using namespace std;
CCola::~CCola() {
	while (primero) {
		desencolar();
	}
}

bool CCola::colaVacia() {
	return(primero == NULL);
}
void CCola::encolar(CCliente* cliente) {
	CNodo* nuevo = new CNodo(cliente);
	nuevo->client = cliente;
	nuevo->siguiente = NULL;
	if (colaVacia()) {
		primero = nuevo;
	}
	else {
		ultimo->siguiente = nuevo;
	}
	ultimo = nuevo;
}

void CCola::desencolar() {
	CNodo* aux = primero;
	CCliente* cliente;
	if (colaVacia()) {
		cout << "la cola esta vacia";
	}
	else {
		primero = aux->siguiente;
		cliente = aux->client;
		delete aux;
	}
	if (!primero) {
		ultimo = NULL;
	}
}

void CCola::mostrarCola() {
	CNodo* nodo = primero;

	if (nodo == NULL)
		cout << "Cola vacia " << endl;
	else {
		while (nodo) {
			cout << nodo->client->getTurno() << "-> ";
			cout << nodo->client->getTiempo() << "-> ";

			nodo = nodo->siguiente;
		}
		cout << endl;
	}
}

CCliente CCola::primeroEnCola() {
	CNodo* nodo = primero;
	nodo->client->setTiempo(nodo->client->getTiempo());
	nodo->client->setTurno(nodo->client->getTurno());
	return *nodo->client;
}