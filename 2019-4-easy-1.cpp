#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--){
        bool check=false;
        cin>>a>>b>>c;
        for(int i=a+1;i<b;i++)
            if(i%c){
                check=true;
                cout<<i<<" ";
            }
        if(!check)
            cout<<"No free parking spaces.";
        cout<<endl;
    }
return 0;
}
