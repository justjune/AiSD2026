#имя итогового файла
TARGET = L0203_068.exe
#объектные файлы
OBJS = L0203_068.o L0203_068test.o

#цель по умолчанию собирает программу
all: $(TARGET)

#линковка(сборка exe из объектных файлов)
$(TARGET): $(OBJS)
	g++ -o $(TARGET) $(OBJS)

#компиляция основного файла
L0203_068.o: L0203_068.cpp L0203_068.hpp
	g++ -c L0203_068.cpp

#компиляция тестового файла
L0203_068test.o: L0203_068test.cpp L0203_068.hpp
	g++ -c L0203_068test.cpp
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
