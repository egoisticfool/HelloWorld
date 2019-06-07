#include<iostream>

using namespace std;

int main()
{
    int n, t;
    long long int ans;
    cin>>t;
    while(t--)
    {
        ans = 1;
        cin>>n;
        ans = (((((n*567)/9)+7492)*235)/47)-498;
        if(ans<0) ans*=-1;
        cout<<(ans/10)%10<<endl;
    }
    return 0;
}
