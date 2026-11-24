SHELL := cmd.exe

EXEFILE = L0710_254.exe
OBJFILES = L0701_241_L0709_253.o L0710_254.o L0710_254main.o

$(EXEFILE): $(OBJFILES)
	$(CXX) -o $(EXEFILE) $(OBJFILES)

L0701_241_L0709_253.o: L0701_241_L0709_253.cpp
	$(CXX) -c L0701_241_L0709_253.cpp

L0710_254.o: L0710_254.cpp
	$(CXX) -c L0710_254.cpp

L0710_254main.o: L0710_254main.cpp
	$(CXX) -c L0710_254main.cpp

.PHONY: clean run all
clean:
	rm -f $(OBJFILES) $(EXEFILE)
run:
	$(EXEFILE)
all: $(EXEFILE) run clean