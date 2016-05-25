#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t-->0)
    {
        map<long int,int> cnt;
        cin>>n;
        while(n-->0){
                cin>>num;
        cnt[num]++;
        }
        cout<<cnt.size()<<endl;



    }


}
