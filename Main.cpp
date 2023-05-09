#include <iostream>
#include <string>
#include "ProyectoClase.h"

using namespace std;

int main(){
	int sumdeVentas;
    int totaldeVentas=3;
    int lasVentasTotales;
    int lautilidad=3;
    int sumdeGastos;
    int totaldeGastos = 3;
	
	Cadena objetoCadena;
/*1*/	GalponesdeEngorde capGalpones(lautilidad, totaldeVentas, totaldeGastos, lasVentasTotales); //aqui se Intancia la clase y se Ejecuta el array
/*2*/	objetoCadena.leerValorCadena();
/*3*/	capGalpones.Pedir_capGalpones();
/*4*/	objetoCadena.longitudCadena();
/*5*/	sumdeVentas=capGalpones.solicitarVentas();
/*6*/	sumdeGastos=capGalpones.solicitarGastos();
/*7*/	capGalpones.totalUtilidad(sumdeVentas, sumdeGastos, lautilidad, lasVentasTotales); //justo ese orden 
/*8*/	objetoCadena.convertirMinuscula();
/*9*/	objetoCadena.convertirMayuscula();
/*10*/	objetoCadena.extraerSubcadena();

	return 0;
}
