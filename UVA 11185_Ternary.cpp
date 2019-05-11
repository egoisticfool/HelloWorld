#include<iostream>
#include<stack>

using namespace std;

int main()
{
    long int n;
    int rem;
    stack<int>st;
    while(cin>>n)
    {
        if(n<0)
            break;
        if(n==0)
            cout<<0<<endl;
        else
        {
            while(n)
            {
                rem = n%3;
                st.push(rem);
                n/=3;
            }
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            cout<<endl;
        }

    }
    return 0;
}
