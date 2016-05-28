#include <iostream>
using namespace std;

int main()
{
    int N,i;
    string word;

    cin>>N;

    for(int i = 0; i<N; i++)
    {
        cin>>word;

        if(word.length()!=3)
            cout<<word;

        else if(word=="OBI"||word=="URI")
            cout<<word;
        else if(word[0]=='O'&&word[1]=='B')
            cout<<"OBI";

        else if(word[0]=='U'&&word[1]=='R')
            cout<<"URI";
        else
            cout<<word;
            if(i!=N)
                cout<<" ";

    }
    cout<<endl;

}
