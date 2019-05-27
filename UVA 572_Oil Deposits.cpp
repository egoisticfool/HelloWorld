#include<iostream>
#include<string.h>
#include<stdio.h>
#include<queue>

using namespace std;

typedef pair<int, int>pr;

int dx[]={-1, -1, -1, 0, 0, 1, 1, 1};
int dy[]={-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    int row, col;
    while(scanf("%d%d", &row, &col)!=EOF)
    {
        if(row==0 && col==0) break;
        queue<pr>q;
        char s[row+1][col+1];
        bool visited[row+1][col+1];
        memset(visited, false, sizeof(visited));
        for(int i = 0; i<row; i++)
        {
            scanf("%s", &s[i]);
        }
        int cnt = 0;
        //cout<<"before bfs "<<cnt<<endl;
        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                if(!visited[i][j] && s[i][j]=='@')
                {
                    cnt++;
                    q.push(pr(i, j));
                    visited[i][j]=true;
                    while(!q.empty())
                    {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for(int k = 0; k<8; k++)
                        {
                            int a = dx[k]+x;
                            int b = dy[k]+y;
                            if(!visited[a][b] && s[a][b]=='@' && a<row && a>=0 && b<col && b>=0)
                            {
                                visited[a][b]=true;
                                q.push(pr(a, b));
                            }
                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
