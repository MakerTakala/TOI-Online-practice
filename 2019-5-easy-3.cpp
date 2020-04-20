#include <iostream>
using namespace std;
int main()
{
    int n,h,m,time,inm;
    cin>>n>>h>>m;
    int recordhh[n+1]={0},recordmm[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>inm;
        m+=inm;
        h=(h+m/60)%24;
        m%=60;
        recordhh[i]=h;
        recordmm[i]=m;
    }
    int ask;
    while(cin>>ask&&ask!=0){
        if(recordhh[ask]<10)
            cout<<"0";
        cout<<recordhh[ask]<<":";
        if(recordmm[ask]<10)
            cout<<"0";
        cout<<recordmm[ask]<<endl;
    }
return 0;
}
