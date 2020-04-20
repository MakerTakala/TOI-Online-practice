#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    float sumtime[4]={0},sumweek[7]={0},x;
    float maxtimelen=0,maxweeklen=0;
    int maxtime=0,maxweek=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            scanf("%f",&x);
            sumtime[j]+=x;
            sumweek[i]+=x;
        }
        if(sumweek[i]>maxweeklen){
            maxweeklen=sumweek[i];
            maxweek=i+1;
        }
    }
    for(int i=0;i<4;i++)
        if(sumtime[i]>maxtimelen){
            maxtimelen=sumtime[i];
            maxtime=i;
        }
    printf("%d\n",maxweek);
    if(maxtime==0)
        printf("morning\n");
    else if(maxtime==1)
        printf("afternoon\n");
    else if(maxtime==2)
        printf("night\n");
    else
        printf("early morning\n");

return 0;
}
