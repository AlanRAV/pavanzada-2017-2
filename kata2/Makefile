all:
	 gcc -c ransom.c
	 gcc -c main.c
	 gcc -o main.exe ransom.o main.o

test_ransom_note: clean
	 gcc -c ransom.c

test:	 test_ransom_note

clean:
	 rm *.out *.o *.exe *.gch || exit 0

run:
	 gcc -c ransom.c
	 gcc -c main.c
	 gcc -o main.exe ransom.o main.o
	./main.exe