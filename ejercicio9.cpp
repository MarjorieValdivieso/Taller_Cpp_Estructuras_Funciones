#include<iostream>
using namespace std;
int main(){
	int num;
	int rango=0;
	int norango=0;
	for(int i=0;i<=14;i++){
		cout<<"Ingrese 15 numeros: "<<i<<endl;
		cin>>num;
		if(num>=20 && num<=80){
			rango++;
			
		}else{
			norango++;
		}
	}
	cout<<rango<<" se encuentra en el rango"<<endl;
	cout<<norango<<" no se encuentra en el rango"<<endl;
	return 0;
}
