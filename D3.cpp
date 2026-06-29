//Q1-Write a program to Check whether a number a prime

#include<iostream>
using namespace std;
int main()
{
    int i=2,n=5;
    if(n<=1) //edge cases handling
    {
        cout<<"invalid"<<"\n";
        return 0; //because now the code below wont be read untill we change the value to n<=1
    }
    while(i<=(n-1))
    {
        if(n%i==0)
        {
            cout<<"not a prime"<<"\n";
            return 0;
        }
        i++;
    }
     cout<<"prime"<<"\n";
     return 0;
}

//or

#include<iostream> 
using namespace std;
int main()
{
    int i=2,n=5;
    if(n<=1)
    {
        cout<<"invalid"<<"\n";
        return 0; 
    }
    while(i*i<=n)
    {
        if(n%i==0)
        {
            cout<<"not a prime"<<"\n";
            return 0;
        }
        i++;
    }
     cout<<"prime"<<"\n";
     return 0;
}