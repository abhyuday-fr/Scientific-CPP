CXX = g++
CXXFLAGS = -O3 -Wall -Wextra
TARGET = projectile
SRC = projectile.cpp
DATA = trajectory.dat

# default target: build the simulation
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# run the simulation and generate the data
run: $(TARGET)
	./$(TARGET)

# plot the data using gnuplot
plot: run
	gnuplot -p -e "set title 'Projectile Trajectory'; set xlabel 'Distance (m)'; set ylabel 'Height (m)'; plot '$(DATA)' with lines title 'Trajectory' lw 2"

# clean and build files and data
clean:
	rm -f $(TARGET) $(DATA)