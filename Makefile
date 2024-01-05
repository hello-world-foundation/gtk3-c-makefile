build:
	$(CC) $(CFLAGS) $(wildcard *.c) -o main \
	    `pkg-config --cflags --libs gtk+-3.0`

clean:
	rm -f main