#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stack>

using namespace std;

int precedence(char ch)
{
    if(ch == '+')
        return 1;
    else if(ch == '-')
        return 1;
    else if(ch == '*')
        return 2;
    else if(ch == '/')
        return 2;
    return -1;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    char ch[5];
    char s[51];
    int t;
    scanf("%d", &t);
    int cas = 0;
    getchar();
    getchar();
    while(t--)
    {
        if(cas>0) printf("\n"); cas = 1;
        stack<char>st;
        int k = 0;
        while(fgets(ch, 5, stdin))
        {
            //cout<<strlen(ch)<<endl;
            if(strlen(ch)==1)
                break;
            //cout<<"Len "<<k<<endl;
            s[k++] = ch[0];
        }
        int len = k;
        //cout<<len<<" "<<k<<endl;
        for(int i = 0; i<len; i++)
        {
            char c = s[i];
            if(c=='(')
                st.push(c);
            else if(c>='0' && c<='9')
                printf("%c", c);
            else if(!st.empty() && c=='+' || c=='-' || c=='*' || c=='/')
            {
                while(!st.empty() && st.top()!='(' && precedence(c)<=precedence(st.top()))
                {
                    printf("%c", st.top());
                    st.pop();
                }
                st.push(c);
            }
            else if(c==')')
            {
                while(st.top()!='(')
                {
                    printf("%c", st.top());
                    st.pop();
                }
                st.pop();
            }
            else
                st.push(c);
        }
        while(!st.empty())
        {
            printf("%c", st.top());
            st.pop();
        }
        printf("\n");
    }
    return 0;
}
