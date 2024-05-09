#include "header.h"

cPersona::cPersona() {
	nombre = "Personaje secundario";
}

cPersona::cPersona(string _nombre) {
	nombre = _nombre;
}

cSiervos::cSiervos() : cPersona() {
	cargo = "Marinero raso";
}

cSiervos::cSiervos(string _nombre, string _cargo) : cPersona(_nombre) {
	cargo = _cargo;
}

cPirata::cPirata() : cPersona() {
	recompensa = 0.00; //No son importantes, por tanto no hay recompensa por ellos.
}

cPirata::cPirata(string _nombre, double _recompensa) : cPersona(_nombre) {
	recompensa = _recompensa;
}
cPirataMaldito::cPirataMaldito() : cPersona() {
	skinZombie = false;
}

cPirataMaldito::cPirataMaldito(string _nombre) : cPersona(_nombre) {
	skinZombie = false;
}

void cPersona::mostrarAtributos(){
	cout << nombre;
}

void cSiervos::mostrarAtributos() {
	cPersona::mostrarAtributos();
	cout << " es un subdito de la corona. ";
	cout << "Ocupa el cargo de" << cargo << "\n";
}

void cPirata::mostrarAtributos() {
	cPersona::mostrarAtributos();
	cout << " es un pirata!!! ";
	cout << "La recompensa por su cabeza es de " << recompensa << " libras." << "\n";
}

void cPirataMaldito::mostrarAtributos() {
	cPersona::mostrarAtributos();
	cout << " ha robado oro azteca!!! ";
	if (skinZombie == true) {
		cout << "Es un fantasma.\n";
	}
	else {
		cout << "Es inmortal.\n";
	}
}

void cPirataMaldito::setSkin(bool luna) {
	skinZombie = luna; //Si hay luna, tiene apariencia de esqueleto-zombie.
}



