#include <stdio.h>

int fibonacci(int number)
{
    if(number==1||number==2)
        return 1;

    return fibonacci(number-1)+fibonacci(number-2);
}
int main()
{


    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",fibonacci(n));


    }

    return 0;
}
