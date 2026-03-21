#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int i = 1;
    double cateto1, cateto2, hipotenusa;

    // Calcula la hipotenusa cinco veces
    while (i <= 5) {

        cout << "Calculo : " << i << endl;

        // Solicitar los catetos
        cout << "Ingresa el valor del primer cateto: ";
        cin >> cateto1;

        cout << "Ingresa el valor del segundo cateto: ";
        cin >> cateto2;

        // Calcular la hipotenusa usando el teorema de Pitágoras
        hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

        // Mostrar el resultado
        cout << "La hipotenusa es: " << hipotenusa << endl;

        i++; // incrementar contador
    }

    return 0;
}

