main.o: main.c lab.c
	gcc -o $@ -Wall -pedantic $^
	./$@

clean:
	rm -rf *.o main.o