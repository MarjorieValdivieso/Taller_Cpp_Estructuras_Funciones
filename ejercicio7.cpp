#include<iostream>
using namespace std;
int main(){
	int multiplos=0;
	int nomultiplo=0;
	for(int i=1;i<=50;i++){
		if(i%3==0){
			multiplos++;
		}else{
			nomultiplo++;
		}
	}
	cout<<multiplos<<"son multiplos de 3"<<endl;
	cout<<nomultiplo<<"no son multiplos de 3"<<endl;
	return 0;
}
