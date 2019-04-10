//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#ifndef PATIENTFEES_PHARMACY_H
#define PATIENTFEES_PHARMACY_H

/*! \class Pharmacy
    \brief  A class to keep track of possible medications purchased.

*/
class Pharmacy {
private:
    double antibiotic; /**< price of an antibiotic */
    double vaccine; /**< price of a vaccine */
    double painkiller; /**< price of a painkiller */
    double anesthetic; /**< price of anesthetic */
    double adderall; /**< price of adderall */
public:
    Pharmacy();
    double getAntibiotic(); /**< retrieves price of an antibiotic */
    double getVaccine(); /**< retrieves price of a vaccine */
    double getPainkiller(); /**< retrieves price of a painkiller */
    double getAnesthetic(); /**< retrieves price of anesthesia */
    double getAdderall(); /**< retrieves price of adderall */
};



#endif //PATIENTFEES_PHARMACY_H
