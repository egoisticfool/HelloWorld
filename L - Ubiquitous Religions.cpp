#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<math.h>
#define MAX 50005
using namespace std;

bool visi[MAX];

int main()
{
    long long int n, m, a, b, i, cnt, s, not_visited, input, Set, extra, cas = 0;
    vector<long long int>v[MAX];
    while(cin>>n>>m)
    {
        if(n==0 && m==0) break;
        memset(visi, false, sizeof(visi));
        input = 0;
        for(i = 0; i<m; i++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            if(!visi[a])
            {
                input++;
                visi[a]=true;
            }
            if(!visi[b])
            {
                input++;
                visi[b]=true;
            }
        }
        extra = n-input;
        memset(visi, false, sizeof(visi));
        cnt = 0;
        s = 0;
        queue<long long int>q;
        for(i = 1; i<=n; i++)
        {
            if(!visi[i])
            {
                q.push(i);
                s++;
            }
            while(!q.empty())
            {
                long long int w = q.front();
                q.pop();
                int len = v[w].size();
                for(int j = 0; j<len; j++)
                {
                    long long int x = v[w][j];
                    if(!visi[x])
                    {
                        visi[x]=true;
                        q.push(x);
                        cnt++;
                    }
                }
            }
        }
        not_visited = n-cnt;
        Set = abs(s-extra);
        printf("Case %lld: %lld\n", ++cas, not_visited+Set);
        for(i = 0; i<MAX; i++) v[i].clear();
    }
    return 0;
}
