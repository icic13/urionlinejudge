#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int nc;
    int n;
    cin>>nc;
    while(nc-->0)
    {
        scanf("%d",&n);
        vector<int> people(n);
        for(int i = 0; i<n; i++)
            scanf("%d",&people[i]);
        sort(people.begin(),people.end());

        for(int i = 0; i<n-1; i++)
            printf("%d ",people[i]);

        printf("%d",people[n-1]);
        printf("\n");

    }


}
