CXX = g++
CXXFLAGS = -std=c++17

TARGET = L0705_243.exe
OBJS = L0705_243.o L0705_243test.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

L0705_243.o: L0705_243.cpp L0705_243.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0705_243test.o: L0705_243test.cpp L0705_243.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)