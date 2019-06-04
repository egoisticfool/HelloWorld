#include<iostream>
#include<string>
#include<stack>
#include<queue>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    string s;
    queue<int>q;
    stack<char>st;
    while(getline(cin, s))
    {
        if(s[0]>='0' && s[0]<='9')
        {
            for(int i = 0; i<s.size(); )
            {
                int sum = 0;
                if(s[i+1]>'2')
                {
                    int a = s[i]-'0';
                    int b = s[i+1]-'0';
                    sum=a+b*10;
                    char ch = sum;
                    st.push(ch);
                    i+=2;
                }
                else if(s[i+1]<='2')
                {
                    int a = s[i]-'0';
                    int b = s[i+1]-'0';
                    int c = s[i+2]-'0';
                    sum=a+b*10+c*100;
                    char ch =sum;
                    st.push(ch);
                    i+=3;
                }
            }
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            cout<<endl;
        }
        else
        {
            for(int i = s.size()-1; i>=0; i--)
            {
                int x = s[i];
                while(x)
                {
                    q.push(x%10);
                    x/=10;
                }
            }
            while(!q.empty())
            {
                cout<<q.front();
                q.pop();
            }
            cout<<endl;
        }

    }
    return 0;
}
