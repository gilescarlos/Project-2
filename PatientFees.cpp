#include <iostream>
#include "PatientAccount.h"

using namespace std;

int main() {
    int days, choice;
    double totalCost;
    char exit;
    PatientAccount newPatient;

    do {
        cout << "\t\tHOSPITAL OPTIONS" << endl;
        do {
            cout << "\n\tSurgery Options (Enter 0 to exit)" << endl;
            cout << "1. Operate on knee. " << endl;
            cout << "2. Operate on heart. " << endl;
            cout << "3. Operate on brain. " << endl;
            cout << "4. Operate on shoulder. " << endl;
            cout << "5. Operate on price. " << endl;
            cout << "6. Operate on ankle. " << endl;

            cout << "\nEnter Operation Performed: ";
            cin >> choice;
            newPatient.setSurgeryCharges(choice);

        } while (choice != 0);

        do {
            cout << "\n\tMedications Used (Enter 0 to exit)" << endl;
            cout << "1. Antibiotics" << endl;
            cout << "2. Vaccines" << endl;
            cout << "3. Pain Killers" << endl;
            cout << "4. Anesthetics" << endl;
            cout << "5. Adderall" << endl;

            cout << "\nEnter Medications Used: ";
            cin >> choice;
            newPatient.setPharmacyCharges(choice);

        } while (choice != 0);


        cout << "Days stayed in the hospital:  ";
        cin >> days;
        newPatient.setDaysInHospital(days);

        cout << endl << "Hospital Report for Patient" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Days in the hospital: " << newPatient.getDaysInHospital() << endl;
        cout << "Hospital daily rate: $" << newPatient.getDailyRate() << endl;
        cout << "Total Charges (Operation(s) + Prescription(s)): $" << newPatient.getPatientCharges() << endl;
        cout << "Total Cost after check out: $" << newPatient.getDailyRate() * newPatient.getDaysInHospital()
                                                    + newPatient.getPatientCharges() << endl;

        newPatient.setPatientCharges(0);

        cout << "Pay for another patient? (Y - Continue; N - Check out): ";
        cin >> exit;
        cout << endl;
    } while (toupper(exit) == 'Y');

    return 0;
}