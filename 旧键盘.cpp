#include <iostream>
#include <algorithm>
#include<cstdio>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s1,s2;
    int j=0,i=0;
    cin>>s1>>s2;
    vector<char> ans;
    for(; i<s2.size(); i++){
        for(; j<s1.size();j++){
            if(s2[i]==s1[j]){
                j++;
                break;
            }
            else
                if(find(ans.begin(),ans.end(),toupper(s1[j]))==ans.end())
                    ans.push_back(toupper(s1[j]));
        }
    }
    for(; j<s1.size(); j++)
        if(find(ans.begin(),ans.end(),toupper(s1[j]))==ans.end())
            ans.push_back(toupper(s1[j]));

    for(int i=0; i<ans.size();i++)
        cout<<ans[i];
    return 0;
}
