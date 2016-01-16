#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,max,sum=1,f;
    char o;
    cin>>n>>o;
    for(int i=3;;i+=2){
        sum+=i*2;
        if(sum>n){
            sum=sum-i*2;
            f=n-sum;
            max=i-2;
            break;
        }

    }
    for(int j=max; j>=1; j-=2){
        for(int k=0;k<max-j;k+=2)
            cout<<" ";
        for(int i=0; i<j;i++)
            cout<<o;
        cout<<endl;
    }
    for(int i=3;i<=max;i+=2){
        for(int k=0;k<max-i;k+=2)
            cout<<" ";
        for(int m=0; m<i;m++)
            cout<<o;
        cout<<endl;
    }
    cout<<f;
}
