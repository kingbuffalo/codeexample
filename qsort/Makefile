CC=g++
CFLAGS= -std=c++14 -I.
SRCS=$(wildcard *.cpp)
OBJ = $(SRCS:.cpp = .o)

a.out:$(OBJ)
	$(CC) -o a.out -g $(OBJ) $(CFLAGS)

%.o:%.cpp
	$(CC) -c $< $(CFLAGS)

.PHONY: clean
clean:
	rm a.out

.PHONY: test
test:
	./a.out < tin.txt > ttt.txt
	../cmpfile/cmpfile tout.txt ttt.txt
	rm ttt.txt
