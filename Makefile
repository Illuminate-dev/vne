CC=clang++
CFLAGS=-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
OBJ = main.cpp
SRC_DIR = src
_INCLUDE = engine.cpp background.cpp character.cpp textbox.cpp scene.cpp
INCLUDE = $(patsubst %,$(SRC_DIR)/%,$(_INCLUDE))

vne: $(SRC_DIR)/$(OBJ)
	$(CC) -o $@.out $(INCLUDE) $^ $(CFLAGS)
