#include<iostream>
using namespace std;
int main(){
	int arr[12];
	int sumapares=0;
	int sumaimpares=0;

	for(int i=0;i<12;i++){
		cout<<"Ingrese 12 numeros: "<<i+1<<endl;
		cin>>arr[i];
		if(arr[i]%2==0){
			sumapares+=arr[i];
		}else{
			sumaimpares+=arr[i];
			
		}
	}
	cout<<"Suma de numeros pares: "<<sumapares<<endl;
	cout<<"Suma de numeros impares: "<<sumaimpares<<endl;
	
	if(sumapares>sumaimpares){
		cout<<"La suma de oares es mayor"<<endl;
	}else if(sumaimpares>sumapares){
		cout<<"La suma de impares es mayor"<<endl;
	}else{
		cout<<"Ambas sumas son igualws"<<endl;
	}
	return 0;
	
}
