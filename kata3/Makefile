all:
	 gcc -c kata3.c
	 gcc -c main.c
	 gcc -o main kata3.o main.o

test_kata3: clean
	 gcc -c kata3.c
	 gcc -c test_kata3.c
	 gcc -o test_kata3.exe kata3.o test_kata3.o
	 ./test_kata3.exe

test:	 test_kata3

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c kata3.c
	 gcc -c main.c
	 gcc -o main.exe kata3.o main.o
	 ./main
