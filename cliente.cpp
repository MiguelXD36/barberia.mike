#include "cliente.h"

CCliente::CCliente() {
	turno = 0;
	tiempo = 0;

}

CCliente::CCliente(int turno, int tiempo) {
	this->turno = turno;
	this->tiempo = tiempo;


}

void CCliente::setTurno(int turno) {
	this->turno = turno;
}

void CCliente::setTiempo(int tiempo) {
	this->tiempo = tiempo;
}

int CCliente::getTiempo() {
	return tiempo;
}

int CCliente::getTurno() {
	return turno;
}

void CCliente::mostrar() {
	cout << "\n*********************" << endl;
	cout << "TURNO: " << getTurno() << endl;
	cout << "TIEMPO: " << getTiempo() << endl;
	cout << "\n*********************" << endl;

}