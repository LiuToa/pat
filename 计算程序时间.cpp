#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    double hour,min,sq;
    double p,e;
    cin>>e>>p;
    hour=(p-e)/(100*3600);
    min=(hour-int(hour))*60;
    sq=(min-int(min))*60;
    if((sq-int(sq))>0.5)
            sq++;
    if(hour<10){
        if(min<10){
            if(sq<10)
                printf("0%d:0%d:0%d",int(hour),int(min),int(sq));
            else
                printf("0%d:0%d:%d",int(hour),int(min),int(sq));
        }
        else{
            if(sq<10)
                printf("0%d:%d:0%d",int(hour),int(min),int(sq));
            else
                printf("0%d:%d:%d",int(hour),int(min),int(sq));
        }

    }
    else{
        if(min<10){
            if(sq<10)
                printf("%d:0%d:0%d",int(hour),int(min),int(sq));
            else
                printf("%d:0%d:%d",int(hour),int(min),int(sq));
        }
        else{
            if(sq<10)
                printf("%d:%d:0%d",int(hour),int(min),int(sq));
            else
                printf("%d:%d:%d",int(hour),int(min),int(sq));
        }


    }

    //printf("%d:%d:%d",int(hour),int(min),int(sq));
    return 0;
}
