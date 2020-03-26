#pragma once
#include "Utilities.h"

class Force
{
public:
    //We probably don't want a default constructor
    Force() = delete;

    //firstValue is the value force has at time = 0
    //k is the force coefficient
    //duration tells us how long the force is active
    Force(Vector3 firstValue, double k, double duration);

    //Every force can implement their own version of this function
    //While t < duration ==> F = F0 + k*t, otherwise F = 0
    //If duration == -1000, then force has constant value in time
    virtual Vector3 getForce(double deltaT);

    //Returns intensity of force using the formula
    //F = sqrt(Fx^2 + Fy^2 + Fz^2)
    //Not sure if we need this
    double getIntensity();

    //Returns true if the force has finished
    inline bool isFinished() { return finished; }

private:
    //Value at time = 0
    Vector3 Value;
    //Force coefficient
    double k;
    //If t > duration, then F = 0
    double duration;
    //Time the force has been active, starts at 0 by default;
    double elapsed = 0;
    //A simple bool so we know the force has finished
    bool finished = false;
};