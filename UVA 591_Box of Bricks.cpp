#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int n, cas = 1;
    while(scanf("%d", &n)!=EOF)
    {
        if(cas>1) printf("\n");
        if(n==0) break;
        int height[n+1];
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &height[i]);
            sum+=height[i];
        }
        int ave = sum/n;
        int boro = 0, cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(height[i]>ave)
            {
                cnt++;
                boro+=height[i];
            }
        }

        int ans = boro-(ave*cnt);
        printf("Set #%d\nThe minimum number of moves is %d.\n", cas++, ans);
    }
    return 0;
}
