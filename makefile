CC = gcc
IDIR = include
SDIR = src
CFLAG = -lncurses

jna: $(SDIR)/jna.c $(SDIR)/move.c $(SDIR)/curve.c
	$(CC) $(CFLAG) $(SDIR)/jna.c $(SDIR)/move.c $(SDIR)/curve.c -o jna
