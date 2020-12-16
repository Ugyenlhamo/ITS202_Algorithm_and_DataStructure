
#include <stdio.h> 
  
int main() 
{ 
  FILE *fp = fopen("no.txt", "r"); 
  int ch = getc(fp); 
  while (ch != EOF)  
  { 
    /* display contents of file on screen */ 
    putchar(ch);  
  
    ch = getc(fp); 
  } 
    
  if (feof(fp)) 
     printf("End of file.\n"); 
  else 
     printf("ERROR\n"); 
  fclose(fp); 
      
  getchar(); 
  return 0; 
} 
