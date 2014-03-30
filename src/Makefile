all: main.o bagels.o
	gcc $^ -o bagels
clean:
	rm *.o

.PHONY: all clean

main.o: main.c
	gcc -c $^ -Wall -O2 
bagels.o: bagels.c
	gcc -c $^ -Wall -O2 
