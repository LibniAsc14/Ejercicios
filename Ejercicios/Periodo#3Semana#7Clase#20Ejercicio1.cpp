#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int o,p,q=0,r=0;
	cout<<"ingresar la cantidad de numeros:";
	cin>>p;
	while(q<p)
	{
	cout<<"ingresar numero:";
	cin>>o;
	r=r+o;
	q=q+1;
	}
	cout<<"La suma de los enteros es:" <<r;
	getch();
}


