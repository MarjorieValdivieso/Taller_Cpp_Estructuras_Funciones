#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int suma=0;
	int positivo=0;
	int negativo=0;
	
	for(int i=0;i<10;i++){
		cout<<"Ingrese 10 numeros: "<<i+1<<endl;
		cin>>arr[i];
		
		suma+=arr[i];
		if(arr[i]>0){
			positivo++;
		}else if(arr[i]<0){
			negativo++;
		}		
	}
	float promedio=suma/10.0;
	float porcentajeposi=(positivo*100.0)/10;
	float porcentajenega=(negativo*100.0)/10;
	
	cout<<"Suma total de los numeros: "<<suma<<endl;
	cout<<"Promedio de todos los numeros: "<<promedio<<endl;
	cout<<"Porcentaje de numeros positivos: "<<porcentajeposi<<endl;
	cout<<"Porcentaje de numeros negativos: "<<porcentajenega<<endl;
	
	return 0;
	
}
