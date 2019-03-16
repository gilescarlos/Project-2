//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#ifndef PATIENTFEES_SURGERY_H
#define PATIENTFEES_SURGERY_H

#include <string>

using namespace std;

class Surgery {
private:
    double operateKnee, operateHeart, operateBrain, operateShoulder, operateWrist, operateAnkle;
public:
    Surgery();
    double getKneePrice();
    double getHeartPrice();
    double getBrainPrice();
    double getShoulderPrice();
    double getWristPrice();
    double getAnklePrice();
};


#endif //PATIENTFEES_SURGERY_H
