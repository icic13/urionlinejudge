#include <iostream>
using namespace std;

bool nova(int num)
{
    return num>=0&&num<=2;
}

bool crescent(int num)
{
    return num>=3&&num<=96;
}
bool full_moon(int num)
{
    return num>=97&&num<=100;
}


int main()
{


    int first,second;
    cin>>first>>second;

    if(first<=second)
    {
        if(nova(second))
            cout<<"nova"<<endl;
        else if(crescent(second))
            cout<<"crescente"<<endl;
        else if (full_moon(second))
            cout<<"cheia"<<endl;


    }
    else
    {

        if(nova(second))
            cout<<"nova"<<endl;
        else if(crescent(second))
            cout<<"minguante"<<endl;
        else if (full_moon(second))
            cout<<"cheia"<<endl;


    }



}
