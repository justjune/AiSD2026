SHELL := cmd.exe
L0403149o=L0403_149.o L0403_149main.o
L0403149.exe: $(L0403149o)
	$(CXX) -o L0403149.exe $(L0403149o)

L0403_149.o: L0403_149.cpp
	$(CXX) -c L0403_149.cpp

L0403_149_main.o: L0403_149main.cpp L0403_149.hpp
	$(CXX) -c L0403_149main.cpp

.PHONY: clean run all
clean:
	$(RM) $(objects) $(L0403149o) m.exe L0403149.exe
run:
	L0403149.exe
all: L0403149.exe run clean