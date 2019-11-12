struct student {
	char name[20];  
	int midterm;  
	int final;  
	int average;  
	char grade;
};
#include <stdio.h>
int main(void)
{
	struct student s[3];
	int i;
	int midsum = 0;
	int finalsum = 0;

	for (i = 0; i < 3; i++)
	{
		printf("Enter student name : ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score : ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
		s[i].average = (s[i].midterm + s[i].final) / 2;
	}
	printf("\n\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++){
		printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average, s[i].average);

		if (s[i].average >= 80)
			s[i].grade = 'A';
		else if (s[i].average >= 50)
			s[i].grade = 'B';
		else
			s[i].grade = 'F';

	}
	printf("\n\n이름\t학점\n");
	for (i = 0; i < 3; i++){
		printf("%s\t%c\n", s[i].name, s[i].grade);
		
		midsum  += s[i].midterm;
		finalsum += s[i].final;
	}

	printf("\n중간고사의 평균: %d\n학기말고사의 평균: %d\n", midsum/3, finalsum/3);
}