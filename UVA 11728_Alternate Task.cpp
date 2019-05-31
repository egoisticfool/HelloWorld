#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#define MAX 1001

using namespace std;

int store[MAX];
bool prime[MAX];
void check()
{
    memset(prime, true, sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(int i = 2; i<MAX; i++)
    {
        if(prime[i])
        {
            for(int j = i*2; j<MAX; j+=i)
            {
                prime[j]=false;
            }
        }
    }
    store[0]=0;
    store[1]=1;
    int powers = 0;
    int n;

    for(n = 2; n<MAX; n++)
    {
        int sum = 1;
        if(prime[n])
        {
            store[n]=n+1;
            continue;
        }
        int temp = n;
        for(int i = 2; i*i<=temp; i++)
        {
            if(temp%i==0)
            {
                while(temp%i==0)
                {
                    powers++;
                    temp/=i;
                }
                sum*=(pow(i, powers+1)-1)/(i-1);
                powers = 0;
            }
        }
        if(temp>1)
        {
            sum*=(pow(temp, 2)-1)/(temp-1);
        }
        store[n]=sum;
    }
}

int main()
{
    check();
    int n, cas = 0;
    while(cin>>n)
    {
        if(n==0) break;
        int flag = 0;
        for(int i = n; i>0; i--)
        {
            if(store[i]==n)
            {
                printf("Case %d: %d\n", ++cas, i);
                flag = 1;
                break;
            }
        }
        if(flag == 0) printf("Case %d: -1\n", ++cas);
    }
    return 0;
}
