#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#define MAX 100000
using namespace std;


vector<int>getPrimes;

void sieve()
{
    bool Prime[MAX];
    int i, j;
    memset(Prime, true, sizeof(Prime));
    Prime[0]=false;
    Prime[1]=false;
    for(i = 2; i<MAX; i++)
    {
        if(Prime[i])
        {
            getPrimes.push_back(i);
            for(j=i*2; j<MAX; j+=i)
            {
                Prime[j]=false;
            }
        }
    }
    /*for(i = 0; i<getPrimes.size(); i++)
    {
        cout<<getPrimes[i]<<" ";
    }
    cout<<endl;*/
}
int digitSum(int num)
{
    int sum=0;
    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}


int smithNumber(int n)
{
    int temp = n, sum = 0, result = 0;
    //cout<<" "<<temp<<endl;
    int index=0, f = 0;
    sum = digitSum(temp);
    while(index < getPrimes.size() && temp>1 && getPrimes[index]*getPrimes[index]<=temp)
    {
        if(temp%getPrimes[index]==0)
        {
            result+=digitSum(getPrimes[index]);
            temp/=getPrimes[index];
            f++;
        }
        else
            index++;
    }
    if(temp!=1)
    {
        result+=digitSum(temp);
        f+=1;;
    }
    if(sum==result && f>1)
        return n;
    return smithNumber(n+1);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    sieve();
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", smithNumber(num+1));
    }
    return 0;
}
