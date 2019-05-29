#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<iomanip>

using namespace std;

typedef pair<char, int>pr;

int main()
{
    //freopen("in.txt", "r", stdin);
    cout<<setprecision(2);
    cout<<fixed;
    int test, w, lines;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        cin>>w;
        char ch;
        string s[150005];
        vector<pr>vec;
        double value;
        cin.ignore();;
        for(int i = 0; i<w; i++)
        {
            cin>>ch>>value;
            vec.push_back(make_pair(ch, value));
        }
        cin.ignore();
        cin>>lines;
        cin.ignore();
        for(int i = 0; i<lines; i++)
        {
            getline(cin, s[i]);
        }
        double sum = 0;
        for(int i = 0; i<lines; i++)
        {
            for(int j = 0; j<s[i].size(); j++)
            {
                char check = s[i][j];
                for(int k = 0; k<vec.size(); k++)
                {
                    if(check==vec[k].first)
                    {
                        sum+=vec[k].second;
                        break;
                    }
                }
            }
        }
        cout<<sum/100.0<<"$"<<endl;
        vec.clear();
    }
    return 0;
}
