#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<float>sueldos;
	float sueldo;
	float contador=0;
	float contador1=0;
	float promedio=0;
	float suma=0;
	cout<<"Ingrese 10 sueldos"<<endl;
	for(int i=0;i<10;i++){
		cout<<"Sueldo"<<i+1<<endl;
		cin>>sueldo;
		sueldos.push_back(sueldo);
		suma=suma+sueldo;
		
		promedio=suma/10;
		if(sueldos[i]>promedio){
			contador++;
		}else if(sueldos[i]<promedio){
			contador1++;
		}
	}
	cout<<"Sueldo promedio"<<promedio<<endl;
	cout<<"Sueldos que estan por encima del proemdio"<<contador<<endl;
	cout<<"Suledos que estan por debajo del promedio"<<contador1<<endl;
	return 0;
}
