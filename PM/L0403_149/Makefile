SHELL := cmd.exe

EXEFILE = L0403_149.exe
OBJFILES = L0403_149.o L0403_149main.o

$(EXEFILE): $(OBJFILES)
	$(CXX) -o $(EXEFILE) $(OBJFILES)

L0403_149.o: L0403_149.cpp
	$(CXX) -c L0403_149.cpp

L0403_149main.o: L0403_149main.cpp
	$(CXX) -c L0403_149main.cpp

.PHONY: clean run all
clean:
	rm -f $(OBJFILES) $(EXEFILE)
run:
	$(EXEFILE)
all: $(EXEFILE) run clean