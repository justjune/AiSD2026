#имя итогового файла
TARGET = L0101_025.exe
#объектные файлы
OBJS = L0101_025.o L0101_025test.o

#цель по умолчанию собирает программу
all: $(TARGET)

#линковка(сборка exe из объектных файлов)
$(TARGET): $(OBJS)
	g++ -o $(TARGET) $(OBJS)

#компиляция основного файла
L0101_025.o: L0101_025.cpp L0101_025.hpp
	g++ -c L0101_025.cpp

#компиляция тестового файла
L0101_025test.o: L0101_025test.cpp L0101_025.hpp
	g++ -c L0101_025test.cpp
#запуск
run: $(TARGET)
	chcp 65001
	./$(TARGET)
	chcp 866

#очистка от мусора 
clean:
	-rm -f $(OBJS) $(TARGET)

#защита от совпадения имен файлов и целей
.PHONY: all run clean
