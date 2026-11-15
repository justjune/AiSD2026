CXX = g++
CXXFLAGS = -std=c++17

TARGET = L0702_242.exe
OBJS = L0702_242.o L0702_242test.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

L0702_242.o: L0702_242.cpp L0702_242.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0702_242test.o: L0702_242test.cpp L0702_242.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)