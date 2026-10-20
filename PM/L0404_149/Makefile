SHELL := cmd.exe
L0404149o=L0404_149.o L0404_149main.o
L0404149.exe: $(L0404149o)
	$(CXX) -o L0404149.exe $(L0404149o)

L0404_149.o: L0404_149.cpp
	$(CXX) -c L0404_149.cpp

L0404_149_main.o: L0404_149main.cpp L0404_149.hpp
	$(CXX) -c L0404_149main.cpp

.PHONY: clean run all
clean:
	$(RM) $(objects) $(L0404149o) m.exe L0404149.exe
run:
	L0404149.exe
all: L0404149.exe run clean