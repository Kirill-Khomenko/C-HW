#include <stdio.h>


int main(){
	int k = 0;
	char s[20];
	scanf("%s", &s);
	for (int i = 0; i<100; i++){
		if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' ){
			k = k*10 + s[i]-'0';
			//printf("i = %i \n", i);
			
	}
}
	printf("%i", k*k*k);
	
	
}
