#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

int main(){

    //Fd = (1/2)*rho*(velocity^2)*C_d*A

    // constants
    const double g = 9.81; // gravity m/s^2
    const double rho = 1.225; // air density kg/m^3
    const double C_d = 0.47; // drag coeff of sphere
    const double radius = 0.05; // 5 cm radium
    const double mass = 0.5; // kg
    const double PI = 3.14159;
    const double A = PI * std::pow(radius, 2); // Cross-sectional area
    const double k = 0.5 * rho * C_d * A; // drag constant

    // inital conditions
    double x = 0, y = 0;
    double velocity = 50.0; // m/s
    double angle = 45.0; // degrees
    double vx = velocity * cos(angle * PI / 180.0);
    double vy = velocity * sin(angle * PI / 180.0);

    double dt = 0.01; // time step

    std::ofstream dataFile("trajectory.dat");

    while(y >= 0){
        dataFile << x << " " << y << "\n";

        double v = std::sqrt(vx * vx + vy * vy);

        // calculating acceleration (a = F/m)
        double ax = -(k * v * vx) / mass;
        double ay = -g - (k * v * vy) / mass;

        // update velocities
        vx += ax * dt;
        vy += ay * dt;

        // update positions
        x += vx * dt;
        y += vy * dt;
    }

    dataFile.close();
    std::cout << "Simulation complete. Data saved to trajectory.dat\n";

    return 0;
}