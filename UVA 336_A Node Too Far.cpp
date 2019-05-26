#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<stdio.h>
#include<map>

using namespace std;

bool visited[110];
int tim[110];


int main()
{
    //freopen("in.txt", "r", stdin);
    int nc, a, b, start, edge, cas=1, visi;
    while(scanf("%d", &nc)!=EOF)
    {
        if(nc==0)
            break;
        vector<int>v[110];
        map<int, int>mp;
        int c = 1;
        int n = 0;
        for(int i = 0; i<nc; i++)
        {
            scanf("%d%d", &a, &b);
            if(mp[a]==0)
            {
                n++;
                mp[a]=c++;
            }
            if(mp[b]==0)
            {
                n++;
                mp[b]=c++;
            }
            //cout<<"           "<<mp[a]<<" "<<mp[b]<<endl;
            v[mp[a]].push_back(mp[b]);
            v[mp[b]].push_back(mp[a]);
        }
        while(scanf("%d%d", &start, &edge))
        {
            if(start == 0 && edge == 0)
                break;

            queue<int>q;
            memset(visited, false, sizeof(visited));
            memset(tim, 0, sizeof(tim));
            if(mp[start]>0)
            {
                visited[mp[start]] = true;
                q.push(mp[start]);
                visi = 1;
            }
            else
            {
                visi = 0;
                mp.erase(start);
            }
            while(!q.empty())
            {
                int frnt = q.front();
                q.pop();
                int len = v[frnt].size();
                for(int i = 0; i<len; i++)
                {
                    int node = v[frnt][i];

                    if(visited[node]==false && tim[node]<edge)
                    {
                        visi++;
                        visited[node]=true;
                        //cout<<frnt<<" visited "<<node<<endl;
                        tim[node]=tim[frnt]+1;
                        if(tim[node]<edge)
                        {
                            q.push(node);
                        }
                    }
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", cas++, n-visi, start, edge);
            while(!q.empty())
                q.pop();

        }
        for(int i = 0; i<110; i++)
            v[i].clear();
        mp.clear();
    }

    return 0;
}
