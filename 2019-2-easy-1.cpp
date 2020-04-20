#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,a[10000],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        if((i+1)%a[n-1]==1)
            sum+=a[i];
    if(sum%n==0)
        cout<<n<<" "<<a[n-1]<<endl;
    else
        cout<<sum%n<<" "<<a[sum%n-1]<<endl;
return 0;
}
