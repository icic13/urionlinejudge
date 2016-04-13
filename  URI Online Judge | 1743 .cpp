#include <iostream>
using namespace std;

int main()
{
    int first[5],second[5];
    for(int i= 0; i<5; i++)
        cin>>first[i];
    for(int i = 0; i<5; i++)
        cin>>second[i];

    if(first[0]^second[0]&&
       first[1]^second[1]&&
       first[2]^second[2]&&
       first[3]^second[3]&&
       first[4]^second[4]
       )
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
}
