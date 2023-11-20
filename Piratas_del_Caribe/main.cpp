#include "header.h"

int main() {

	cPirata jack("Jack Sparrow", 100000);
	cSiervos comodoro("James Norrington", "Comodoro");
	cPirataMaldito barbossa("Hector Barbosa");

	cPirata *tripulacion_jack = new cPirata[10];
	cSiervos *tripulacion_comodoro = new cSiervos[10];
	cPirataMaldito *tripulacion_barbosa = new cPirataMaldito[10];

	cNave<cSiervos>Odisey(comodoro, "Odissey", tripulacion_comodoro);

	cout << Odisey.nombre << endl;

	cNave<cPirata>Interceptor(jack, "El Interceptor", tripulacion_jack);

	Interceptor.capitan.mostrarAtributos();

	cNave<cPirataMaldito>PerlaNegra(barbossa, "La perla negra", tripulacion_barbosa);

	for (int i = 0; i < 10; i++) {
		PerlaNegra.tripulacion[i].mostrarAtributos();
	}

	for (int i = 0; i < 10; i++) {
		PerlaNegra.tripulacion[i].setSkin(true);
	}

	for (int i = 0; i < 10; i++) {
		PerlaNegra.tripulacion[i].mostrarAtributos();
	}

	barbossa.mostrarAtributos();
	comodoro.mostrarAtributos();

	for (int i = 0; i < 10; i++) {
		Interceptor.tripulacion[i].mostrarAtributos();
	}

	


	delete [] tripulacion_jack;
	delete[] tripulacion_comodoro;
	delete[] tripulacion_barbosa;


}
