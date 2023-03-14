//cola.h

#pragma once

#include "nodo.h"
class CCola {
public:
	CCola() :ultimo(NULL), primero(NULL) {}
	~CCola();
	void encolar(CCliente* client);
	void desencolar();
	void mostrarCola();
	bool colaVacia();
	CCliente primeroEnCola();

private:
	CNodo* ultimo;
	CNodo* primero;
};

