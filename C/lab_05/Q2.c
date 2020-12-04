#include <stdio.h>
int largest(int array[3][5][5],int size) 
{ 
    int a,b,c; 

    int max = array[0][0][0]; 
  
     
    for (a = 0; a < 3; a++){
        for(b = 0; b < 5; b++ ){ 
            for (c = 0; c < 5; c++){
                if (array[a][b][c] > max) 
                max = array[a][b][c];
            
            } 
        }
    }
  
    return max; 
} 

int main(){

	
	int array[3][5][5]={

			{
				{1,2,3,4,5},
				{9,8,6,5,9},
				{8,7,6,2,9},
				{1,5,3,7,1},
				{9,5,3,6,7}
			},
			{
				{8,4,6,9,7},
				{5,20,8,2,6},
				{8,7,5,4,9},
				{5,6,4,8,9},
				{1,2,4,8,5}
			},
			{
				{8,9,7,5,6},
				{1,2,3,4,6},
				{5,4,8,7,2},
				{1,4,8,5,2},
				{10,2,5,8,9}
			}


	};

	int size = sizeof(array)/sizeof(array[0][0][0]); 
    printf("Largest element in the array is:  %d\n", largest(array, size)); 
    return 0; 
}