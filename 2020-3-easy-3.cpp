#include <iostream>
using namespace std;
int main()
{
    int r,c,all = 0,fin = 0;
    cin>>r>>c;
    int mmap[r+2][c+2] = {{0}};
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin>>mmap[i][j];
            if(mmap[i][j] == 1)
                all++;
        }
    }
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(mmap[i][j] == 5){
                bool bug = false;
                for(int a = i-1 ;a <= i+1; a++){
                    for(int b = j-1 ;b <= j+1; b++){
                        mmap[i][j] = 0;
                        if(mmap[a][b] == 5 ){
                            mmap[a][b] = 0;
                            bug = true;
                        }
                    }
                }
                if(!bug){
                    for(int a = i-1 ;a <= i+1; a++){
                        for(int b = j-1 ;b <= j+1; b++){
                            if(mmap[a][b] == 1){
                                mmap[a][b] = 0;
                                fin++;
                            }
                        }
                    }

                }
            }
        }
    }
    cout<<fin<<" "<<all-fin;

return 0;
}
