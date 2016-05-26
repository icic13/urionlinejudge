#include <iostream>

using namespace std;

int main()
{

    int n,i,j;
    int counter = 0;
    int total;
    while(cin>>n)
    {
        total = (n*(n+1)/2)+1;
        string word = (n==0)?"numero":"numeros";
        cout<<"Caso "<<++counter<<": ";
        cout<<total<<" "<<word<<endl;

        cout<<"0 ";

        for(i = 1 ; i<=n; i++)
        {
            for( j = 1; j<=i; j++)
            {
                cout<<i;
                if(j!=n)
                    cout<<' ';
            }

        }
        cout<<endl;
        cout<<endl;
    }
}
