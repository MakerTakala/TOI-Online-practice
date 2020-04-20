#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;
    int x[m][n]={{0}};
    for(int i=0;i<m;i++)
        for(int k=0;k<n;k++)
            cin>>x[i][k];
    int start;
    for(int i=0;i<m;i++){
        bool have=false;
        for(int k=0;k<n;k++){
            if(x[i][k]==1&&!have){
                start=k;
                have=true;

            }
            else if(x[i][k]==1&&have){
                for(int j=start+1;j<k;j++)
                    x[i][j]=1;
                have=false;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int k=0;k<n;k++)
            cout<<x[i][k]<<" ";
        cout<<endl;
    }
return 0;
}
