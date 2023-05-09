#include <iostream>
#include <string>
#include "ProyectoClase.h"
#include <cctype>
#include <sstream>
Cadena::Cadena(){
	nombre = "";
	apellido = "";
	numIdentidad = "";
	numEmpleados = 0;
	cadenaCompleta = "";
	int indice = 0;
	int indiceCadena = 0;
	int cantidadEmpleados = 0;
}
// METODO 1
GalponesdeEngorde::GalponesdeEngorde(int _totaldeVentas,int _totaldeGastos,int _cantPollos , int _lasVentasTotales){
		totaldeVentas=_totaldeVentas;
	totaldeGastos=_totaldeGastos;
	cantPollos=_cantPollos;
	lasVentasTotales = _lasVentasTotales;
	for (int i=0; i<totaldeVentas; i++){
	lasventas[i]=0;
	}
	for (int i=0; i<totaldeGastos; i++){
	losgastos[i]=0;
	}
	for (int i=0; i<cantPollos; i++){
	capGalpones[i] = 0;
	}
	for (int i=0; i<lasVentasTotales; i++){
	ventaTotales[i] = 0;
	}
}
// METODO 2
void Cadena::leerValorCadena() {
    cout << "\n\n--------BIENVENIDO A SU BASE DE DATOS-------\n\n";
    cout<< "\n*****************Industrias VenePollos C.A*****************";
    cout<< "\n\n------------Bienvenido al Sistema Contable---------------\n";
    // Leer cantidad de empleados
    int n;
    string input;
    bool isNumber = false;
    do {
        cout << "Introduzca la cantidad de empleados: ";
        getline(cin, input);
        stringstream ss(input);
        if (ss >> n) {
            isNumber = true;
        } else {
            cout << " Debe ingresar un numero entero.\n";
        }
    } while (!isNumber);
	// Pedir información de cada empleado y ConcatenarCadenas
	for (int i = 0; i < n; i++) {
		string nombre, apellido, numIdentidad;
		
		cout << "\nIntroduzca el nombre del empleado " << i+1 << ": ";
		getline(cin, nombre);
				
		cout << "Introduzca el apellido del empleado " << i+1 << ": ";
		getline(cin, apellido);
        
		cout << "Introduzca el número de identidad del empleado " << i+1 << ": ";
		getline(cin, numIdentidad);
				
		cadenaCompleta += nombre + " " + apellido + " " + numIdentidad + " ";
	}
	
	cout << "\n\n *El Valor de Cadena completa es: " << cadenaCompleta << endl;
	cout << "\n\n *La longitud de la cadena completa es: " << cadenaCompleta.length()-(nombre.length()+apellido.length()+numIdentidad.length()) << " caracteres incluyendo espacios" << endl;
}
// METODO 3
void GalponesdeEngorde::Pedir_capGalpones(){    //Aqui comenzamos a Solicitar la capacidad de los galpones
		for (int i=0; i<cantPollos; i++){
		cout << "\n\n*Cuantos Pollos Vendio del Galpon El Empleado " << i+1 << "?: ";
		cin  >> capGalpones[i];
		
		while(capGalpones[0]>500){
    	cout<<"\nCapacidad Max 500 Por favor Ingrese la Venta Real del Galpon " <<i+1<< ": "; cin>>capGalpones[i];
    	}
		while(capGalpones[1]>800){
    	cout<<"\nCapacidad Max 800 Por favor Ingrese la Venta Real del Galpon " <<i+1<< ": "; cin>>capGalpones[i];
    	}
		while(capGalpones[2]>1000){
    	cout<<"\nCapacidad Max 1000 Por favor Ingrese la Venta Real del Galpon " <<i+1<< ": "; cin>>capGalpones[i];
    	}
	}
}
   // METODO 4             para la longitudCadena (length())
void Cadena::longitudCadena(){
	// Dividir la cadena completa en nombres, apellidos y números de identidad
	vector<string> datosSeparados;
	stringstream ss(cadenaCompleta);
	string dato;
	while (ss >> dato) {
		datosSeparados.push_back(dato);
	}
	// Calcular y mostrar la longitud de cada subcadena
	for (int i = 0; i < datosSeparados.size(); i += 3) {
		string nombre = datosSeparados[i];
		string apellido = datosSeparados[i+1];
		string numIdentidad = datosSeparados[i+2];
		
		cout << "Longitud del nombre " << nombre << ": " << nombre.length() << endl;
		cout << "Longitud del apellido " << apellido << ": " << apellido.length() << endl;
		cout << "Longitud del número de identidad " << numIdentidad << ": " << numIdentidad.length() << endl;
	}
}
// METODO 5
int GalponesdeEngorde::solicitarVentas(){
	cout<< "\n\n\n****** I.N.G.R.E.S.O.S ******\n ";	
	int sumdeVentas = 0;
	for (int i=0; i<totaldeVentas; i++){
		cout << "\n**Precio Unitario de Cada Pollo en del Galpon " << i+1 << "?: ";
		cin  >> lasventas[i];
		
		ventaTotales[i] = capGalpones[i]*lasventas[i];
		cout << "\n***************El Ingreso del Galpon es: " << ventaTotales[i];
		cout << "\n";
	sumdeVentas = sumdeVentas + ventaTotales[i];
	}
	return sumdeVentas;
}

// METODO 6            Método para pedir y sumar gastos 
int GalponesdeEngorde::solicitarGastos(){
	cout<< "\n\n\n****** E.G.R.E.S.O.S ******\n ";
	int sumdeGastos = 0;
	for (int i=0; i<totaldeGastos; i++){
		cout << "\n***Indique los Gastos en Bs. del Galpon " << i+1 << ": ";
		cin  >> losgastos[i];
		sumdeGastos = sumdeGastos + losgastos[i];
	}
	return sumdeGastos;
}
// METODO 7             Calcular Utilidad
void GalponesdeEngorde::totalUtilidad(int _sumdeVentas, int _sumdeGastos,int _lautilidad, int _lasVentasTotales){
	cout<< "\n\n\n****** U-T-I-L-I-D-A-D-E-S ******\n ";
	for (int i=0;i<_lautilidad;i++){
		cout<<"\n La Utilidad del Galpon "<<i+1<<" es: "<<ventaTotales[i]-losgastos[i] << endl;
	}
	float lautilidad= _sumdeVentas-_sumdeGastos;
	cout<< "\n\n\n****** Calculos__Totales ******\n ";
	cout << "\n    Las Ventas Totales es de: " << _sumdeVentas << endl;
	cout << "\n    Los Gastos Totales es de: " << _sumdeGastos << endl;
	cout << "\n    El Total de la Utilidad Neta es de: " << lautilidad << endl;
		if (lautilidad < 0) {
    	cout <<"\n\n La Utilidad es Negativa entonces Hay Perdidas" << endl;
    	cout <<" Se Recomienda Cuidar LOS GASTOS de cada Galpon" << endl;
	}
	cout << "\n\nCon Validacion de Datos OK. " << endl;	
}
// METODO 8          para convertirMinuscula (tolower())
void Cadena::convertirMinuscula() {
	string cadenaMinuscula = cadenaCompleta;
	for(int i = 0; i < cadenaMinuscula.length(); i++) {
	cadenaMinuscula[i] = tolower(cadenaMinuscula[i]);
}
	cadenaCompleta = cadenaMinuscula;
	cout << "\n\n *La Cadena en minúsculas es: " << cadenaCompleta << endl;
}
	// METODO 9                para convertirMayuscula (toupper())
void Cadena::convertirMayuscula() {
	string cadenaMayuscula = cadenaCompleta;
	for(int i = 0; i < cadenaMayuscula.length(); i++) {
	cadenaMayuscula[i] = toupper(cadenaMayuscula[i]);
}
	cadenaCompleta = cadenaMayuscula;
	cout << "\n\n *La Cadena en mayúsculas es: " << cadenaCompleta << endl;
}

//  METODO 10         extraerSubcadena (substr(inicio, longitud))
                      //	Metodos para EXTRAER SUCADENA de la cadena
void Cadena::extraerSubcadena(){
	int inicio, longitud;
	cout << "\n\n\n****************PARA EXTRAER LA SUBCADENA***********\n";
	cout << "\n\n Indique el Subindice de Inicio de la Subcadena: ";
	cin >> inicio;
	cout << "\n Indique la Longitud de la Subcadena: ";
	cin >> longitud;
	subcadena = cadenaCompleta.substr(inicio, longitud);
	cout << "\n La Subcadena Extraida es: " << subcadena << endl;
}
