#include <iostream>
using namespace std;
int main()
{
    int n,round=0,tem=0,i=1;
    cin>>n;
    while(tem<n)
        tem+=4*i++;
    i--;
    tem-=4*i;
    n=(n-tem-1)/i;
    if(n==0)
        cout<<"Pen";
    else if(n==1)
        cout<<"Pineapple";
    else if(n==2)
        cout<<"Apple";
    else
        cout<<"Pineapple pen";

return 0;
}
