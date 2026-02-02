#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
	struct Cliente{
		string nombre;
		int edad;
		
	};
int main(){
	vector<Cliente>clientes;
	Cliente c;
	int n;
	string buscar;
	int encontrado=0;
	cout<<"Ingrese la cantidad de clientes que desea ingresar: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Cliente"<<i+1<<endl;
		cout<<"Nombre: "<<endl;
		cin.ignore();
		getline(cin,c.nombre);
		cout<<"Edad: "<<endl;
		cin>>c.edad;
		clientes.push_back(c);
		
	}
	ofstream archivo("clientes.txt");
	for(int i=0;i<(int)clientes.size();i++){
		archivo<<clientes[i].nombre<<" "<<clientes[i].edad<<endl;
		
	}
	archivo.close();
	cout<<"Datos guardados en el archivo"<<endl;
	cout<<"Ingrese el nombre del clientes que desea buscar: "<<endl;
	cin.ignore();
	getline(cin, buscar);
	for(int i=0;i<(int)clientes.size();i++){
		if(clientes[i].nombre==buscar){
			cout<<"Cliente encontrado "<<endl;
			cout<<"Edad: "<<clientes[i].edad<<endl;
			encontrado=1;
			break;
		}
	}
	if(encontrado==0){
		cout<<"Cliente no registrado"<<endl;
	}
	return 0;
	
}
