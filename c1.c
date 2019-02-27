#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	if(n>0)
	  printf("Positive\n");
	else if(n==0)
	  printf("Zero\n");
	else
	  printf("Negative\n");
	return 0;
}
