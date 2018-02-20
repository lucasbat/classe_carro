/*
Programa em C++ com classe denominada Carro com os seguintes dados-membros:
Frabricante, modelo, placa e ano de fabricacao.
E os seguintes metodos:
set_dados
print_dados
metodos para imprimir cada dado individualmente.
Tambem uma funcao principal que utiliza a classe Carro com todos os seus metodos.
Implementar metodos dentro da classe
*/

#include<iostream>
#include<string>
using namespace std;
class Carro{
	private:
		string fab, modelo, placa, ano;
	public:
		void set_dados(){
			cout<<"\nDigite Fabricante: "; getline(cin,fab);
			cout<<"\nDigite Modelo: "; getline(cin,modelo);
			cout<<"\nDigite Placa: "; getline(cin,placa);
			cout<<"\nDigite Ano: "; cin>>ano;
			cin.ignore();
		}
		void print_dados(){
			cout<<"\nDigite Fabricante: "<<fab;
			cout<<"\nDigite Modelo: "<<modelo;
			cout<<"\nDigite Placa: "<<placa;
			cout<<"\nDigite Ano: "<<ano;
		}
		void print_fab(){
			cout<<"\nFabricante: "<<fab;
		}
		void print_modelo(){
			cout<<"\nModelo: "<<modelo;
		}
		void print_placa(){
			cout<<"\nPlaca: "<<placa;
		}
		void print_ano(){
			cout<<"\nAno: "<<ano;
		}
};
int main(){
	int op=0;
	Carro A,B;
	A.set_dados();
	//A.print_dados();  //Imprime todos os dados
	do{
	cout<<"\n\n[1]Fabricante [2]Modelo [3]Placa [4]Ano [0]Sair\n\n";cin>>op;
		switch(op){
			case 1:
				A.print_fab();
				break;
			case 2:
				A.print_modelo();
				break;
			case 3:
				A.print_placa();
				break;
			case 4:
				A.print_ano();
				break;
		}
	}while(op>=1 && op<=4);

	cout<<"\n\n";
	return 0;
};
