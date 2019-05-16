#include <iostream>
#include <cstring>

using namespace std;

bool visi[10005];

int main()
{
    //freopen("input.txt", "r", stdin);
    long long int num, temp, test, sum, cas = 1;
    cin>>test;
    while(test--)
    {
        memset(visi, false, sizeof(visi));
        cin>>num;
        temp = num;
        sum = 0;
        int flag = 1;
        while(num)
        {
            while(temp!=0)
            {
                int rem = temp%10;
                sum+=(rem*rem);
                temp/=10;
            }
            //cout<<sum<<endl;
            if(sum == 1)
            {
                flag = 0;
                break;
            }
            if (sum == num)
            {
                flag = 1;
                break;
            }
            if(visi[sum])
            {
                flag = 1;
                break;
            }
            temp = sum;
            visi[sum] = true;
            sum = 0;
        }
        if(flag == 1)
            cout<<"Case #"<<cas++<<": "<<num<<" is an Unhappy number."<<endl;
        else if(flag == 0)
            cout<<"Case #"<<cas++<<": "<<num<<" is a Happy number."<<endl;
    }
    return 0;
}
