#include <iostream>
#include <set>
using namespace std;
int main()
{
    int N,K;
    string S;

    while(cin>>N)
    {
        set<string>language;
        cin>>K;
        for(int i = 0; i<K; i++)
        {
            cin>>S;
            language.insert(S);
        }
        if(language.size()==1)
            cout<<S<<endl;
        else
            cout<<"ingles"<<endl;


    }


}
