#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n,m,k,time=0;
    scanf("%d %d %d",&n,&m,&k);
    if((n<32)||(n<55&&k==1))
        printf("Wayne can't eat and drink.");
    else
        while(1){
            if(n>=32&&k==0){
                printf("%d: Wayne drinks a Apple pie, ",time);
                n-=32;
                k=1;
            }
            else if(n>=55&&k==1){
                printf("%d :Wayne eats an Corn soup, ",time);
                n-=55;
                k=0;
            }
            else
                break;
            time+=m;
            if(n==0)
                printf("and now he doesn't have money.\n");
            else if(n==1)
                printf("and now he has 1 dollar.\n");
            else
                printf("and now he has %d dollars.\n",n);
        }
return 0;
}
