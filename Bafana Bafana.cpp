#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int test, player, start, pass, cas=1;
    cin>>test;
    while(test--)
    {
        cin>>player>>start>>pass;
        if((start+pass)%player==0)
            cout<<"Case "<<cas++<<": "<<player<<endl;
        else
            cout<<"Case "<<cas++<<": "<<(start+pass)%player<<endl;
    }
    return 0;
}
