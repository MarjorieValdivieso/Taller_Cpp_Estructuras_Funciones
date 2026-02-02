#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	vector<int>numero;
	int num;
	float posi=0;
	float nega=0;
	float valorAbsoluto=0;
	cout<<"Ingrese 12 numeros: "<<endl;
	for(int i=0;i<12;i++){
		cout<<"Numero: "<<i+1<<endl;
		cin>>num;
		numero.push_back(num);
		
	}
	for(int i=0;i<12;i++){
		if(numero[i]>0){
			posi+=numero[i];
		}else if(numero[i]<0){
			nega+=numero[i];
		}
		valorAbsoluto+=fabs(numero[i]);
	}
	cout<<"Suma de los valores positivos"<<posi<<endl;
	cout<<"Suma de los valores negativos"<<nega<<endl;
	cout<<"El valor absoluto total acumulado"<<valorAbsoluto<<endl;
	
	
	return 0;
	
	
}
