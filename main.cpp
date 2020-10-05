#include <iostream>
#include "SedePrincipal.h"

using namespace std;

// Fabrica de limonada 1
int main() {
    SedePrincipal *sedeprinc = SedePrincipal::getInstance();

    int numBotellasLimonada = 55;
    sedeprinc->addLimonada(numBotellasLimonada);

    cout << sedeprinc->getNumLimonada() << endl;
    // Imprimirá 55

    cout << sedeprinc->getNumCola() << endl;
    // Imprimirá 0
    SedePrincipal *sedeprinc2 = SedePrincipal::getInstance();

    int numBotellasLimonada2 = 55;
    int numBotellasCola2 = 40;
    sedeprinc2->addLimonada(numBotellasLimonada2);
    sedeprinc2->addCola(numBotellasCola2);
    cout << sedeprinc2->getNumLimonada() << endl;
    // Imprimirá 110

    cout << sedeprinc2->getNumCola();
    // Imprimirá 40
    return 0;
}
