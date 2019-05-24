#include<iostream>
#include<string>
#include<cstring>
#include<utility>
#include<queue>
#include<cstdio>

using namespace std;

int main()
{
    int test, ferrylen, cars, carlen;
    string carpos;
    cin>>test;
    while(test--)
    {
        cin>>ferrylen>>cars;
        ferrylen*=100;
        queue<int>left, right;
        for(int i = 0; i<cars; i++)
        {
            cin>>carlen>>carpos;
            if(carpos=="left")
                left.push(carlen);
            else
                right.push(carlen);
        }
        int sum = 0, cnt = 0, state = 1;
        while(!left.empty() || !right.empty())
        {
            cnt++;
            if(state==1)
            {
                sum = 0;
                while(!left.empty())
                {
                    if(sum+left.front()>ferrylen)
                    {
                        break;
                    }
                    sum+=left.front();
                    left.pop();
                }
                state = 0;
            }
            else
            {
                sum = 0;
                while(!right.empty())
                {
                    if(sum+right.front()>ferrylen)
                    {
                        break;
                    }
                    sum+=right.front();
                    right.pop();;
                }
                state = 1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
