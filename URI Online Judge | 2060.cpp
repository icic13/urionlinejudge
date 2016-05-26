#include <iostream>
using namespace std;

int main()
{

    int number,N,twoCount= 0,threeCount = 0,fourCount = 0,
                 fiveCount = 0;
    cin>>N;
    for(int i = 0; i<N; i++)
    {
        cin>>number;


        if(number%2==0)
            twoCount++;
        if(number%3==0)
            threeCount++;
        if(number%4==0)
            fourCount++;
        if(number%5==0)
            fiveCount++;
    }

    cout<<twoCount<<" Multiplo(s) de 2"<<endl;
    cout<<threeCount<<" Multiplo(s) de 3"<<endl;
    cout<<fourCount<<" Multiplo(s) de 4"<<endl;
    cout<<fiveCount<<" Multiplo(s) de 5"<<endl;
}




