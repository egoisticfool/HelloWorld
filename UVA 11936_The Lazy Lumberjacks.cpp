#include<iostream>

using namespace std;

int main()
{
    int x, y, z, test;
    cin>>test;
    while(test--)
    {
        cin>>x>>y>>z;
        if(x+y>z && y+z>x && x+z>y) cout<<"OK"<<endl;
        else cout<<"Wrong!!"<<endl;
    }
    return 0;
}
