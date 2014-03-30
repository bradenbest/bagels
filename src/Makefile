all: main.o bagels.o version.o input.o
	gcc $^ -o bagels
clean:
	rm *.o

.PHONY: all clean

main.o: main.c
	gcc -c $^ -Wall -O2 
bagels.o: bagels.c
	gcc -c $^ -Wall -O2 
version.o: version.c
	gcc -c $^ -Wall -O2
input.o: input.c
	gcc -c $^ -Wall -O2
