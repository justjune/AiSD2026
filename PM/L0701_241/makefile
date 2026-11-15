l0701_241o=L0701_241.o L0701_241test.o
L0701_241.exe: $(l0701241o)
	$(CXX) -o L0701241$(EXT) $(l0701241o)

L0701_241.o: L0701_241.cpp
	$(CXX) -c L0701_241.cpp

L0701_241test.o: L0701_241test.cpp L0701_241.hpp
	$(CXX) -c L0701_241test.cpp

.PHONY: clean run all
clean:
	RM *.o *.exe
run:
	chcp 65001
	L0701241.exe
	chcp 866
all: L0701241.exe run clean