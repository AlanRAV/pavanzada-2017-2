LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c project2.c
	 gcc -c main.c
	 gcc -o project2.exe project2.o main.o $(LIB)

test_project2: clean
	 gcc -c project2.c
	 gcc -c test_project2.c
	 gcc -o test_project2.exe project2.o test_project2.o
	 ./test_project2.exe

test:	 test_project2

clean:
	 rm *.out *.o *.exe || exit 0

project2: clean
	 gcc -c project2.c
	 gcc -c main.c
	 gcc -o project2.exe project2.o main.o $(LIB)

run: project2
	 ./project2.exe

runtest: project2
	 ./integrationtest.tcl ./project2.exe

