CXX = g++
CXXFLAGS = -std=c++17 -I../L0701_241

TARGET = L0703_242.exe
OBJS = L0703_242.o L0703_242test.o ../L0701_241/L0701_241.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

L0703_242.o: L0703_242.cpp L0703_242.hpp ../L0701_241/L0701_241.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

L0703_242test.o: L0703_242test.cpp L0703_242.hpp ../L0701_241/L0701_241.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

../L0701_241/L0701_241.o: ../L0701_241/L0701_241.cpp ../L0701_241/L0701_241.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)