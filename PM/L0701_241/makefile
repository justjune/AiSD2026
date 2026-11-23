CXX = g++
CXXFLAGS = -std=c++17

TARGET = L0701_241.exe
OBJS = L0701_241.o L0701_241test.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

L0701_241.o: L0701_241.cpp L0701_241.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0701_241test.o: L0701_241test.cpp L0701_241.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)