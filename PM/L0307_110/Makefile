CXX = g++
CXXFLAGS = -std=c++17 -I../L0306_110

TARGET = L0307_110.exe
OBJS = L0307_110.o L0307_110test.o ../L0306_110/L0306_110.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

L0307_110.o: L0307_110.cpp L0307_110.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0307_110test.o: L0307_110test.cpp L0307_110.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

../L0306_110/L0306_110.o: ../L0306_110/L0306_110.cpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)