//nodo.cpp

#include "nodo.h"

CNodo::CNodo(CCliente* cliente, CNodo* sig) {
	client = cliente;
	siguiente = sig;
}

CNodo::CNodo(CCliente* cliente) {
	client = cliente;
}

CCliente CNodo::getCliente() {
	return *client;
}

CNodo* CNodo::getSiguiente() {
	return siguiente;
}