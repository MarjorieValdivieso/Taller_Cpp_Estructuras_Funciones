#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>numeros;
	int num;
	int max;
	int min;
	cout<<"Ingrese 8 numeros: "<<endl;
	for(int i=0;i<8;i++){
	
		cout<<"Numero: "<<i+1<<endl;
		cin>>num;
		numeros.push_back(num);
	}
	for(int i=0;i<8;i++){
		if(numeros[i]==0){
			max=numeros[i];
			min=numeros[i];
			
		}else if(numeros[i]>max){
			max=numeros[i];
		}else if(numeros[i]<min){
			min=numeros[i];
		}
	}
	float rango=max-min;
	
	cout<<"El valor maximo es: "<<max<<endl;
	cout<<"El valor minimo es: "<<min<<endl;
	cout<<"Rango: "<<rango<<endl;
	return 0;
	
}
