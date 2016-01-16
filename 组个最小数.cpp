#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	vector<int>ans;
	for(int i=0; i<10; i++){
		cin>>n;
		for(int j=0; j<n; j++)
			ans.push_back(i);
	}
	if(ans[0]==0){
		for(int i=0; i<ans.size(); i++){
			if(ans[i]!=0){
				ans[0]=ans[i];
				ans[i]=0;
				break;
			}
		}
	}
	for(int i=0; i<ans.size(); i++)
		cout<<ans[i];
	return 0;
}
