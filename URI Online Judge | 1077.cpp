#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int getWeight(char ch)
{
    switch(ch)
    {
    case '/':
    case '*':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;

    }

}

void infixToPostfix(char infix[],char postfix[],int size){

    stack<char> s;
    int weight;
    int i = 0;
    int j = 0;
    char ch;

    while(i<size){
        ch = infix[i];
        if(ch=='(')
            s.push(ch);
        i++;
        continue;


    }
    if(ch==')'){

        while(!s.empty()&&s.top()!='('){
                postfix[k++] = s.top();
                s.pop();
              }
                 if(!s.empty()){
        s.empty();
    }
    i++;
    continue;

    }
    weight = getWeight(ch);
    if(weight == 0)
        postfix[k++] = ch;
    else{
        if(s.empty()){
            s.push(ch);
        }
        else{
            while(!s.empty()&&s.top()!='('&&
                                         weight<=getWeight(s.top())){
                    postfix[k++] = s.top();
                    s.pop();
                  }
                  s.push(ch);
        }

    }
    i++;


}

int main()
{
    int n;
    cin>>n;
    string equation;
    while(n-->0)
    {
        cin>>equation;

    }


}
