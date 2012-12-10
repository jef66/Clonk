CC=gcc
CFLAGS=-Wall -O

LDFLAGS=
EXEC=sockets
all: $(EXEC)

$(EXEC): 
	$(CC) -o client  client.c  $(LDFLAGS)
	$(CC) -o serveur serveur.c $(LDFLAGS)

clean:
	rm -f *.o core
mrproper: clean
	rm -f $(EXEC)

