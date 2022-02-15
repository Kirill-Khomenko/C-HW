#include <stdio.h>

int main()
{
   char var[9] = {'O','X',' ', ' ', 'X','O','X', 'O', ' '};
	 
    
    for(int i = 0; i<3; i++){
    	
    	   if (i != 1)
		   	  printf("%c", var[i]);
		   else
 	   	   	   printf("|%c|", var[i]);
 	   
	}
	printf("\n");
	for (int i = 3; i<6; i++){
    	
    	   if (i != 4)
		   	  printf("%c", var[i]);
		   else
 	   	   	   printf("|%c|", var[i]);
	}
	printf("\n");
	for (int i = 3; i<6; i++){
    	
    	   if (i != 4)
		   	  printf("%c", var[i]);
		   else
 	   	   	   printf("|%c|", var[i]);
	}
}
