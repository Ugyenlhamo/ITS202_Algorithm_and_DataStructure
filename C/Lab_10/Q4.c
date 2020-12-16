#include<stdio.h>
struct football_player
	{
		int age,total_match,average_goal;
		char name[25];
		}player[100],t;
		void main()
	{
		int i,j,n;
		printf("Enter the no of football players: \n");
		scanf("%d",&n);
		printf("Enter player information:\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the player name: ");
		scanf("%s",player[i].name);
		printf("Enter the player age: ");
		scanf("%d",&player[i].age);
		printf("Enter total_match played: ");
		scanf("%d",&player[i].total_match);
		printf("Enter the average_goal scored: ");
		scanf("%d",&player[i].average_goal);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-1;j++)
	{
	if(player[j].average_goal>player[j+1].average_goal)
	{
		t=player[j];
		player[j]=player[j+1];
		player[j+1]=t;
			}
		}
	}
		printf("\nPlayers info in terms of average go scored from lowest to highest\n");
		printf("\nName\t\tAge\t\tTotal_match\t\t Average_goal\n");
		printf("-------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
	printf("%s\t\t%d\t\t\t%d\t\t\t%d\n",player[i].name,player[i].age,player[i].total_match,player[i].average_goal);

	}
}
