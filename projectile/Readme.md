# Projectile Motion Simulation 🚀
    2
    3 A C++ simulation of projectile motion that accounts for atmospheric conditions and air resistance (drag). This project calculates the trajectory of a spherical object and generates
      data for visualization.
    4
    5 ## 📝 Description
    6 This simulation uses Euler's method for numerical integration to calculate the position and velocity of a projectile over time. Unlike basic kinematic equations, this model includes
      **air resistance** (drag force), which provides a more realistic representation of motion through the atmosphere.
    7
    8 ### 🔬 Physics Model
    9 - **Drag Force**: $F_d = \frac{1}{2} \rho v^2 C_d A$
   10 - **Gravity**: Constant $g = 9.81 \, \text{m/s}^2$
   11 - **Integration**: Euler method with a default time step of $0.01$s.
   12
   13 ## 🛠️ Building and Running
   14
   15 ### Prerequisites
   16 - `g++` (C++ compiler)
   17 - `make`
   18 - `gnuplot` (for visualization)
   19
   20 ### 🚀 Commands
   21 1. **Build the simulation**:
     make
   1 2. **Run the simulation**:
     make run

   1    This generates a `trajectory.dat` file containing the $(x, y)$ coordinates.
   2
   3 3. **Plot the graph**:
     make plot
   1    This will open a `gnuplot` window showing the trajectory.
   2
   3 4. **Clean up**:
     make clean

   1
   2 ## 📊 Output
   3 The simulation produces `trajectory.dat`, which can be plotted to visualize the curved path of the projectile as it's affected by both gravity and air resistance. 📉
   4
   5 ---
   6 *Developed for Scientific-CPP* 🧪
