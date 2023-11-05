strdup.o: strdup.c strdup.h ../../lib/strlen.o
	gcc -Wall -g -c strdup.c ../../lib/strlen.o

install: strdup.o
	cp -v strdup.o ../../lib/strdup.o
	cp -v strdup.h ../../include/strdup.h
