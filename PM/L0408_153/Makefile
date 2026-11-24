SHELL := cmd.exe

EXEFILE = L0408_153.exe
OBJFILES = L0403_149.o L0408_153.o L0408_153main.o

$(EXEFILE): $(OBJFILES)
	$(CXX) -o $(EXEFILE) $(OBJFILES)

L0403_149.o: ../L0403_149/L0403_149.cpp
	$(CXX) -c ../L0403_149/L0403_149.cpp

L0408_153.o: L0408_153.cpp
	$(CXX) -c L0408_153.cpp

L0408_153main.o: L0408_153main.cpp
	$(CXX) -c L0408_153main.cpp

.PHONY: clean run all
clean:
	rm -f $(OBJFILES) $(EXEFILE) 
run:
	$(EXEFILE)
all: $(EXEFILE) run clean