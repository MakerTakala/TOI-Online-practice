#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct people{
    string ID;
    string name;
}p[100];
bool cmp(people a,people b){
    if(a.ID[8]==b.ID[8]){
        if(a.ID[0]==b.ID[0])
            for(int i=1;i<9;i++)
                if(a.ID[i]!=b.ID[i])
                    return a.ID[i]<b.ID[i];
        else
            return a.ID[0]<b.ID[0];
    }
    else
        return a.ID[8]<b.ID[8];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>p[i].ID>>p[i].name;
    sort(p,p+n,cmp);
    for(int i=0;i<n;i++){
        cout<<p[i].ID[8]<<": "<<p[i].name<<endl;
    }
return 0;
}
