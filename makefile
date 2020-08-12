CC = gcc
IDIR = include
SDIR = src
CFLAG = -lncurses

jna: $(SDIR)/jna.c $(SDIR)/move.c
	$(CC) $(CFLAG) $(SDIR)/jna.c $(SDIR)/move.c -o jna
