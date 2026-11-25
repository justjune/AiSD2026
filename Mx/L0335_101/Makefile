CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = L0335_101.exe
SRCS = L0335_101.cpp L0335_101_example.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp L0335_101.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)