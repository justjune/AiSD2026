CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I../L0306_110 -I../L0309_112

all: L0310_112.exe

L0310_112.exe: L0310_112.o L0310_112test.o ../L0306_110/L0306_110.o ../L0309_112/L0309_112.o
	$(CXX) $(CXXFLAGS) -o $@ $^

L0310_112.o: L0310_112.cpp L0310_112.hpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0310_112test.o: L0310_112test.cpp L0310_112.hpp ../L0306_110/L0306_110.hpp ../L0309_112/L0309_112.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

../L0306_110/L0306_110.o: ../L0306_110/L0306_110.cpp ../L0306_110/L0306_110.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

../L0309_112/L0309_112.o: ../L0309_112/L0309_112.cpp ../L0309_112/L0309_112.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o L0310_112.exe