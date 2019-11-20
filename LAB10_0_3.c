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
	int i;
	Student s[3];
	Student *sp = s; 

	for (i = 0; i < 3; i++){
		printf("Enter student name: ");
		scanf("%s", &(*sp).name); //포인터 사용! s는 배열.
		printf("Enter midterm and final score: ");
		scanf("%d %d", &(*sp).midterm, &(*sp).final);
		sp++;
	}

	printf("\n\n이름\t중간\t학기말\n");
	sp = s; // 처음으로 놔주기

	for (i = 0; i < 3; i++){
		printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final); // (*sp). = 배열과 같음.
		sp++;
	}
}