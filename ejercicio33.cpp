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
	string nombremayor;
	int mayor=0;
	
	for(int i=0;i<3;i++){
		cout<<"Cliente"<<i+1<<endl;
		cout<<"Nombre: "<<endl;
		cin.ignore();
		getline(cin, c.nombre);
		cout<<"Edad: "<<endl;
		cin>>c.edad;
		clientes.push_back(c);
		
	}
	for(int i=0;i<(int)clientes.size();i++){
		if(clientes[i].edad>=18){
			nombremayor=clientes[i].nombre;
			mayor++;
			
		}
	}
	cout<<"Clientes mayores o igual a 18 anios son: "<<mayor<<endl;
	return 0;
	
}
