#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    char d;
    double U=30.9,J=0.28,E=34.5;
    cin>>a>>b>>d;
    if(d=='U')
        a/=U;
    else if(d=='J')
        a/=J;
    else if(d=='E')
        a/=E;
    if(a-b<0.05&&a-b>=0)
        cout<<"0.00"<<endl;
    else if(a-b<0)
        cout<<"No Money"<<endl;
    else
        cout<<d<<fixed<<setprecision(2)<<" "<<a-b<<endl;
return 0;
}
