#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Ingrese un numero entero: "<<endl;
	cin>>num;
	if(num>=10 && num<=50 ){
		cout<<"El valor es valido"<<endl;
		
	}else{
		cout<<"El valor no es valido"<<endl;
	}
	return 0;
	
}
