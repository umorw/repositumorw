proga: proga.o function.o
	gcc -o proga proga.o function.o -lm

proga.o: proga.c
	gcc -c proga.c
	
function.o: function.c
	gcc -c function.c 
	
.PHONY: clean
clean:
	rm -f proga *.o 
