public class LinearSearch{
	public static int linearSearch(int [] array, int x){
		int n=array.length;
		for(int i=0;i<n;i++){
			if(array[i]==x){
				return i;
			}
		}
		return -1;
	}
	public static void main(String[] args) {
		int []array={2,4,6,1,7,1};
		int x=8;
		int display = linearSearch(array,x);
		if(display ==-1){
			System.out.println("Target element not found!!");
		}
		else{
			System.out.println("Target element found!!");
		}
	}
}