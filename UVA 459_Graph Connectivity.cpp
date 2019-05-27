#include<iostream>
#include<vector>
#include<queue>
#include<string.h>

using namespace std;

bool visited[27];

int main()
{
    //freopen("in.txt", "r", stdin);
    int test;
    int f = 0;
    cin>>test;
    vector<int>vec[27];
    cin.ignore();
    //cin.ignore();
    while(test--)
    {

        if(f>0) cout<<endl;
        f=1;
        memset(visited, false, sizeof(visited));
        char largest;
        string s;
        cin>>largest;
        int maxi=largest-'A';
        //cout<<maxi<<endl;
        int i = 0;
        cin.ignore();
        while(getline(cin, s))
        {
            if(s.size()==0) break;
            int a = s[0]-'A';
            int b = s[1]-'A';
            //cout<<"  "<<a<<" "<<b<<endl;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        queue<int>q;
        int cnt = 0;
        for(int i = 0; i<=maxi; i++)
        {
            //cout<<"    "<<i<<endl;
            if(!visited[i])
            {
                //cout<<i<<endl;
                visited[i]=true;
                //cnt++;
                q.push(i);
                while(!q.empty())
                {
                    int frnt = q.front();
                    q.pop();
                    int len = vec[frnt].size();
                    for(int i = 0; i<len; i++)
                    {
                        int x = vec[frnt][i];
                        if(!visited[x])
                        {
                            visited[x]=true;
                            q.push(x);
                        }
                    }
                }
                cnt++;
            }
        }
        while(!q.empty()) q.pop();
        for(int i = 0; i<27; i++) vec[i].clear();
        cout<<cnt<<endl;
    }
    return 0;
}
