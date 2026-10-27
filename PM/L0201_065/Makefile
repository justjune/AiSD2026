#имя итогового файла
TARGET = L0201_065.exe 
#объектные файлы
OBJS = L0201_065.o L0201_065test.o

#цель по умолчанию собирает программу
all: $(TARGET)

#линковка(сборка exe из объектных файлов)
$(TARGET): $(OBJS)
	g++ -o $(TARGET) $(OBJS)

#компиляция основного файла
L0201_065.o: L0201_065.cpp L0201_065.hpp
	g++ -c L0201_065.cpp

#компиляция тестового файла
L0201_065test.o: L0201_065test.cpp L0201_065.hpp
	g++ -c L0201_065test.cpp
#запуск
run: $(TARGET)
	chcp 65001
	./$(TARGET)
	chcp 866

#очистка от мусора
clean:
	-rm -f $(OBJS) $(TARGET)

#защита от совпадения имен
.PHONY: all run clean
