#include <iostream>
#include <string>
using namespace std;

void mostrarReglas() {
    cout << "\n=== REGLAS DEL JUEGO ===\n";
    cout << "1) Existen 3 filas con 3, 5 y 7 objetos.\n";
    cout << "2) Cada jugador debe retirar objetos de una sola fila.\n";
    cout << "3) No se pueden retirar más objetos de los que hay disponibles.\n";
    cout << "4) El jugador que deje exactamente 1 objeto pierde.\n";
    cout << "5) Si no quedan objetos, se considera empate.\n";
}

int main() {
    int opcionMenu;
    bool activo = true;

    while (activo) {
        cout << "\n--- MENU PRINCIPAL ---\n";
        cout << "1) Comenzar partida\n";
        cout << "2) Ver reglas\n";
        cout << "3) Finalizar\n";
        cout << "Ingrese su opcion: ";
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1:
                cout << "La partida iniciará pronto...\n";
                break;

            case 2:
                mostrarReglas();
                break;

            case 3:
                cout << "Cerrando el programa. ¡Hasta luego!\n";
                activo = false;
                break;

            default:
                cout << "Opción inválida, intente nuevamente.\n";
                break;
        }
    }

    return 0;
}