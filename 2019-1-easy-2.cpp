#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n,x;
	scanf("%d",&n);
		bool a[21]={false};
		while(scanf("%d",&x)==1)
			a[x]=true;
		for(int i=n;i>0;i--){
			if(!a[i])
				printf("No. %d\n",i);
		}

return 0;
}

