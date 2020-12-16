#include <stdio.h>
struct students
	{
	int student_ID;
	char name[50];
	int date;
	int month;
	int year;
	};
	int main()
	{
	struct students detail[100];
	int i, n, comp;
	//Current date
	int current_date = 25;
	int current_month = 10;
	int current_year = 2020;
	printf("Total number of details you want to enter: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
	printf("\nDetail of student %d\n", (i+1));
	printf("Enter ID: ");
	scanf("%d", &detail[i].student_ID);
	printf("Enter name: ");
	scanf("%s", detail[i].name);
	printf("Enter date of joining dd <1-31>: ");
	scanf("%d", &detail[i].date);
	printf("Enter month of joining mm <1-12>: ");
	scanf("%d", &detail[i].month);
	printf("Enter year of joining yy <4 integers>: ");
	scanf("%d", &detail[i].year);
	}
	printf("\nName of students who have been in the college for more than or equal to years:");
	for(i = 0; i < n; i++){
	comp = current_year - detail[i].year;

	if(comp > 3){
	printf("%s\n", detail[i].name);
	}
	if(comp == 3){
	if(detail[i].month>current_month){
	printf("%s\n",detail[i].name);
		}
	}
	if(comp == 3 && detail[i].month == current_month){
	if(detail[i].date > current_date){
	printf("%s\n", detail[i].name);
		}
	}
	}
	return 0;
}