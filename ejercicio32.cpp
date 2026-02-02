#include<iostream>
#include<vector>
using namespace std;
struct Cliente{
	string nombre;
	int edad;
	
};
int main(){
	vector<Cliente>clientes;
	Cliente c;
	int num;
	cout<<"Cuantos clientes desea registrar: "<<endl;
	cin>>num;
	for(int i=0;i<num;i++){
		cout<<"Cliente: "<<i+1<<endl;
		
		cout<<"Nombre: "<<endl;
		cin.ignore();
		getline(cin, c.nombre);
		cout<<"Edad: "<<endl;
		cin>>c.edad;
		clientes.push_back(c);
		
	}
	cout<<"----CLIENTES----"<<endl;
	for(int i=0;i<(int)clientes.size();i++){
		cout<<"Cliente "<<i+1<<endl;
		cout<<"Nombre: "<<clientes[i].nombre<<endl;
		cout<<"Edad: "<<clientes[i].edad<<endl;
		
						
	}
	return 0;
	
}
