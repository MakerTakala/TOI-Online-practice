#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string input;
    cin>>input;
    bool is=false;
    if(input.size()%2)
        cout<<"NO";
    else{
        for(int i=0;i<input.size()/2;i++){
            if(input[i]!=input[input.size()-i-1])
                is=true;
        }
        if(is)
            cout<<"NO";
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<input.size()/2;i++)
                cout<<input[i];
        }
    }
return 0;
}
