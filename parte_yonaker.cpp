#include <iostream>
#include <string>
using namespace std;


	
	void mostrar_reglas () {
		cout << "\n=== REGLAS DEL JUEGO ===\n";
		cout << "1) Existen 3 filas con 3, 5 y 7 objetos.\n";
		cout << "2) Cada jugador debe retirar objetos de una sola fila.\n";
		cout << "3) No se pueden retirar más objetos de los que hay disponibles.\n";
		cout << "4) El jugador que deje exactamente 1 objeto pierde.\n";
		cout << "5) Si no quedan objetos, se considera empate.\n";
	}
	void mostrar_filas(int f1, int f2, int f3){
		cout <<"Estado actual: ";
		cout <<"Fila 1"<<f1<<endl;
		cout <<"Fila 2"<<f2<<endl;
		cout <<"Fila 3"<<f3<<endl;
	}
	int main(int argc, char *argv[]) {
		int opcion_menu;
		bool activo = true;
			
		while (activo) {
			cout << "\n--- MENU PRINCIPAL ---\n";
			cout << "1) Comenzar partida\n";
			cout << "2) Ver reglas\n";
			cout << "3) Finalizar\n";
			cout << "Ingrese su opcion: ";
			cin >> opcion_menu;
				
			switch (opcion_menu) {
			case 1:{
				int f1 = 3, f2 = 5, f3 = 7;
				int Fila, Cantidad;
				int jugador = 1;
					
				while (true){
					mostrar_filas(f1, f2, f3);
					int total= f1 + f2 +3;
						
					if(total == 0){
						cout<<"empate, no quedan mas numeros en las filas";
						break;
						}
						if(total == 1){
							cout<<"jugador"<<jugador<<"pierde por dejar 1";
							break;
						}
						cout<<"Turno del jugor"<<jugador<<endl;
						cout<<"seleccione fila (1-3): ";
						cin >> Fila;
						cout<<"cantidad a retirar: ";
						cin >> Cantidad;
						
						if (Fila == 1){
							if (Cantidad > 0 && Cantidad <= f1){
								f1 -=Cantidad;
							}else{
								cout<<"movimiento invalido";
								continue;
							}
						}else if (Fila == 2){
							if(Cantidad > 0 && Cantidad <= f2){
								f2 -= Cantidad;
							}else{
								cout<<"movimiento invalido";
								continue;
							}
						}else if (Fila == 3){
							if (Cantidad > 0 && Cantidad <= f3){
								f3 -= Cantidad;
							}else {
								cout<<"movimiento invalido";
								continue;
							}
						}else{
							cout<<"fila invalida.";
							continue;
						}
						jugador = (jugador == 1) ? 2:1;
					}
						break;
					}
				case 2:
						   mostrar_reglas();
						   break;
						   
				case 3:
					cout << "Cerrando el programa. ¡Hasta luego! ING SISTEMAS\n";
					activo = false;
					break;
					
				default:
					cout << "Opción inválida, intente nuevamente.\n";
					break;
				}
			}

	return 0;
}

