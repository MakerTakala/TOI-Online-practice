#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n[1000];
    for(int i=0;i<s.size();i++)
        if(s[i]==' ')
            n[i]=0;
        else{
            s[i]=tolower(s[i]);
            n[i]=(int)s[i]-96;
        }
    for(int i=0;i<s.size()-3;i++){
        if((n[i]-n[i+1])==-3&&(n[i+1]-n[i+2])==-7&&(n[i+2]-n[i+3])==17)
            cout<<(s[i]-'l'<'l'-s[i]?'l'-s[i]:s[i]-'l');

    }
return 0;
}

