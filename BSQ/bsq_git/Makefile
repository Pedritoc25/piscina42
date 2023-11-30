TARGET = bsq

CC = cc

CFLAGS += -Wall -Wextra -Werror

SOURCES = $(wildcard *.c)

OBJECTS = $(SOURCES:.c=.o)

CURRENT_DIRECTORY = $(shell pwd)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

all: $(TARGET)

re: fclean all
