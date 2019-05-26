#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstdio>

using namespace std;



long long int uglyNumber(long long int n)
{

    long long int ugly[n+1];
    ugly[0]=1;
    long long int i2 = 0, i3 = 0, i5 = 0;
    long long int next_2, next_3, next_5;
    next_2=ugly[i2]*2;
    next_3=ugly[i3]*3;
    next_5=ugly[i5]*5;
    long long int next_ugly=1;
    for(long long int i = 1; i<n; i++)
    {
        //cout<<next_2<<" "<<next_3<<" "<<next_5<<endl;
        //cout<<i2<<" "<<i3<<" "<<i5<<endl;
        next_ugly = min(next_2, min(next_3, next_5));
        ugly[i]=next_ugly;
        if(next_ugly==next_2)
        {
            i2++;
            next_2=ugly[i2]*2;
        }
        if(next_ugly==next_3)
        {
            i3++;
            next_3=ugly[i3]*3;
        }
        if(next_ugly==next_5)
        {
            i5++;
            next_5=ugly[i5]*5;
        }
    }

    return next_ugly;
}

int main()
{
    printf("The 1500'th ugly number is %d.\n", uglyNumber(10));
    return 0;
}
