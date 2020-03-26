#pragma once
#include "Utilities.h"
#include "Force.h"
#include <vector>

class Physics
{
private:
    //Array of forces
    std::vector<Force*> forces;

public:
    //Pushes back a force to the array
    inline void addForce(Force* value) { forces.push_back(value); }
    //Gets a reference to the array of forces
    inline std::vector<Force*> getForces() { return forces; }
    
    //Finds the sum total of all forces
    Vector3 getForceTotal(double deltaT);
};

