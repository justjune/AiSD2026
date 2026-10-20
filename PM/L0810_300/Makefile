CXX=g++

ifeq ($(OS),Windows_NT)
	RM=rm
	EXT=.exe
else
	RM=rm
	EXT=

endif


L0810_300o=L0810_300.o test_L0810_300.o

L0810_300.exe: $(L0810_300o)
	$(CXX) -o L0810_300.exe $(L0810_300o)

L0810_300.o: L0810_300.cpp
	$(CXX) $(CXXFLAGS) -c L0810_300.cpp

test_L0810_300.o: test_L0810_300.cpp L0810_300.hpp
	$(CXX) $(CXXFLAGS) -c test_L0810_300.cpp

.PHONY: clean run all
clean:
	$(RM) -f $(L0810_300o) L0810_300.exe
run:
	chcp 65001
	./L0810_300.exe
	chcp 866
all: ./L0810_300.exe run clean
