#include<iostream>
using namespace std;
int main(){
	int num;
	int suma;
	
	cout<<"Ingrese un numero entero positivo"<<endl;
	cin>>num;
	
	if(num<0){
		cout<<"Ingrese un numero positivo"<<endl;
	}else{
		for(int i=1;i<=10;i++){
		
			cout<<num<<"*"<<i<<"="<<num*i<<endl;
			
			suma+=num*i;
		}
		cout<<"La suma de todos los resultados obtenidos es: "<<suma<<endl;
		
	}
	return 0;
}
