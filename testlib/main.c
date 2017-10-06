#include <stdlib.h>
#include <stdio.h>
#include "dict.h"
#include "string.h"

typedef struct a
{
	char *name;
	int semestre;

} Student;

int main(int argc, char **argv) {
	Dict *students;
	Student  st;
	Student *newStudent;
	int errorCode;
	char matricula [100];
	students = initDictionary(100, &errorCode);

	st.name = strdup ("Angel Perez");
	st.semestre = 6;

	upsertDictionary (students, "0101", (void *)&st, sizeof (Student), &errorCode);

	st.name = "Jesus Lopez";
	st.semestre = 7;
	upsertDictionary (students, "0202", (void *)&st, sizeof (Student), &errorCode);

	printf("What is the id:" );
	scanf("%s", matricula);

	newStudent = getDictionary (students, matricula, sizeof(Student), &errorCode);
	if (newStudent == NULL){
		printf("Not Found" );
	}
	else{
		printf("name: %s, semestre: %d\n", newStudent->name, newStudent->semestre);
	}


  return 0;
}
