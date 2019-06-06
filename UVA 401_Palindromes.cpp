#include<iostream>
#include<string>
#include<cstring>

using namespace std;


int main()
{
    string s, a, b;
    char check[95];
    memset(check, NULL, sizeof(check));
    check['A']='A';
    check['E']='3';
    check['H']='H';
    check['I']='I';
    check['J']='L';
    check['L']='J';
    check['M']='M';
    check['O']='O';
    check['S']='2';
    check['T']='T';
    check['U']='U';
    check['V']='V';
    check['W']='W';
    check['X']='X';
    check['Y']='Y';
    check['Z']='5';
    check['1']='1';
    check['2']='S';
    check['3']='E';
    check['5']='Z';
    check['8']='8';
    int i, j;
    while(cin>>s)
    {
        int len = s.size();
        a=b="";
        for(int i = len-1; i>=0; i--)
        {
            //cout<<s[i]<<" "<<check[s[i]]<<endl;
            a+=s[i];
            b+=check[s[i]];
        }
        //cout<<a<<" "<<b<<endl;
        if(s==a && s==b) cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        else if(s==a && s!=b) cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        else if(s!=a && s==b) cout<<s<<" -- is a mirrored string."<<endl<<endl;
        else cout<<s<<" -- is not a palindrome."<<endl<<endl;
    }
    return 0;
}
