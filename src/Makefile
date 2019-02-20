SOURCES = vecadd.c
OBJS = $(SOURCES:.c=.o)

all: $(OBJS)
	$(CC) $(LFLAGS) $^ -fPIC -shared -o libvecadd.so
	$(CC) $(CFLAGS) -o main main.c -L. -lvecadd

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf *.o main libvecadd.so
