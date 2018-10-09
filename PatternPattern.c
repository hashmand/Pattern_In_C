#include<stdio.h>

int main()
{
	int n = 5;
	int i,j,k=1;
	for(i=n;i>=1;i--){
		
		for(j=n-1;j>=k;j--){
			printf(" ");
		}
		printf("%d",i);
		for(j=1;j<(k-1)*2;j++){
			printf(" ");
		}
		if(i<n)
			printf("%d",i);
		printf("\n");
		k++;
	}
	return 0;
}