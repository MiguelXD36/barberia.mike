//nodo.h
#pragma once
#include "cliente.h"

class CNodo {
private:
	CCliente* client;
	CNodo* siguiente;

public:
	CNodo(CCliente* cliente, CNodo* sig);
	CNodo(CCliente* cliente);
	CCliente getCliente();
	CNodo* getSiguiente();
	//friend class CCliente;
	friend class CCola;
};