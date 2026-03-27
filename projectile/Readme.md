# Projectile Motion Simulation 🚀
A C++ simulation of projectile motion that accounts for atmospheric conditions and air resistance (drag). This project calculates the trajectory of a spherical object and generates
      data for visualization.

## 📝 Description
This simulation uses Euler's method for numerical integration to calculate the position and velocity of a projectile over time. Unlike basic kinematic equations, this model includes
**air resistance** (drag force), which provides a more realistic representation of motion through the atmosphere.

### 🔬 Physics Model
- **Drag Force**: $F_d = \frac{1}{2} \rho v^2 C_d A$
- **Gravity**: Constant $g = 9.81 \, \text{m/s}^2$
- **Integration**: Euler method with a default time step of $0.01$s.

## 🛠️ Building and Running

### Prerequisites
- `g++` (C++ compiler)
- `make`
- `gnuplot` (for visualization)

### 🚀 Commands
1. **Build the simulation**:
     `make`
2. **Run the simulation**:
     `make run`

This generates a `trajectory.dat` file containing the $(x, y)$ coordinates.

3. **Plot the graph**:
     `make plot`
   
This will open a `gnuplot` window showing the trajectory.

5. **Clean up**:
     `make clean`

## 📊 Output
The simulation produces `trajectory.dat`, which can be plotted to visualize the curved path of the projectile as it's affected by both gravity and air resistance. 📉

---
*Developed for Scientific-CPP* 🧪
