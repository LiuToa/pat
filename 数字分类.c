#include<stdio.h>
#include<string.h>
#define N 1010

int main(){
	int a[5]={0,0,0,0,0};
	int s[N];
	int a1_flag=1;
	double a3_flag=0.0;
	int n=0;
	scanf("%d",&n);
	for (int i=0; i<n;i++){
		scanf("%d", &s[i]);
	}
	for(int i=0; i<n; i++){
		if (s[i]%5==0&&s[i]%2==0)
		        a[0]+=s[i];
		 else if(s[i]%5==1){
		        a[1]+=a1_flag*s[i];
		        a1_flag=(-1)*a1_flag;
		    }
		 else if( s[i]%5==2)
		        a[2]+=1;
		 else if (s[i]%5==3){
				a[3]+=s[i];
				a3_flag+=1;
			}
		 else if (s[i]%5==4)
		        if (s[i]>a[4])
		            a[4]=s[i];
	}
	for(int i=0; i<5; i++){
			if(a[i]==0){
				if(i==4)
					printf("N");
				else printf("N ");
			}
			
			else  {
				if(i==4)
				printf("%d", a[i]);
				else if(i==3)
					printf("%.1f ", a[i]/a3_flag);
				else printf("%d ", a[i]);
}
	}
}
