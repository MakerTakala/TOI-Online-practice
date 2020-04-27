#include <iostream>
using namespace std;
int main()
{
    int r,a,ans;
    cin>>r>>a;
    if(r==a)
        a-=3;
    cout<<min(r-a,a)<<"+"<<max(r-a,a)<<"="<<r;
return 0;
}
