#include <stdio.h>
struct Hotel
	{
		char Name[20];
		char Address[20];
		int Grade;
		int Room_Charge;
		int Rooms;
	};
void output();
void out();
		struct Hotel Details[]={
		{"A","Thimphu",3,4500,50},
		{"B","Gelephu",4,5000,100},
		{"C","Zhemgang",2,4000,50},
		{"D","Bumthang",5,6000,200},
		{"E","Gyalpozhing",1,3500,150}
		};
int main()
{
	int n;

	printf("Enter 1 for grade search\n");
	printf("Enter 2 to search by charge:\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1: output();
	break;
	case 2: out();
	break;
	default:printf("Wrong input");
	break;
	}
	return 0;
}
void output()
{
	int gr,i;
	printf("Enter Grade 1 to 5:");
	scanf("%d",&gr);
	if(gr>=1||gr<=5)
	{
		for(i=0;i<=4;i++)
		{
		if(Details[i].Grade==gr)
			printf("Hotel Name: %s\nAddress:%s\nGrade:%d\nAverage Room charge:%d\nNumber of Rooms:%d\n",Details[i].Name,Details[i].Address,Details[i].Grade,Details[i].Room_Charge,Details[i].Rooms);
		}
	}
	else
	printf("Wrong grade input!");
}
void out()
{
	int ch,i=0;
	printf("Enter the Room charges not greater than 6000:");
	scanf("%d",&ch);
	while(i<5)
		{
		if(Details[i].Room_Charge<ch)
		printf("Hotel Name: %s\nAddress:%s\nGrade:%d\nAverage Room charge:%d\nNumber of Rooms:%d\n",Details[i].Name,Details[i].Address,Details[i].Grade,Details[i].Room_Charge,Details[i].Rooms);
		i++;
	}
}