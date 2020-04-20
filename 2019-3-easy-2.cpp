#include <iostream>
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y>>n;
    int a[x][y],b[x][y];
    for(int i=1;i<=x;i++)
        for(int k=1;k<=y;k++)
            a[i-1][k-1]=(i-1)*y+k;
    for(int j=2;j<=n;j++){
        if(j%2==1)
            for(int i=0;i<x;i++)
                for(int k=0;k<y;k++)
                    b[i][k]=a[(i+x-1)%x][k];
        else
            for(int i=0;i<x;i++)
                for(int k=0;k<y;k++)
                    b[i][k]=a[i][(k+y-1)%y];
        for(int i=0;i<x;i++)
            for(int k=0;k<y;k++)
                a[i][k]=b[i][k];
    }
    for(int i=0;i<x;i++){
        for(int k=0;k<y;k++)
            cout<<a[i][k]<<" ";
        cout<<endl;
    }
return 0;
}
