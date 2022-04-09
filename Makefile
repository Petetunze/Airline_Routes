output: main.o route-records.o
	gcc main.o route-records.o -o output

main.o: main.c
	gcc -c main.c

route-records.o: route-records.c route-records.h
	gcc -c route-records.c

clean:
	rm *.o output