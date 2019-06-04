#include<iostream>

using namespace std;

unsigned long long wall[51];

void solve()
{
    wall[1]=1;
    wall[2]=2;
    for(int i = 3; i<51; i++)
    {
        wall[i]=wall[i-1]+wall[i-2];
    }
}

int main()
{
    solve();
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<wall[n]<<endl;
    }
    return 0;
}
