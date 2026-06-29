//DAY-1
//Q1-Write a program to Calculate sum of first N natural numbers.

#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum ="<<sum<<" ";
    return 0;
}

//Q-3 Write a program to Find factorial of a number

#include<iostream> 
using namespace std;
int main()
{
    int i,n=4,fact=1;
    if(n<0) //edge cases - Factorial of a negative number doesn't exist
    {
        cout<<"invalid"<<"\n";
        return 0;
    }
    for(i=2;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"factorial="<<fact<<"\n";
    return 0;
}