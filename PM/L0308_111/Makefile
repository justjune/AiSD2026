CXX = g++
CXXFLAGS = -std=c++17 -I../L0306_110

TARGET = L0308_111.exe
OBJS = L0308_111.o L0308_111test.o ../L0306_110/L0306_110.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

L0308_111.o: L0308_111.cpp L0308_111.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0308_111test.o: L0308_111test.cpp L0308_111.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

../L0306_110/L0306_110.o: ../L0306_110/L0306_110.cpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)