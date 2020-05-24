ARCHIVE_NAME = mini-projet
ARCHIVE_CONTENT = .

ROOT = $(shell pwd)

CC = gcc
CFLAGS = -Werror -Wextra -Wall

SRCS = $(wildcard *.c)
HDRS = $(wildcard *.h)
OBJS = $(SRCS:%.c=%.o)

OUTPUT = $(shell basename $(ROOT))

.PHONY: clean realclean archive run

TARGET = $(OUTPUT)

$(TARGET): $(wildcard *.o)
	$(CC) $(CFLAGS) -o $(OUTPUT) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^

run: $(TARGET)
	@./$(TARGET)

test: $(TARGET)
	@./tp04-test.sh

clean:
	rm -rf *.o

realclean: clean
	rm -f $(OUTPUT)
	rm -f $(ARCHIVE_NAME).zip

archive: realclean
	@cd /tmp/; \
	cp -r $(ROOT)/$(ARCHIVE_CONTENT) $(ARCHIVE_NAME) ; \
	zip -r $(ARCHIVE_NAME).zip $(ARCHIVE_NAME)/ ; \
	mv $(ARCHIVE_NAME).zip $(ROOT)/ ; \
	rm -rf $(ARCHIVE_NAME)/
