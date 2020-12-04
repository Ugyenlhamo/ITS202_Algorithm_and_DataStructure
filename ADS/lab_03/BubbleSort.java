import java.util.*;
public class BubbleSort{
    public static void Bubbleup(int arr[]){
     int n = arr.length;  
    int temp = 0;  
    for(int i=0; i < n; i++){  
        for(int j=1; j < (n-i); j++){  
            if(arr[j-1] > arr[j]){  
                 //swap elements  
                temp = arr[j-1];  
                arr[j-1] = arr[j];  
                arr[j] = temp;  
                 }  
             }  
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
           System.out.println("Array before bubblesort: "); 
           for(int i:array)
        {
            System.out.print(i);
        }
        System.out.println();
        
        //After sorted
        System.out.println("Array after bubblesort: ");  
        Bubbleup(array);
         for(int i:array)
        {
            System.out.print(i);
        }     
           
     }
}