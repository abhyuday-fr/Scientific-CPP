# Gravitational Force Simulation 🪐

This project is a simple C++ simulation that calculates the gravitational force between two point masses as the distance between them varies. 

## 🚀 Overview
The simulation uses Newton's Law of Universal Gravitation:
\[ F = G \frac{m_1 m_2}{r^2} \]
where:
- **`F`** is the gravitational force (Newtons)
- **`G`** is the gravitational constant (\( 6.6743 \times 10^{-11} \, \text{N} \cdot \text{m}^2 \cdot \text{kg}^{-2} \))
- **`m1`, `m2`** are the masses (fixed at 2000 kg and 3000 kg in the current implementation)
- **`r`** is the distance between the masses (m)

The program iterates through decreasing distances and calculates the corresponding force, saving the results to `variance.dat`.

## 🛠️ Getting Started
### Prerequisites
- A C++ compiler (e.g., `g++`)
- `make` build tool
- `gnuplot` (optional, for visualization)

### Building the Project
To compile the simulation, run:
```bash
make
```

### Running the Simulation
To execute the simulation and generate data:
```bash
make run
```
This will create a `variance.dat` file containing distance and force values.

### Visualizing the Results
If you have `gnuplot` installed, you can visualize the force-distance relationship with:
```bash
make plot
```

## 📂 Project Structure
- **`gravitation.cpp`**: Core C++ implementation.
- **`Makefile`**: Build system for compilation, execution, and plotting.
- **`.gitignore`**: Ignores build artifacts and generated data.
