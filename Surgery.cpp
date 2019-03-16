//
// Created by Giles Pierre Carlos on 2019-03-16.
//

#include "Surgery.h"

Surgery::Surgery() {
    operateKnee = 10000;
    operateHeart = 70000;
    operateBrain = 50000;
    operateShoulder = 8000;
    operateWrist = 7000;
    operateAnkle = 9000;

}

double Surgery::getKneePrice() { return operateKnee; }
double Surgery::getHeartPrice() { return operateHeart; }
double Surgery::getBrainPrice() { return operateBrain; }
double Surgery::getShoulderPrice() { return operateShoulder; }
double Surgery::getWristPrice() { return operateWrist; }
double Surgery::getAnklePrice() { return operateAnkle; }