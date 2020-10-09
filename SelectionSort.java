import java.util.*;
public class SelectionSort{
    public static void selection(int temp[]){
		int n=temp.length;
		for(int k=0;k<n-1;k++){
			//finding smallest_element between kth element and last element
			int smallest_index=k;
			for (int h=k+1; h<n;h++){
			if(temp[smallest_index]>temp[h])
					smallest_index=h;
			}	
			int x=temp[smallest_index];
			temp[smallest_index]=temp[k];

			temp[k]=x;
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
              System.out.println("Array before selectionSort: ");  
        for(int i:array)
        {
            System.out.print(i);
        }
        System.out.println();
        
        //After sorted
        System.out.println("Array after selectionSort: ");  
        selection(array);
         for(int i:array)
        {
            System.out.print(i);
        }
    }
}