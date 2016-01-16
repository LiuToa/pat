#include <iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    int prev_num,end_num,j;
    int num=0;
    cin>>prev_num>>end_num;
    cout<<"hello world";

    vector<int>s;

    for(int i=2;; i++){
        if(num>end_num) break;
        for( j=2; j<=sqrt(i);j++){
            if(i%j==0)
                break;
        }
         if(j>sqrt(i)){
                s.push_back(i);
                num++;
            }
    }
    int m=1;
     for(vector<int>::iterator i=s.begin()+prev_num-1,j=s.end()-1; i!=j; i++,m++){
                if(m%10==0)
                    cout<<*i<<endl;
                else if(i==j-1) cout<<*i;
                else cout<<*i<<" ";
        }
    cin.get();
}
