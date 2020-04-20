#include <iostream>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    int omap[n][m]={{0}};
    int trans[n][m]={{0}};
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            trans[i][j]=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>omap[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>x;
            if(x){
                for(int a=0;a<n;a++)
                    trans[a][j]++;
                for(int a=0;a<m;a++)
                    trans[i][a]++;
                trans[i][j]--;
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<(omap[i][j]^trans[i][j]%2?"1":"0")<<" ";
        cout<<endl;
    }
return 0;
}
