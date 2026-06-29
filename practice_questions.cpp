//Q1 sum of 2 numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"sum="<<(a+b)<<"\n";
    return 0;
}
//Q2 find characters lowercase or uppercase

#include<iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"your character is:";
    cin>>alpha;
    if(alpha>='a'&& alpha<='z')
    {
        cout<<"lowercase\n";
    }
    else if(alpha>='A'&& alpha<='Z')
    {
        cout<<"UPPERCASE\n";
    }
    else
    {
        cout<<"special symbol\n";
    }
    return 0;
}

//Q3 sum of numbers from 1 to n
//while loop

#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"n=";
    cin>>n;
    while(i<=n)
    {
        sum=i+sum; //sum+=i
        i++;
    }
    cout<<"final sum="<<sum<<"\n";
  return 0;
}

//for loop
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
    cout<<"final sum="<<sum<<"\n";
    return 0;
}


//Q4 sum of all odd numbers from 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int i,n=20,sum=0;
    for(i=1;i<=n;i+=2)
    {
        sum+=i;
    }
    cout<<"sum of all odd numbers="<<sum<<"\n";
    return 0;
}

//Q5 Check if a number is prime or not

#include<iostream> //while loop
using namespace std;
int main()
{
    int i=2,n=6;
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

//for loop

#include<iostream> 
using namespace std;
int main()
{
    int i,n=8;
    if(n<=1) //edge cases handling
    {
        cout<<"invalid"<<"\n";
        return 0;
    }
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime"<<"\n";
            return 0;
        }
    }
    cout<<"prime"<<"\n";
    return 0;
}

//Q6 sum of all numbers from 1 to n which are divisble by 3

#include<iostream> 
using namespace std;
int main()
{
    int i,n=13,sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {
        sum+=i;
        }
    }
    cout<<"sum="<<sum<<"\n";
        return 0;
}

//Q7 print factorial of n

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
