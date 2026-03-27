CXX = g++
CXXFLAGS = -O3 -Wall -Wextra
TARGET = variance
SRC = gravitation.cpp
DATA = variance.dat

# default target: build the simulation
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# run the simulation and generate the data
run: $(TARGET)
	./$(TARGET)

# plot the data using gnuplot
plot: run
	gnuplot -p -e "set title 'Force Variation'; set xlabel 'Distacnce (m)'; set ylabel 'Force (N)'; plot '$(DATA)' with lines title 'Variance' lw 2"

# clean and build files and data
clean:
	rm -f $(TARGET) $(DATA)