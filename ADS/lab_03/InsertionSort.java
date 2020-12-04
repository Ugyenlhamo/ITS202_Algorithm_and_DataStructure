import java.util.*;
public class InsertionSort{

    public static void insertion(int temp[]){
        int x = temp.length;
		for (int y=1;y<x;y++)
		{
			int l=temp[y];
			int i=y-1;

			while((i> -1) && temp [i] > l){
				temp[i+1]= temp[i];
				i--;

			}
			temp[i+1]=l;
		}
    }

    public static void main(String[] args){
     
    Scanner obj=new Scanner(System.in);  
    System.out.print("Enter the number of elements you want to store: ");  
    int n=obj.nextInt();   //reading the number of elements from we entered
    
    //creates an array in the memory of length 8  
    int[] array = new int[n];  
    System.out.println("Enter the elements of the array: ");  
    
    for(int i=0; i<n; i++)  
    {  
          array[i]=obj.nextInt();   //reading array elements from the user 
    }  
        System.out.println("Array elements are: ");   // showing array elements using the for loop  
        for (int i=0; i<n; i++)   
            {  
                System.out.println(array[i]);  ;

            }
            System.out.println("Array before sorting: ");  
        for(int i:array)
        {
            System.out.print(i);
        }
        System.out.println();
        
        //After sorted
        System.out.println("Array after sorting: ");  
        insertion(array);
         for(int i:array)
        {
            System.out.print(i);
        }
     }

}