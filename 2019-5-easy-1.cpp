#include <iostream>
using namespace std;
int main()
{
    long long int a[1001]={0},n,in,pos;
    cin>>n;
    while(n--){
        cin>>pos;
        cin>>in;
        a[pos]+=in;
    }
    cin>>n;
    while(n--){
        cin>>pos;
        cin>>in;
        a[pos]+=in;
    }
    bool have=false;
    for(int i=1000;i>=0;i--)
        if(a[i]){
            have=true;
            cout<<i<<":"<<a[i]<<endl;
        }
    if(!have)
        cout<<"NULL!"<<endl;
return 0;
}
