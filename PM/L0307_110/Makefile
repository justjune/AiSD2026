CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I../L0306_110

all: L0307_110.exe

L0307_110.exe: L0307_110.o L0307_110test.o ../L0306_110/L0306_110.o
	$(CXX) $(CXXFLAGS) -o $@ $^

L0307_110.o: L0307_110.cpp L0307_110.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0307_110test.o: L0307_110test.cpp L0307_110.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

../L0306_110/L0306_110.o: ../L0306_110/L0306_110.cpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o L0307_110.exe