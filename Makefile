CC = cc
DEBUG = -g -fno-omit-frame-pointer -fsanitize=address
CFLAG = -lm

SRC = $(wildcard *.c)
TARGETS = $(SRC:.c=)

all: $(TARGETS)

%: %.c
	$(CC) $(DEBUG) $< -o $@ $(CFLAG)

clean:
	rm -rf $(TARGETS)