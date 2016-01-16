#include<iostream>
#include<cstdio>
#include<stack>

#define M 1010
using namespace std;

int main(){
	int A,B,D,C;
	stack<int>s;
	char ans1[M];
	cin>>A>>B>>D;
	cout<<A<<B<<D<<endl;
	C=A+B;
	cout<<C<<endl;
	while(C!=0){
		s.push(C%D);
		cout<<C%D<<"   ";
		C=C/D;
		cout<<C<<"   "<<endl;
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	return 0;
}
