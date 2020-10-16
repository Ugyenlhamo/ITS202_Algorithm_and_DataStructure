#include <stdio.h>

int main(){

	int CA, SE;

	printf("enter the value x: ");
	scanf("%d", &CA);

	printf("enter the value y: ");
	scanf("%d", &SE);

	float Total = (float)  CA + SE;

	if (CA>=20 && SE>=20){
		printf("secured pass marks in both CA and SE in Mathamatics \n");
	}
	else if (CA>=20 && SE<20)
	{
		printf("Failed in SE \n");
	}
	else if (CA<20 && SE>=20)
	{
		printf("Failed in CA \n");
	}
	else if (CA<20 && SE<20)
	{
		printf("Failed in both CA and SE in Mathamatics \n");
	}
	else if (Total>=50)
	{
		printf("congrats you are upgraded to next semester \n");
	}
	else{
		printf("Fial \n" );
	}
	return 0;
}