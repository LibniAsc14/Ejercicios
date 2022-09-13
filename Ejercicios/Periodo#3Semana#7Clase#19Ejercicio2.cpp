#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a,b,c=0,cd=0;
	cout<<"Ingresar cantidad de numeros:";
	cin>>a;
	while(c<a)
	{
	cout<<"Ingresar numero:"<<endl;
	cin>>b;
	if(b>0)
	cd=cd+1;
	c=c+1;
	}
	cout<<"La cantidad de positivos"<<cd<<endl;
	getch();
	return 0;
}
