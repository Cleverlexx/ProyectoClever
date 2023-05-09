#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
class Cadena{
	//Atributos de la clase
private:
	int numEmpleados;
	int cantEmpleados;
	string nombre;
	string apellido;
	string numIdentidad;
	string cadenaCompleta;
	string subcadena;
public:	
	Cadena();
	void leerValorCadena();
	void longitudCadena();     // (length()) Y cocatenar
	void convertirMinuscula(); //	convertirMinuscula();  // (tolower())
	void convertirMayuscula(); //	void convertirMayuscula();  // (toupper())
	void extraerSubcadena();    //  (substr(inicio, longitud))
};
class GalponesdeEngorde {
	private:
		int lasventas[100];
		int totaldeVentas;
		int losgastos[100];
		int totaldeGastos;
		int capGalpones[100];
		int cantPollos;
		int ventaTotales[100];
		int lasVentasTotales;
		int lautilidad[100];
	public:
		GalponesdeEngorde (int, int, int, int); //Los metodos y para el constructor
		void Pedir_capGalpones();
		int solicitarVentas();
		int solicitarGastos();
		void totalUtilidad(int, int, int, int);
};
