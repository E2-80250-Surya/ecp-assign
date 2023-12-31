TARGET=p3

CC=gcc

# Rule 1
$(TARGET).out:	$(TARGET).o
	$(CC) -o $(TARGET).out $(TARGET).o

# Rule 2
$(TARGET).o: $(TARGET).c
	$(CC) -c $(TARGET).c

# Rule 3
run:
	./$(TARGET).out

# Rule 4
clean:
	rm *.o *.out

.phony: run cleai
