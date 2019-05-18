#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Only perfect square numbers have the odd number of factors. i.e. 4, 9, 16 etc

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

