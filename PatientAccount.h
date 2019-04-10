//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#ifndef PATIENTFEES_PATIENTACCOUNT_H
#define PATIENTFEES_PATIENTACCOUNT_H
#include "Pharmacy.h"
#include "Surgery.h"

using namespace std;

/*! \class PatientAccount
    \brief  A class to keep track of a patient's charges, days stayed in the hospital, and the hospital's daily rate.

*/

class PatientAccount {
private:
    double patientCharges; /**< total amount of the patient's charges */
    int daysInHospital; /**< number of days the patient is in the hospital */
    double dailyRate; /**< the daily rate for staying in the hospital */
    Pharmacy pharmacyCharges; /**< amount of pharmacy charges */
    Surgery surgeryCharges; /**< amount of surgery charges */

public:
    PatientAccount();
    //! Date onstructor
    /*!
     * Constructor to create new date.
     * \param the total charges of the month
     * \param the total number of days checked in
     * \param the daily rate of stay
     * */
    PatientAccount(double, int, double);

    void setPharmacyCharges(int); /**< sets the amount of pharmacy charges */
    void setSurgeryCharges(int); /**< sets the amount of surgery charges */

    void setPatientCharges(double); /**< sets the total amount of charges */
    void setDaysInHospital(int); /**< sets the days checked in */
    void setDailyRate(double); /**< sets the daily rate */

    double getPatientCharges(); /**< retrieves the patient's charges */
    int getDaysInHospital(); /**< retrieves the number of days stayed */
    double getDailyRate(); /**< retrieves the daily rate */
};


#endif //PATIENTFEES_PATIENTACCOUNT_H
