#include<iostream>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int test, w, f, i, j;
    cin>>test;
    while(test--)
    {
        cin>>w>>f;
        while(f--)
        {
            for(i=1; i<=w; i++)
            {
                for(j=1; j<=i; j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            for(i = w-1; i>=1; i--)
            {
                for(j = 1; j<=i; j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            if(f!=0) cout<<endl;
        }
        if(test!=0) cout<<endl;
    }
    return 0;
}
