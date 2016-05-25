#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
bool comp(string a,string b)
{
    if(a.length()>b.length())
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string line,word;
    while(n-->0)
    {
        vector<string> v;

        getline(cin,line);

        stringstream words(line);

        while(words>>word)
        {
            v.push_back(word);

            sort(v.begin(),v.end(),comp);
        }
        for(int i= 0; i<v.size()-1; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<v[v.size()-1]<<endl;
    }

}
