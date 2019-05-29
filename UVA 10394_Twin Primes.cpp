#include<iostream>
#include<vector>
#include<cstring>
#define MAX 20000001

using namespace std;

bool sieve[MAX];
unsigned primes[MAX];
typedef pair<int, int>pr;
vector<pr>v;

void isPrime()
{
    unsigned i, j;
    memset(sieve, true, sizeof(sieve));
    sieve[0]=false;
    sieve[1]=false;
    for(i = 2; i<MAX; i++)
    {
        if(sieve[i])
        {
            for(j = i*2; j<MAX; j+=i)
            {
                sieve[j]=false;
            }
        }
    }
    for(i = 0, j = 0; i<MAX; i++)
    {
        if(sieve[i])
        {
            primes[j]=i;
            j++;
        }
    }
    for(i=1; i<MAX; i++)
    {
        if(primes[i]-primes[i-1]==2)
        {
            v.push_back(pr(primes[i-1], primes[i]));
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    isPrime();
    int n;
    while(cin>>n)
    {
        cout<<'('<<v[n-1].first<<", "<<v[n-1].second<<')'<<endl;
    }
    return 0;
}
