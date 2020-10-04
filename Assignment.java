import java.util.*;
public class Assignment{
    
    int max;
    int size;
    int count;
    int [] array;
    int onefourth;
    int threefourth;


    //main method
    public static void main(String[] args) {
        Assignment obj = new Assignment(2);
        System.out.println("The Size of an array before adding is: "+obj.size());
        obj.add(1);
        obj.add(2);
        
        
        //obj.pop();
        
        obj.resize();
        obj.pop();
        System.out.println("The Size of Array is now: "+obj.size());   
    }

   
    //Constructor
    public Assignment(int l){
        max = 4;
        size = l;
        count = -1;
        array = new int[max];
        onefourth = Math.round((25*l)/100);
        threefourth = Math.round((75*l)/100);
    }
    // adding element in array.
    public void add(int ele){
        if (size==0){
                array[0]=ele;
                count = 0;
        }
        else{
            array[count+1]=ele;
            count = count + 1;
        }
        size = size+1;
        System.out.println(" "+ele);
        System.out.println(" ");
    }
    //removing element in array
    public void pop(){
        if(count > 0){
            array[count-1] = 0; 
            count--; 
        }
    }
    //Size of array
    public int size(){
        return size;
    }
    //Resizing array that is if the array is 1/4 it is made into half and if array is 3/4 or full array size is doubled.
    //Array remain same if the array element is 2/4.    
    public void resize(){
      
        if(count == onefourth){

            int[] temp = new int[size/2];

            for(int i=0;i<count;i++){
                temp[i]=array[i];
            }

            size = size/2;
            array = temp;
        }

        if(count == threefourth){

            int[] temp = new int[size*2];

            for(int i=0;i<count;i++){
                temp[i]=array[i];
            }

            size = size*2;
            array = temp;
        } 
       
    }

}
   
