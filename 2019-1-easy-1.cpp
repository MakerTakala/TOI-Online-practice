#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main(){
	int n,g,a,h,w;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d",&g,&a,&h,&w);
		if(g==1)
			cout<<fixed<<setprecision(2)<<(double)13.7*w+5.0*h-6.8*a+66<<endl;
		else
			cout<<fixed<<setprecision(2)<<(double)9.6*w+1.8*h-4.7*a+655<<endl;
	}
return 0;
}

