#include<iostream>
using namespace std;
int main(){
	int num;
	int negativos=0;
	int positivos=0;
	int cero=0;
	
	for(int i=1;i<=10;i++){
		cout<<"Ingrese 10 numeros: "<<i<<"."<<endl;
			cin>>num;
		if(num<0){
			negativos++;
		}else if(num>0){
			positivos++;
		}else if(num==0){
			cero++;
		}
	}
	
	cout<<positivos<<" son numeros positivos"<<endl;
	cout<<negativos<<" son numeros negativos"<<endl;
	cout<<cero<<" son igual a cero"<<endl;
	return 0;
}
