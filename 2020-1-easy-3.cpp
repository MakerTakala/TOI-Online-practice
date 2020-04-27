#include <iostream>
using namespace std;
int main()
{
    int n,max1=0,max2=0;
    cin>>n;
    int s = n;
    for(int i=0;i<9;i++){
        if(max1<=s%10){
            max2 = max1;
            max1 = s%10;
        }
        else
            max2 = max(max2,s%10);
        s/=10;
    }
    cout<<((max1*max1 + max2*max2)==n%1000?"Good Morning!":"SPY!");
return 0;
}
