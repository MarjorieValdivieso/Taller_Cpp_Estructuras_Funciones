#include<iostream>
using namespace std;
int main(){
	int matriz[4][4];
	int positivo=0;
	int negativo=0;
	int cero=0;
	cout<<"Ingrese los valores a la matriz 4x4"<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout << "Elemento [" << i << "][" << j << "]: ";
			cin>>matriz[i][j];
			if(matriz[i][j]>0){
				positivo++;
			}else if(matriz[i][j]<0){
				negativo++;
				
			}else if(matriz[i][j]==0){
				cero++;
			}
		}
	}
	cout<<"Valores positivios "<<positivo<<endl;
	cout<<"Valores negativos "<<negativo<<endl;
	cout<<"Valores igual a cero"<<cero<<endl;
	return 0;
	
}
