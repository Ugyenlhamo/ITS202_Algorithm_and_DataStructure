import java.util.*;
public class KeyIndex{

	public static void KeyIndexsorting(int [] temp){
		int n = temp.length;
		int R = 256;
		int [] aux = new int [n];
		int [] count = new int [R+1];

		//counting the frequency
		for (int i = 0; i < n; i++){
			count[temp[i]+ 1]++;
		}

		//for cumulative frequency

		for(int r =0;r<R;r++)
		{
			count[r+1]+=count[r];
		}

		//Distributing the data
		for(int i=0;i<n;i++)
		{
			aux[count[temp[i]]++] = temp[i];
		}

		//Copying to the original array
		for (int i = 0; i < n; i++)
		{
			temp[i] = aux[i];
		}

		// for(int i=0;i<n;i++)
		// {
		// 	System.out.println(" "+aux[i]);
		// }
 
 	
	}
	public static void main(String[] args) {
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
              System.out.println("Array before KeyIndex sorting: ");  
        for(int i:array)
        {
            System.out.print(i);
        }
        KeyIndexsorting(array);
        System.out.println();
        //After sorted
        System.out.println("Array after KeyIndex sorting: ");  
       for(int i:array)
        {
            System.out.print(i);
        }
         
	}
}

