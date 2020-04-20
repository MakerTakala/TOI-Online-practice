#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    string a;
    int b[10]={0},c[10];
    cin>>a;
    for(int i=0;i<a.size();i++)
        b[(int)a[i]-48]++;
    for(int i=0;i<10;i++)
        c[i]=b[i];
    sort(b,b+10,greater<int>());
    for(int i=0;b[i]!=0&&i<10;i++){
            if(b[i]==b[i-1])
                continue;
            else
                for(int k=0;k<10;k++)
                    if(b[i]==c[k])
                        cout<<k<<" ";
    }


return 0;
}
