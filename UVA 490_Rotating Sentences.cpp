#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main()
{
    string s[105];
    int i = 0, j, col = 0;
    while(getline(cin, s[i]))
    {
        if(s[i].size()==0) break;
        if(s[i].size()>col) col = s[i].size();
        i++;
    }
    int row = i;
    for(i = 0; i<col; i++)
    {
        for(j = row-1; j>=0; j--)
        {
            if(s[j].size()>i) cout<<s[j][i];
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
