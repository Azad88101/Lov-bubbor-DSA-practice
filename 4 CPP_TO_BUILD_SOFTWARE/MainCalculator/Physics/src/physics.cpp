#include "physics.h"

namespace physics
{

    // Calculate force: F = m * a
    double calcForce(double mass, double acceleration)
    {
        return mass * acceleration;
    }

    // Calculate kinetic energy: KE = 0.5 * m * v^2
    double calcKineticEnergy(double mass, double velocity)
    {
        return 0.5 * mass * velocity * velocity;
    }

    // Calculate potential energy: PE = m * g * h
    double calcPotentialEnergy(double mass, double gravity, double height)
    {
        return mass * gravity * height;
    }

} // namespace physics
