CXX = g++
CXXFLAGS = --std=c++20 -Wall -Wextra -pedantic -O2

SRC = main.cc
TARGET = sse

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) 
