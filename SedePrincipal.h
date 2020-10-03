//
// Created by Sebastian on 10/3/2020.
//

#ifndef UNTITLED2_SEDEPRINCIPAL_H
#define UNTITLED2_SEDEPRINCIPAL_H
#include <iostream>
#include <sstream>
using namespace std;
class SedePrincipal {
private :
    int num_limonada;
    int num_cola;

    SedePrincipal();

    static SedePrincipal *instance;
    // El constructor privado evita que se instancie esta clase fuera de la misma


public:
    static SedePrincipal *getInstance();

    int getNumLimonada();

    int getNumCola();

    void addLimonada(int num);

    void addCola(int num);

    ~SedePrincipal();
};


#endif //UNTITLED2_SEDEPRINCIPAL_H
