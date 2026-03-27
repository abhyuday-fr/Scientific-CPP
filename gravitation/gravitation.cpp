#include <iostream>
#include <cmath>
#include <fstream>

int main(){
    // constants
    const double G = 6.6743e-11; // Gravitational constant
    const double mass1{2000}, mass2{3000}; // masses of body to be taken by user (in kg)
    
    // initial condition
    double distance = 20; // meters
    
    //force
    double force = G * mass1 * mass2 / std::pow(distance, 2);
    std::ofstream dataFile2("variance.dat");

    while(distance >= 0 && force >= 0){
        dataFile2 << distance << " " << force << "\n";

        distance--;
        force = G * mass1 * mass2 / std::pow(distance, 2);
    }

    dataFile2.close();

    std::cout << "Simulation complete. Data saved to variance.dat";

    return 0;
}
