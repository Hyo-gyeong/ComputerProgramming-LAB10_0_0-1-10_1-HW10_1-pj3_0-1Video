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
		scanf("%s", &(*sp).name); //������ ���! s�� �迭.
		printf("Enter midterm and final score: ");
		scanf("%d %d", &(*sp).midterm, &(*sp).final);
		sp++;
	}

	printf("\n\n�̸�\t�߰�\t�б⸻\n");
	sp = s; // ó������ ���ֱ�

	for (i = 0; i < 3; i++){
		printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final); // (*sp). = �迭�� ����.
		sp++;
	}
}