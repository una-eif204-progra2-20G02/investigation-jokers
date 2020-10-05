//
// Created by Sebastian on 10/3/2020.
//

#include "SedePrincipal.h"

void SedePrincipal::addCola(int num) {
    num_cola += num;
}
SedePrincipal::SedePrincipal() {
    num_limonada = 0;
    num_cola = 0;
}
int SedePrincipal::getNumCola() {
    return num_cola;
}
void SedePrincipal::addLimonada(int num) {
    num_limonada += num;
}

int SedePrincipal::getNumLimonada() {
    return num_limonada;
}



SedePrincipal::~SedePrincipal() {}

/* Null, because instance will be initialized on demand. */
SedePrincipal* SedePrincipal::instance = nullptr;

SedePrincipal *SedePrincipal::getInstance() {
    if (!instance) {
        instance = new SedePrincipal();
    }
    return instance;
}