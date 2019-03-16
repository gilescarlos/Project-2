//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#include "Pharmacy.h"

Pharmacy::Pharmacy() {
    antibiotic = 45.50;
    vaccine = 115.85;
    painkiller = 6.50;
    anesthetic = 450.55;
    adderall = 74.30;

}

double Pharmacy::getAntibiotic() { return antibiotic; }
double Pharmacy::getVaccine() { return vaccine; }
double Pharmacy::getPainkiller() { return painkiller; }
double Pharmacy::getAnesthetic() { return anesthetic; }
double Pharmacy::getAdderall() { return adderall; }