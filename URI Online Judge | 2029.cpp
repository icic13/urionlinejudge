#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double v,d,height,area;
    while(cin>>v>>d)
    {
        height = 4*v/(3.14*d*d);
        area = 3.14*d*d/4;
        cout<<fixed<<setprecision(2)<<"ALTURA = "<<height<<endl;
        cout<<fixed<<setprecision(2)<<"AREA = "<<area<<endl;

    }


}
