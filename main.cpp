#include <iostream>
#include "SedePrincipal.h"

using namespace std;
// Fabrica de limonada 1
int main() {
SedePrincipal* sedeprinc=SedePrincipal::getInstance();

    int num_botellas_producidas = 55;
    sedeprinc->addLimonada(num_botellas_producidas);

cout<<sedeprinc->getNumLimonada();
    // Imprimirá 55

cout<<sedeprinc->getNumCola();
    // Imprimirá 0
return 0;
}
