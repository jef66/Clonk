CC=gcc
CFLAGS=-W -Wall -ansi -pedantic -Werror
LDFLAGS=
EXEC=client serveur

all: $(EXEC)

client.o: client.c 
	$(CC) -c client.c $(CFLAGS)

serveur.o: serveur.c
	$(CC) -c serveur.c $(CFLAGS)

clean:
		rm -rf *.o

purge: clean
		rm -rf $(EXEC)
