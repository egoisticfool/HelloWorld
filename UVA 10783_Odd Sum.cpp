#include<iostream>

using namespace std;

int main()
{
    int a, b, test, cas=1, oddSum;
    cin>>test;
    while(test--)
    {
        oddSum = 0;
        cin>>a>>b;
        if(a%2!=0)
        {
            for(int i = a; i<=b; i+=2)
            {
                oddSum+=i;
            }
        }
        else
        {
            for(int i = a+1; i<=b; i+=2)
            {
                oddSum+=i;
            }
        }

        cout<<"Case "<<cas++<<": "<<oddSum<<endl;
    }
    return 0;
}
