#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	int midterm;
	int final;
}Student;

int main(void)
{
	char name[20];
	Student aStudent;
	Student *sp = &aStudent;

	printf("Enter student name: ");
	scanf("%s", &(*sp).name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &(*sp).midterm, &(*sp).final);

	printf("\n\n이름\t중간\t학기말\n");
	printf("%s\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final);

}