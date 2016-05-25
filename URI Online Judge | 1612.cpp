#include <iostream>
#include <stack>
using namespace std;

int main()
{

    long long int a,b,sum;
    while(cin>>a>>b)
    {

        stack <int> result;
        if(a==0&&b==0)
            break;
        sum = a + b;
        while(sum)
        {
            if(sum%10)
                result.push(sum%10);

            sum/=10;

        }

        while(!result.empty())
        {
            cout<<result.top();
            result.pop();
        }
        cout<<endl;
    }

}
