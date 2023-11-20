#pragma once
#include <iostream>
#include <string>

using namespace std;

class cPersona {
protected:
	string nombre;

public:
	cPersona();
	cPersona(string);

	virtual void mostrarAtributos();
};

class cSiervos : public cPersona{
private:
	string cargo;
public:
	cSiervos();
	cSiervos(string, string);
	void mostrarAtributos();
};

class cPirata : public cPersona {
private:
	double recompensa;
public:
	cPirata();
	cPirata(string, double);
	void mostrarAtributos();
};

class cPirataMaldito : public cPersona {
private:
	bool skinZombie;

public:
	cPirataMaldito();
	cPirataMaldito(string);
	void mostrarAtributos();
	void setSkin(bool);
};

template <typename P>

class cNave {

public:
	//Nos interesa que los atributos de la clase nave sean públicos para acceder a los objetos. Aunque esto no sea recomendable.
	P capitan;
	string nombre;
	P *tripulacion;
	cNave(P _capitan, string _nombre, P *_tripulacion) { //Le paso un puntero
		capitan = _capitan;
		nombre = _nombre;
		tripulacion = _tripulacion;
	}
};



