//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#ifndef PATIENTFEES_PATIENTACCOUNT_H
#define PATIENTFEES_PATIENTACCOUNT_H
#include "Pharmacy.h"
#include "Surgery.h"

using namespace std;

class PatientAccount {
private:
    double patientCharges;
    int daysInHospital;
    double dailyRate;
    Pharmacy pharmacyCharges;
    Surgery surgeryCharges;

public:
    PatientAccount();
    PatientAccount(double, int, double);

    void setPharmacyCharges(int);
    void setSurgeryCharges(int);

    void setPatientCharges(double);
    void setDaysInHospital(int);
    void setDailyRate(double);

    double getPatientCharges();
    int getDaysInHospital();
    double getDailyRate();
};


#endif //PATIENTFEES_PATIENTACCOUNT_H
