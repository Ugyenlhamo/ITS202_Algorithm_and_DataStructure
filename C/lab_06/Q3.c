#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int product();
float mean();
float d[5];
int main() {
 int i;
 printf("Enter elements: ");
 for (i = 0; i < 5; ++i)
 scanf("%f", &d[i]);
 printf("\nStandard Deviation = %.2f", calculateSD(d));
 product();
 mean();

}
float calculateSD(float d[]) {
 float sum = 0.0, mean, SD = 0.0;
 int i;
 //int n;
 for (i = 0; i < 5; ++i) {
 sum += d[i];
 }
 mean = sum / 5;
 for (int i = 0; i < 5; ++i)
 SD += pow(d[i] - mean, 2);
 return sqrt(SD / 5);
}
float mean(){
 float mean;
 //int n;
 float sum = 0.0;
 for (int i = 0; i < 5; ++i) {
 sum += d[i];
 }
 mean = sum / 5;
 printf("\nmean = %f",mean );
}
int product(){
 int p = 1;
 //int n;
 int i;
 for (i=0;i<5;i++){
 p = p * d[i];

 }
 printf("\nproduct = %d ", p );
}