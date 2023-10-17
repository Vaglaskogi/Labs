include .make/lint

main: main.c lab.c
	gcc -o $@ $(CFLAGS) $^

run: main
	./$<

clean:
	rm -rf *.o main