//cliente.h
#pragma once
#include <iostream>

using namespace std;

class CCliente {
private:
	int turno;
	int tiempo;
public:
	CCliente();
	CCliente(int turno, int tiempo);
	void setTurno(int turno);
	void setTiempo(int tiempo);

	int getTurno();
	int getTiempo();

	void mostrar();
};
