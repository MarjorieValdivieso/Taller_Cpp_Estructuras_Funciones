#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
struct Cliente{
	string nombre;
	int edad;
	float consumoMensual;
	
};
int main(){
	vector<Cliente>clientes;
	Cliente c;
	 int n;
	 cout<<"Ingrese la cantidad de clientes que desea ingresar: "<<endl;
	 cin>>n;
	 for(int i=0;i<n;i++){
	 	cout<<"Clientes"<<i+1<<endl;
	 	cout<<"Nombre: "<<endl;
	 	cin.ignore();
	 	
	 	getline(cin, c.nombre);
	 	cout<<"Edad: "<<endl;
	 	cin>>c.edad;
	 	cout<<"Consumo mensual: "<<endl;
	 	cin>>c.consumoMensual;
	 	clientes.push_back(c);
	 	
	 }
		ofstream archivo("clientes.txt");
		for(int i=0;i<(int)clientes.size();i++){
			archivo<<clientes[i].nombre<<" "<<clientes[i].edad<<" " <<clientes[i].consumoMensual<<endl;
			
		}
		archivo.close();
		clientes.clear();
		
		    ifstream leer("clientes.txt");
		    for (int i = 0; i < n; i++) {
		        leer >> c.nombre >> c.edad >> c.consumoMensual;
		        clientes.push_back(c);
		    }
		    leer.close();
		     float consumoTotal = 0;
			    float mayorConsumo = clientes[0].consumoMensual;
			    string clienteMayor = clientes[0].nombre;
			
			    for (int i = 0; i <(int) clientes.size(); i++) {
			        consumoTotal += clientes[i].consumoMensual;
			
			        if (clientes[i].consumoMensual > mayorConsumo) {
			            mayorConsumo = clientes[i].consumoMensual;
			            clienteMayor = clientes[i].nombre;
			        }
			    }
			
			    float consumoPromedio = consumoTotal / clientes.size();
			
		
			    cout << "Consumo total: " << consumoTotal << endl;
			    cout << "Consumo promedio: " << consumoPromedio << endl;
			    cout << "Cliente con mayor consumo: " << clienteMayor << endl;
			
			    return 0;
	 
}
