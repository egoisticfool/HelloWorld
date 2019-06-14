#include<iostream>
#include<queue>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        if(n==1)
        {
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
            continue;
        }
        queue<int>q;
        for(int i = 1; i<=n; i++)
        {
            q.push(i);
        }
        printf("Discarded cards: ");
        while(q.size()>2)
        {
            printf("%d, ", q.front());
            q.pop();
            int frnt = q.front();
            q.pop();
            q.push(frnt);
        }
        printf("%d\n", q.front());
        q.pop();
        printf("Remaining card: %d\n", q.front());
        while(!q.empty()) q.pop();
    }
    return 0;
}
