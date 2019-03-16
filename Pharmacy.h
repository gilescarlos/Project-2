//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#ifndef PATIENTFEES_PHARMACY_H
#define PATIENTFEES_PHARMACY_H


class Pharmacy {
private:
    double antibiotic, vaccine, painkiller, anesthetic, adderall;
public:
    Pharmacy();
    double getAntibiotic();
    double getVaccine();
    double getPainkiller();
    double getAnesthetic();
    double getAdderall();
};



#endif //PATIENTFEES_PHARMACY_H
