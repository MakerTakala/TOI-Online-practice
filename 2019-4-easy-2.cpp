#include <iostream>
using namespace std;
int main()
{
    int n,s,cp,iv,maxx=0,sti,x;
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        cin>>cp>>iv;
        if(iv<=29)
            x=cp+10*(s/1000);
        else if(iv<=39)
            x=cp+50*(s/1000);
        else
            x=cp+100*(s/1000);
        if(maxx<x){
            maxx=x;
            sti=i;
        }
    }
    cout<<sti<<" "<<maxx<<endl;
return 0;
}
