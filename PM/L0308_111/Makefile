CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I../L0306_110

all: L0308_111.exe

L0308_111.exe: L0308_111.o L0308_111test.o ../L0306_110/L0306_110.o
	$(CXX) $(CXXFLAGS) -o $@ $^

L0308_111.o: L0308_111.cpp L0308_111.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0308_111test.o: L0308_111test.cpp L0308_111.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

../L0306_110/L0306_110.o: ../L0306_110/L0306_110.cpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o L0308_111.exe ../L0306_110/L0306_110.o