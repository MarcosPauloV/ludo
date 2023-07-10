main = src/main

all: $(main).o
        gcc -o $(main) $(main).o
        clear
        ./$(main)

%.o: %.c
        $(CC) $(CFLAGS) -c $< -o $@

clean:
        rm -f $(main).o $(main)
        clear