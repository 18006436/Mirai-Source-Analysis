CC=gcc
CFLAGS=-fcommon
DEPS = util.h table.h includes.h
OBJ = main.o table.o util.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

decrypt: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	rm -f *.o 
