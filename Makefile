TARGET = main.o

$(TARGET): main.c
	gcc -o $@ -Wall -pedantic $<
	./$@

clean:
	rm -rf *.o $(TARGET)