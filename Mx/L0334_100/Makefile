CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = L0334_100.exe
SRCS = L0334_100.cpp L0334_100_example.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp L0334_100.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)