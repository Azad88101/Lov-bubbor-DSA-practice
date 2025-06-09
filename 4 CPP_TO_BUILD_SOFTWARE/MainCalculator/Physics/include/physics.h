#ifndef PHYSICS_FUNCTION_H
#define PHYSICS_FUNCTION_H

#if defined(_WIN32) || defined(_WIN64)
  #ifdef PHYSICS_EXPORTS
    #define PHYSICS_API __declspec(dllexport)
  #else
    #define PHYSICS_API __declspec(dllimport)
  #endif
#elif defined(__linux__) || defined(__APPLE__)
  #define PHYSICS_API __attribute__((visibility("default")))
#endif

namespace physics
{
    // Calculate force: F = m * a
    PHYSICS_API double calcForce(double mass, double acceleration);

    // Calculate kinetic energy: KE = 0.5 * m * v^2
    PHYSICS_API double calcKineticEnergy(double mass, double velocity);

    // Calculate potential energy: PE = m * g * h
    PHYSICS_API double calcPotentialEnergy(double mass, double gravity, double height);
}

#endif // PHYSICS_FUNCTION_H
