CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = L0413_163.exe
SRCS = L0413_163.cpp L0413_163_example.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp L0413_163.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)