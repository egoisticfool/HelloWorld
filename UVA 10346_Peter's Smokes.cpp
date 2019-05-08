
#include<iostream>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, k, q;
    while(cin>>n>>k)
    {
        q = 0;
        int temp = n;
        while(temp>=k)
        {
            q += temp/k;
            temp = (temp/k)+(temp%k);
        }
        cout<<n+q<<endl;
    }
    return 0;
}
