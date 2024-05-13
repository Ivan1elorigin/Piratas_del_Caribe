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

	string getNombre();
	void setNombre(string);

	virtual void mostrarAtributos();
};

class cSiervos : public cPersona{
private:
	string cargo;
public:
	cSiervos();
	cSiervos(string, string);

	string getCargo();
	void setCargo(string _cargo);

	void mostrarAtributos();
};

class cPirata : public cPersona {
private:
	double recompensa;
public:
	cPirata();
	cPirata(string, double);

	double getRecompensa();
	void setRecompensa(double);

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
	bool getSkin();
};

template <typename P>

class cNave {
	P capitan;
	string nombre;
	P* tripulacion;
public:
	//Nos interesa que los atributos de la clase nave sean públicos para acceder a los objetos. Aunque esto no sea recomendable.
	
	cNave(P _capitan, string _nombre, P *_tripulacion) { //Le paso un puntero
		capitan = _capitan;
		nombre = _nombre;
		tripulacion = _tripulacion;
	}

	P getCapitan() {
		return capitan;
	}

	void setCapitan(P _capitan) {
		capitan = _capitan;
	}

	string getNombre() {
		return nombre;
	}

	void setNombre(string _nombre) {
		nombre = _nombre;
	}

	P * getTripulacion() {
		return tripulacion;
	}

	void setTripulacion(P* _tripulacion) {
		tripulacion = _tripulacion;
	}

};



