CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = L0501_183.exe
SRCS = L0501_183.cpp L0501_183_example.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp L0501_183.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)