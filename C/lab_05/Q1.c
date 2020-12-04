#include <stdio.h>


int insert()
{
	
	int i ; //loop variable
	int position;
	int n;// number of elements in the array
	int array[50];
	int value;//new data element to be sorted in array

	printf("Enter the amount of element in the array : \n");//how much you wanna enter
	scanf("%d",&n);

	printf("Enter %d elements: \n", n );//giving the element according to the above number

	for(i=0;i<n;i++)
		scanf("%d", &array[i]);


	printf("Enter the location you wanna insert: \n");//making user to give location
	scanf("%d", &position);

	//giving the user input values
	printf("Enter the value you wanna insert: \n");
	scanf("%d", &value);

	// now shift rest of the elements downwards 
	for (i =n-1; i >=position-1; i--)
	
		array[i+1] = array[i];

	array[position-1]=value;
	printf("Now the new array after inserting is: \n");

	for(i=0;i<=n;i++)
		printf("%d\n",array[i] );

	return 0;
	

}

int delete()
{
	
	int array[50];
	int position;
	int i ; //loop variable
 	int n;		// number of elements in the array
	int value;//new data element to be sorted in array

	printf("Enter the amount of element in the array: \n");//how much you wanna enter
	scanf("%d",&n);

	printf("Enter %d elements: \n", n );//giving the element according to the above number

	for(i=0;i<n;i++)
		scanf("%d", &array[i]);


	printf("Enter the location where you wish to delete element: \n");
   	scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible\n");
   else
   {
      for (i = position - 1; i < n - 1; i++)
         array[i] = array[i+1];

      printf("Resultant array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", array[i]);
   }

   return 0;
}

int sum()
{
	printf("To find the sum of an even and odd numbers from array: \n");
	int max[10];
	int size;
	int even=0,odd=0;

	printf("Enter the size of array: \n");
	scanf("%d", &size);

	printf("Enter %d elements: \n", size );
	
	for(int i=0;i<size;i++){
		scanf("%d", &max[i]);
	}
	for(int i=0;i<size;i++){
		if(max[i]%2==0){
			even=even+max[i];
		}
		else{
			odd=odd+max[i];
		}
	}
	printf("\nThe sum of even numbers are: %d", even);
	printf("\nThe sum of odd numbers are: %d\n", odd);
	
	return 0;
}

int concatenate()
{

	int array[50];
   int even[5] = {0, 2, 4, 6, 8};
   int odd[5]  = {1, 3, 5, 7, 9};
   
   int loop, index, e_len, o_len;
   
   e_len = o_len = 5;
   
   index = 0;
 
   for(loop = 0; loop < e_len; loop++) {
      array[index] = even[loop];
      index++;
   }
 
   for(loop = 0; loop < o_len; loop++) {
      array[index] = odd[loop];
      index++;
   }

   printf("\nEven -> ");
   
   for(loop = 0; loop < e_len; loop++)
      printf(" %d", even[loop]);
   
   printf("\nOdd  -> ");
   
   for(loop = 0; loop < o_len; loop++)
      printf(" %d", odd[loop]);

   printf("\nConcat array is-> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);

   return 0;
}

int main()
{

	int choice;
	

		printf("----------------------------------------------------------------------------\n");
 		printf(" 1 --> Insert a number at a given position in an array of numbers\n");
 		printf(" 2 --> Delete from a given position in an array of numbers.\n");
 		printf(" 3 --> Find the sum of even and odd elements of array separately\n");
 		printf(" 4 --> concatenate two arrays\n");
 		printf("Enter the choice_no: \n");
 		scanf("%d", &choice);

 		switch(choice)
 		{
 			case 1:
 			insert();
 			break;
 			case 2:
 			delete();
			 break;

 			case 3:
 			sum();
 			break;

 			case 4:
 			concatenate();
 			break;

 			default:
 			printf("Error in your choice_no\n");
 			break;
 			}
 }
