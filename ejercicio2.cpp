#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Ingrese un numero entero: "<<endl;
	cin>>num;
	if(num<10 || num>50){
		cout<<"El numero esta fuera del rango permitido"<<endl;
	}else{
		cout<<"EL numero esta dentro del rango"<<endl;
	}
	return 0;
}
