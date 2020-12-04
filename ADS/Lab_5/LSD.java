public class LSD{
	public static void LSD(int x){
		String arr[]={"ugyen","yeshy","tashi","wangm"};
		int n= arr.length;
		int uni=256;

		String aux[]= new String[n];

		for(int i=x-1;i>=0;i--){
			int []counting= new int[uni+1];

			for(int j=0;j<n;j++){
				counting [arr[j].charAt(i)+1]++;
			} 
			for(int k=0;k<uni;k++){
				counting[k+1]+=counting[k];

			}
			for(int l=0;l<n;l++){
				aux[counting[arr[l].charAt(i)]++]= arr[l];
			}
			for(int l=0;l<n;l++){
				arr[l]=aux[l];
			}
			
		}
		for(int l=0;l<n;l++){
				System.out.print(" "+arr[l]);
			}
			System.out.println(" ");
	}


	public static void main(String[] args) {
		LSD(4);
	}
}