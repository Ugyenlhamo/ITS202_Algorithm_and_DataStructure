#include <stdio.h>
#include <string.h>
union info{
char name[30];
int employee_ID;
int date;
int month;
int year;
};
int main()
{
union info employee[5];
int i, j, n;
printf("Enter number of information you want to store: \n");
scanf("%d", &n);
for(i = 0; i < n; i++){
printf("\nEnter the information of 5 employees: #%d \n", (i+1));
printf("Enter Name of the employee: ");
scanf("%s", employee[i].name);
printf("Enter Employee ID: ");
scanf("%d", &employee[i].employee_ID);
printf("Enter Date: ");
scanf("%d", &employee[i].date);
printf("Enter Month: ");
scanf("%d", &employee[i].month);
printf("Enter Year: ");
scanf("%d", &employee[i].year);
}
printf("\n");
printf("DISPLAYING INFORMATION ABOUT EMPLOYEES\n");
for(i = 0; i < n; i++){
printf("\nInformation of different employees %d: ", (i+1));
printf("\nEmployee name: %s\n", employee[i].name);
printf("Employee ID: %d\n", employee[i].employee_ID);
printf("Date: %d\n", employee[i].date);
printf("Month: %d\n", employee[i].month);
printf("Year: %d\n", employee[i].year);
}

printf("\n");
for(i = 0; i < n; i++){
for(j = i+1; j < n; j++){
if(employee[i].year > employee[j].year){
int temp = employee[i].year;
employee[i].year = employee[j].year;
employee[j].year = temp;
}
}
printf("Name:%s\n",employee[i].name);
printf("Employee ID:%d\n",employee[i].employee_ID);
printf("Date:%d\n",employee[i].date);
printf("Month:%d\n",employee[i].month);
printf("Year:%d\n",employee[i].year);
}
return 0;
}