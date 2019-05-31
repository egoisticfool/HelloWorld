#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#define MAX 100005
using namespace std;

bool check[MAX];

void square()
{
    memset(check, false, sizeof(check));
    for(int i = 1; i<MAX; i++)
    {
        int x = sqrt(i);
        if(sqrt(i)==x)
        {
            check[i]=true;
        }
    }
}


int main()
{
    square();
    int a, b;
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        if(a==0 && b==0) break;
        int cnt = 0;
        for(int i = a; i<=b; i++)
        {
            if(check[i]==true)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
