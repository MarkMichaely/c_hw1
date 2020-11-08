CC = gcc
FLAGS = -Wall
FILES = basicMath.o power.o
MAIN = main.o

all: mains maind

mains: $(MAIN) libmymaths.a
	$(CC) $(FLAGS) -g -o mains $(MAIN) libmymaths.a

maind: $(MAIN) libmymathd.so
	$(CC) $(FLAGS) -g -o maind $(MAIN) ./libmymathd.so

libmymaths.a: $(FILES)
	ar -rcs libmymaths.a $(FILES)

libmymathd.so: $(FILES)
	$(CC) -shared -o libmymathd.so $(FILES)

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *o *a *so mains maind
