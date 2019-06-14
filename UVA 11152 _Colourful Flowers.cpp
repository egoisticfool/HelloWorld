#include<iostream>
#include<math.h>
#include<iomanip>
#define PI acos(-1)

using namespace std;

int main()
{
    cout<<setprecision(4);
    cout<<fixed;
    int a, b, c;
    while(cin>>a>>b>>c)
    {
        double s = (a+b+c)/2.0;
        double aT = sqrt(s*(s-a)*(s-b)*(s-c));
        double rO = (double) (a*b*c)/ sqrt(2*s*(a+b-c)*(b+c-a)*(c+a-b));
        double aO = PI*rO*rO;
        double rI = aT/s;
        double aI = PI*rI*rI;
        cout<<aO-aT<<" "<<aT-aI<<" "<<aI<<endl;
    }
    return 0;
}
