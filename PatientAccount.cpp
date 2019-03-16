//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#include "PatientAccount.h"
#include <iostream>
#include <string>

using namespace std;

PatientAccount::PatientAccount() {
    setPatientCharges(0.0);
    setDaysInHospital(1);
    setDailyRate(1000.0);
}

PatientAccount::PatientAccount(double charges, int days, double rate) {
    setPatientCharges(charges);
    setDaysInHospital(days);
    setDailyRate(rate);
}

void PatientAccount::setSurgeryCharges(int choice)
{
    if (choice == 1)
        patientCharges += surgeryCharges.getKneePrice();
    else if (choice == 2)
        patientCharges += surgeryCharges.getHeartPrice();
    else if (choice == 3)
        patientCharges += surgeryCharges.getBrainPrice();
    else if (choice == 4)
        patientCharges += surgeryCharges.getShoulderPrice();
    else if (choice == 5)
        patientCharges += surgeryCharges.getWristPrice();
    else if (choice == 6)
        patientCharges += surgeryCharges.getAnklePrice();
}

void PatientAccount::setPharmacyCharges(int choice)
{
    if (choice == 1)
        patientCharges += pharmacyCharges.getAntibiotic();
    else if (choice == 2)
        patientCharges += pharmacyCharges.getVaccine();
    else if (choice == 3)
        patientCharges += pharmacyCharges.getPainkiller();
    else if (choice == 4)
        patientCharges += pharmacyCharges.getAnesthetic();
    else if (choice == 5)
        patientCharges += pharmacyCharges.getAdderall();
}

void PatientAccount::setPatientCharges(double charges) { patientCharges = charges; }
void PatientAccount::setDaysInHospital(int days) { daysInHospital = days; }
void PatientAccount::setDailyRate(double rate) { dailyRate = rate; }

double PatientAccount::getPatientCharges() { return patientCharges; }
int PatientAccount::getDaysInHospital() { return daysInHospital; }
double PatientAccount::getDailyRate() { return dailyRate; }