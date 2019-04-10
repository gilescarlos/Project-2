//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#ifndef PATIENTFEES_SURGERY_H
#define PATIENTFEES_SURGERY_H

#include <string>

using namespace std;

/*! \class Surgery
    \brief  A class to keep track of possible surgeries performed.

*/
class Surgery {
private:
    double operateKnee; /**< price to operate on a knee */
    double operateHeart; /**< price to operate on a heart */
    double operateBrain; /**< price to operate on a brain */
    double operateShoulder; /**< price to operate on a shouler */
    double operateWrist; /**< price to operate on a wrist */
    double operateAnkle; /**< price to operate on a ankle */
public:
    Surgery();
    double getKneePrice(); /**< retrieves price to operate on a knee */
    double getHeartPrice(); /**< retrieves price to operate on a heart */
    double getBrainPrice(); /**< retrieves price to operate on a brain */
    double getShoulderPrice(); /**< retrieves price to operate on a shoulder */
    double getWristPrice(); /**< retrieves price to operate on a wrist */
    double getAnklePrice(); /**< retrieves price to operate on a ankle */
};


#endif //PATIENTFEES_SURGERY_H
