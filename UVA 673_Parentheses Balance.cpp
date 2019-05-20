#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

int main()
{
    int test;
    cin>>test;
    getchar();
    while(test--)
    {
        char s[129];
        gets(s);
        stack<char>st;
        for(int i = 0; i<strlen(s); i++)
        {
            char c = s[i];
            if(c=='(' || c=='{' || c=='[')
                st.push(c);
            else if(!st.empty())
            {
                char top = st.top();
                if(top=='(' && c==')')
                    st.pop();
                else if(top=='{' && c=='}')
                    st.pop();
                else if(top=='[' && c==']')
                    st.pop();

            }
            else
                st.push(c);
        }

        if(!st.empty())
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        while(!st.empty())
            st.pop();
    }
    return 0;
}
