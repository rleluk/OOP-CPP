CXX=g++
CXXFLAGS= -Wall -g
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
TARGET=output

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%o: %.cpp
	$(CXX) -c $(CXXFLAGS) $^
	
clean: 
	rm -f *.o $(TARGET)

check:
	@valgrind ./$(TARGET)

run:
	./$(TARGET)

.PHONY: clean run check
