CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = queens

OBJ = Board.o Queen.o main.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

Board.o: Board.cpp Board.h
	$(CXX) $(CXXFLAGS) -c Board.cpp

Queen.o: Queen.cpp Queen.h Board.h
	$(CXX) $(CXXFLAGS) -c Queen.cpp

main.o: main.cpp Board.h Queen.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f $(OBJ) $(TARGET)
