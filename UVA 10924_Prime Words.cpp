#include<iostream>
#include<string>
#include<cstring>
#define MAX 1050

using namespace std;

bool isPrime[MAX];

void sieve()
{
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0]=false;
    for(int i = 2; i*i<=MAX; i++)
    {
        if(isPrime)
        {
            for(int j = i*2; j<MAX; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}


int main()
{
    //freopen("in.txt", "r", stdin);
    sieve();
    string s;
    while(cin>>s)
    {
        int sum = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z') sum+=s[i]-96;
            else if(s[i]>='A' && s[i]<='Z') sum+=s[i]-38;
        }
        if(isPrime[sum]) cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
