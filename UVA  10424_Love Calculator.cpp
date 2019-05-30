#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    cout<<setprecision(2);
    cout<<fixed;
    string n1, n2;
    while(getline(cin, n1) && getline(cin, n2))
    {
        int sum1=0, sum2=0;
        for(int i = 0; i<n1.size(); i++)
        {

            if(n1[i]>='A' && n1[i]<='Z')
            {
                sum1+=n1[i]-64;
            }
            else if(n1[i]>='a' && n1[i]<='z')
            {
                sum1+=n1[i]-96;
            }
        }
        int digitsum1;
        if(sum1>=10)
        {
            if(sum1%9==0) digitsum1 = 9;
            else digitsum1 = sum1%9;
        }
        else digitsum1 = sum1;
        for(int i = 0; i<n2.size(); i++)
        {

            if(n2[i]>='A' && n2[i]<='Z')
            {
                sum2+=n2[i]-64;
            }
            else if(n2[i]>='a' && n2[i]<='z')
            {
                sum2+=n2[i]-96;
            }
        }
        int digitsum2;
        if(sum2>=10)
        {
            if(sum2%9==0) digitsum2 = 9;
            else digitsum2 = sum2%9;
        }
        else digitsum2= sum2;
        int maxValue = max(digitsum1, digitsum2);
        int minValue = min(digitsum1, digitsum2);
        cout<<(minValue*1.0/maxValue)*100<<" %"<<endl;
    }
    return 0;
}
