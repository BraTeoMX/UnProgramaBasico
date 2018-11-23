//creacion basica de funciones apliacadas en formato de funciones
#include <iostream>

using namespace std;

double FuncionSuma(double, double);
double FuncionResta(double, double);
double FuncionMultiplicacion(double, double);
double FuncionDivicion(double, double);
double resultado;

int main(int argc, char const *argv[]){
	double primerValor, segundoValor;
	int opcion;

	cout<<"introduce el primer valor: ";
	cin>>primerValor;
	cout<<"introduce el segundo valor:";
	cin>>segundoValor;
	cout<<"Selecciona una opcion:"<<endl;
	cout<<"1. suma"<<endl;
	cout<<"2. resta"<<endl;
	cout<<"3. divicion"<<endl;
	cout<<"4. multiplicacion"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
		FuncionSuma(primerValor, segundoValor);
		break;
		case 2:
		FuncionResta(primerValor, segundoValor);
		break;
		case 3:
		FuncionDivicion(primerValor, segundoValor);
		break;
		case 4:
		FuncionMultiplicacion(primerValor, segundoValor);
		break;
		default:
		cout<<"Opcion invalida!!"<<endl;
	}
	cout<<endl<<"Fin del programa :v "<<endl;
	return 0;
}

double FuncionSuma(double fprimerValor, double fsegundoValor){
	resultado = fprimerValor + fsegundoValor;
	cout<< resultado;
}

double FuncionResta(double fprimerValor, double fsegundoValor){
	resultado = fprimerValor - fsegundoValor;
	cout<< resultado;
}

double FuncionMultiplicacion(double fprimerValor, double fsegundoValor){
	resultado = fprimerValor * fsegundoValor;
	cout <<resultado;
}

double FuncionDivicion(double fprimerValor, double fsegundoValor){
	resultado = fprimerValor / fsegundoValor;
	cout <<resultado;
}
