#include<iostream>

using namespace std;

int main()
{
    int test, players, cas = 1;
    int age[10];
    cin>>test;
    while(test--)
    {
        cin>>players;
        for(int i = 0; i < players; i++)
        {
            cin>>age[i];
        }
        cout<<"Case "<<cas++<<": "<<age[players/2]<<endl;
    }
    return 0;
}
