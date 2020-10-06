#include <iostream>
#include "SedePrincipal.h"

using namespace std;

// Fabrica 1
int main() {
    SedePrincipal *sedePrinc = SedePrincipal::getInstance();

    int numBotellasLimonada = 55;
    sedePrinc->addLimonada(numBotellasLimonada);

    cout << sedePrinc->getNumLimonada() << endl;
    // Imprimirá 55

    cout << sedePrinc->getNumCola() << endl;
    // Imprimirá 0

    // Fabrica 2
    SedePrincipal *sedePrinc2 = SedePrincipal::getInstance();

    int numBotellasLimonada2 = 55;
    int numBotellasCola2 = 40;
    sedePrinc2->addLimonada(numBotellasLimonada2);
    sedePrinc2->addCola(numBotellasCola2);
    cout << sedePrinc2->getNumLimonada() << endl;
    // Imprimirá 110

    cout << sedePrinc2->getNumCola();
    // Imprimirá 40
    return 0;
}
