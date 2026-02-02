#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<float>num;
	float numero;
	float suma=0;
	int contador=0;
	
	cout<<"Ingrese 10 numeros: "<<endl;
	for(int i=0;i<10;i++){
		cout<<"Numero: "<<i+1<<endl;
		cin>>numero;
		num.push_back(numero);
		suma+=numero;
	}
	float promedio=suma/10;
	for(int i=0;i<10;i++){
		if(num[i] >promedio){
			contador++;
		}
	}
	cout<<"Suma total:"<<suma<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	cout<<"Cantidad de numeros encima del promedio: "<<contador<<endl;
	return 0;
	
	
}
