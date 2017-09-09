
CC=gcc
OBJ=main.o show.o add.o
CFLAGS=-g -Wall -O0
main:$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o main
%.o:%.c
	$(CC) $(CFLAGS) -c  $^ -o $@

clean:
	$(RM)  $(OBJ) main .*.sw? 
