
#include<iostream>
using namespace std;

int main(){
	string A,B;
	char Da,Db;
	int count_a=0,count_b=0;
	cin>>A>>Da>>B>>Db;
	int pa=int(Da-'0'),pb=int(Db-'0');
	for(int i=0; i<A.size();i++){
		if(Da==A[i])
			count_a++;
	}
	for(int i=0; i<B.size();i++){
			if(Db==B[i])
				count_b++;
		}
	if(count_a==0)pa=0;
	if(count_b==0)pb=0;
	for(int i=0; i<count_a-1;i++)
		pa=pa*10+int(Da-'0');
	for(int j=0; j<count_b-1;j++)
		pb=pb*10+int(Db-'0');
	cout<<pa+pb;
}
