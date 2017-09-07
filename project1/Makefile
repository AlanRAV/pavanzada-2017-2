all:
	 gcc -c circle.c
	 gcc -c main.c
	 gcc -o main circle.o main.o

test_circle: clean
	 gcc -c circle.c
	 gcc -c test_circle.c
	 gcc -o test_circle.exe circle.o test_circle.o
	 ./test_circle.exe

test:	 test_circle

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c circle.c
	 gcc -c main.c
	 gcc -o main.exe circle.o main.o
	 ./main
