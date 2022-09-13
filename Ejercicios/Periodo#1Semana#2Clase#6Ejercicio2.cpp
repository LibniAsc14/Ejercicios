#include <iostream>
using namespace std;

int main()
    {
    int numero1, numero2, numero3, numero4, numero5;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;
    cout << "Ingrese el cuarto numero: ";
    cin >> numero4;
    cout << "Ingrese el quinto numero: ";
    cin >> numero5;
    if (numero1 > numero2 && numero1 > numero5){
    	cout <<"El numero mayor es: " << numero1 << endl;
	} else if (numero2 > numero1 && numero2 > numero5){
		cout <<  "El numero mayor es: " << numero2 << endl;
	} else if (numero3 > numero1 && numero3 > numero5){
		cout << "El numero mayor es: " << numero3 << endl;
	} else if (numero4 > numero1 && numero4 > numero5){
		cout << "El numero mayor es: " << numero4 << endl;
	} else if (numero5 > numero1 && numero5 > numero1){
		cout << "El numero mayor es: " << numero5 << endl;
	} else {
		cout << "Los numeros son iguales" << endl;
	}	
}
