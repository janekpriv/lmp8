CC = gcc
CFLAGS = -Wall -g

all: indx4

indx4: indx4.o skorowidz.o list.o dynamic_array.o skorowidz_licznik.o
	$(CC) $(CFLAGS) -o indx4 indx4.o skorowidz.o list.o dynamic_array.o skorowidz_licznik.o

indx4.o: indx4.c skorowidz.h
	$(CC) $(CFLAGS) -c indx4.c

skorowidz.o: skorowidz.c skorowidz.h list.h dynamic_array.h
	$(CC) $(CFLAGS) -c skorowidz.c

dynamic_array.o: dynamic_array.c dynamic_array.h
	$(CC) $(CFLAGS) -c dynamic_array.c

skorowidz_licznik.o: skorowidz_licznik.c skorowidz_licznik.o indx4.c skorowidz.h
	$(CC) $(CFLAGS) -c skorowidz_licznik.c indx4.c
