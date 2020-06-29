#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int w,h,f,cnt = 0;
    cin >> w >> h >> f;
    vector< vector<int> > mapp = {26,vector<int>(2,-1)};
    char x;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            cin >> x;
            if(x != '0'){
                cnt++;
                int num = x - 'a';
                mapp[num][0] = i;
                mapp[num][1] = j;
            }
        }
    }
    if(cnt<f)
        cout<<"Mission fail.";
    else{
        cnt = 0;
        for(int i = 0; i < 26;i++){
            if(cnt == f)
                break;
            else if(mapp[i][0] != -1){
                cnt++;
                cout<< mapp[i][0] << " " << mapp[i][1] <<endl;
            }
        }
    }
return 0;
}
