
#include<stdio.h>

int main(){
	long int a, b, c, n=0;
	scanf("%ld", &n);
	for(int i=1; i<n+1; i++){
		scanf("%ld", &a);
		scanf("%ld", &b);
		scanf("%ld", &c);
		if(a+b>c){
			printf("Case #%d: true\n", i);
		}
		else
			printf("Case #%d: false\n", i);
	}
	
}
