#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;


int main()
{
    unsigned int n;
    while(scanf("%u", &n)&&n!=0)
    {
        int sq = sqrt(n);
        if(sq*sq==n)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

