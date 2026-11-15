CXX = g++
CXXFLAGS = -std=c++17

TARGET = L0704_243.exe
OBJS = L0704_243.o L0704_243test.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

L0704_243.o: L0704_243.cpp L0704_243.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0704_243test.o: L0704_243test.cpp L0704_243.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)