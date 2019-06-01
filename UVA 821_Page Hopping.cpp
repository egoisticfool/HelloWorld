#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<cstring>

using namespace std;

bool visited[101];
int tim[101];

int main()
{
    vector<int>v[101];
    stack<int>st;
    int a, b, cas=0;
    while(cin>>a>>b)
    {
        memset(visited, false, sizeof(visited));
        if(a==0 && b==0)
            break;
        if(!visited[a])
        {
            visited[a]=true;
            st.push(a);
        }
        if(!visited[b])
        {
            visited[b]=true;
            st.push(b);
        }
        v[a].push_back(b);
        while(true)
        {
            cin>>a>>b;
            if(a==0 && b==0)
                break;
            if(!visited[a])
            {
                visited[a]=true;
                st.push(a);
            }
            if(!visited[b])
            {
                visited[b]=true;
                st.push(b);
            }
            v[a].push_back(b);
        }
        queue<int>q;
        int sum = 0;
        int path = 0;
        while(!st.empty())
        {
            memset(tim, 0, sizeof(tim));
            memset(visited, false, sizeof(visited));
            int top = st.top();
            st.pop();
            q.push(top);
            visited[top]=true;
            while(!q.empty())
            {
                int frnt = q.front();
                q.pop();
                int len = v[frnt].size();
                for(int i = 0; i<len; i++)
                {
                    int w = v[frnt][i];

                    if(!visited[w])
                    {
                        path++;
                        tim[w]=tim[frnt]+1;
                        sum+=tim[w];
                        visited[w]=true;
                        q.push(w);
                    }

                }
            }

        }
        double ans = sum/(double) path;
        printf("Case %d: average length between pages = %.3lf clicks\n", ++cas, ans);
        for(int i = 0; i<101; i++)
        {
            v[i].clear();
        }
    }
    return 0;
}
