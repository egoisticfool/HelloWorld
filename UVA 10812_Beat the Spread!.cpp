#include<iostream>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    long long int a, b, t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if((a+b)%2!=0)
            cout<<"impossible"<<endl;
        else
        {
            long long int x = (a+b)/2;
            long long int y = (a-b)/2;
            if(x<0 || y<0)
                cout<<"impossible"<<endl;
            else
                cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
