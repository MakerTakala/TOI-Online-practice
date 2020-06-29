#include <iostream>
#include <vector>
using namespace std;
vector<string> a = {"Medium Wac", "WChicken Nugget", "Geez Burger", "ButtMilk Crispy Chicken", "Plastic Toy"};
vector<string> b = {"German Fries", "Durian Slices", "WcFurry", "Chocolate Sunday"};
vector<int> anum = {4,8,7,6,3};
vector<int> bnum = {2,3,5,7};
int main()
{
    int x,y,sum = 0;
    while(cin >> x && x){
        cin>>y;
        if(x == 1){
            cout << a[y-1] << " " << anum[y-1] << endl;
            sum += anum[y-1];
        }
        if(x == 2){
            cout << b[y-1] << " " << bnum[y-1] << endl;
            sum += bnum[y-1];
        }
    }
    cout<<"Total: "<<sum;
return 0;
}
