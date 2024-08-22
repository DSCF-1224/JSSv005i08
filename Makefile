PROGRAM := main

OBJS := \
	main.o

CC := gcc-14

CFLAGS := -std=c23 -fanalyzer -lm -Wall -Werror -Wextra

$(PROGRAM): $(OBJS)
	$(CC) $(OBJS) -o $(PROGRAM).exe $(CFLAGS)

%.o: %.c
	$(CC) $< -o $@ $(CFLAGS) -c

clean:
	rm *.o $(PROGRAM)

run:
	rm *.txt
	./$(PROGRAM).exe
