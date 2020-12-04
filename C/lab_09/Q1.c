#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Meal
{
	int cost;
	char food_name [30];
	float calories;
	char type[20];
};

int main(){
	{
	// meal is the variable of structure Meal
	struct Meal meal[10];

	printf("Enter the name of the food\n");
         
         for(int i=0;i<4;i++){
            printf("Name of food %d: ",i+1);
            scanf("%s",meal[i].food_name);
            printf("Calories contain in food %d: ",i+1);
            scanf("%f",&meal[i].calories);
            printf("Type of the food %d: ",i+1);
            scanf("%s",meal[i].type);
            printf("Cost of the food %d: ",i+1);
            scanf("%d",&meal[i].cost);
             
         }
        printf(" \n");
        printf("Results:  \n");
        for(int j=0;j<4;j++){

            printf("Food_name %d: %s \n",j+1,meal[j].food_name);
            printf("Calories of food %d: %f \n",j+1,meal[j].calories);
            printf("Types of food %d: %s \n",j+1,meal[j].type);
            printf("Cost of food %d: %d \n",j+1,meal[j].cost);
        }
      
    };
    
    return 0;

}