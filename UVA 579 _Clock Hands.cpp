#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int h, m;
    double hA, mA;
    while(scanf("%d:%d", &h, &m)!=EOF)
    {
        if(h==0 && m==0) break;
        hA = (h*30.0)+(m/2.0);
        mA = m*6.0;
        double ans = abs(hA - mA);
        if(ans>=180) ans = 360 - ans;
        printf("%.3lf\n", ans);

    }
    return 0;
}
