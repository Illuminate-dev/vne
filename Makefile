CC=clang++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system
OBJ = app.cpp

vne: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
