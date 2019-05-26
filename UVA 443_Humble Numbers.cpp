#include<iostream>

using namespace std;


unsigned humbleNumber(unsigned n)
{
    unsigned humble[n+1];
    humble[0]=1;
    int i2=0, i3=0, i5=0, i7=0;
    unsigned next2=2;
    unsigned next3=3;
    unsigned next5=5;
    unsigned next7=7;
    //unsigned nextHumble;
    int i;
    for(i = 1; i<n; i++)
    {
        humble[i]=min(next2, min(next3, min(next5, next7)));
        //cout<<humble[i]<<" ";
        if(next2==humble[i])
        {
            i2++;
            next2=humble[i2]*2;
        }
        if(next3==humble[i])
        {
            i3++;
            next3=humble[i3]*3;
        }
        if(next5==humble[i])
        {
            i5++;
            next5=humble[i5]*5;
        }
        if(next7==humble[i])
        {
            i7++;
            next7=humble[i7]*7;
        }
    }
    return humble[i-1];
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsigned n;
    while(cin>>n)
    {
        if(n==0) break;
        if(n%10==1 && (n%100>20 || n%100<10)) printf("The %dst humble number is %u.\n", n, humbleNumber(n));
        else if(n%10==2 && (n%100>20 || n%100<10)) printf("The %dnd humble number is %u.\n", n, humbleNumber(n));
        else if(n%10==3 && (n%100>20 || n%100<10)) printf("The %drd humble number is %u.\n", n, humbleNumber(n));
        else printf("The %dth humble number is %u.\n", n, humbleNumber(n));
    }
    return 0;
}
