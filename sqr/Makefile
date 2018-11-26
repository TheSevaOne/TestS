# цель по умолчанию (при вызове make или make task1)
# собираем программу task1 из объектного файла task1.o
task1: main.o
	gcc -o  task1 main.o -lm

main.o: main.c sqr.h
	gcc -g -O0 -c  main.c -lm

# цель clean (при вызове make clean)
# удаляем программу и объектные файлы
clean:
	rm task1 *.o

indent:
	indent -kr -nut -ts4 main.c
