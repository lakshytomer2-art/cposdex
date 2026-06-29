//ch-2
//conditional statements
//if else

#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
if(a>=b)
{
    cout<<"positive"<<"\n";
}
else
{
    cout<<"negative"<<"\n";
}
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"age of the appliant is ";
    cin>>age;
    if(age<0||age>100) //if any condition is true the cout will get executed leaving no room for bugs
    {
        cout<<"invalid data\n";
    }
    else if(age>=18)
    {
        cout<<"can vote\n";
    }
    else
    {
        cout<<"can't vote\n";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"the number is ";
    cin>>a;
    if(a%2==0)
    {
        cout<<"even\n";
    }
    else
    {
        cout<<"odd\n";
    }
        return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks:";
    cin>>marks;
    if(marks<0||marks>100)
    {
        cout<<"invalid\n";
    }
    else if(marks>=90)
    {
        cout<<"grade A\n";
    }
    else if(marks>=80&&marks<90) //if both conditions are true then only cout will get executed
    {
        cout<<"grade B\n";
    }
    else
    {
        cout<<"grade C\n";
    }
    return 0;
}

//ternary statement

//condition?st1;st2;

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"number:";
    cin>>n;
    cout<<(n>=0?"positive":"negative")<<"\n";
    return 0;
}

//loops
//while loops
//print number from 1 to 5

#include <iostream>
using namespace std;
int main()
{
    int count=1;
    while(count<=5)
    {
        cout<<count<<"\n";
        count++;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int count=1;
    while(count<=50)
    {
        cout<<count<<"\n";
        count++;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int count=1;
    while(count<=50)
    {
        cout<<count; //1111111111(infinite loop)
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i=1,n=26; //initialization
    while(i<=n) //condition
    {
        cout<<i;
        i++; //updation
    }
    return 0;
}

//for loop with break statement
//for(initialization;condition;updation)

#include <iostream>
using namespace std;
int main()
{
    int i,n=30;
    for(i=1;i<=30;i++)
    {
    if(i==6)
    {
        break; //break statement
    }
    cout<<i<<" ";
}
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i,n=30,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
        if(i==6)
        {
            break;
        }
        cout<<sum<<" ";
    }
    return 0;
}

//do while loop

#include <iostream>
using namespace std;
int main()
{
    int i=1,n=10,sum=0;
    do
    {
        sum+=i;
        i++;
    }
    while(i<=n);
    cout<<"sum="<<sum<<" ";
    return 0;
}

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
 
//new approach
//instead of checking from 2 to n-1 for prime or not we can also check from i=2 to ň
//because factors of non prime repeat after ň (so why check the same factors again) eg:12 (1*12,2*6,3*4,4*3,6*2,12*1)
//ň=3.46~3 , so in this case we gotta check from i=2 to ň i.e 3 (i=2 to 3)
//so, i<=ň or i*i<=n (condition)

#include<iostream> //while loop
using namespace std;
int main()
{
    int i=2,n=5;
    if(n<=1) //edge cases handling
    {
        cout<<"invalid"<<"\n";
        return 0; //because now the code below wont be read untill we change the value to n<=1
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

//print 5 stars in 5 lines

#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        cout<<"*****"<<"\n";
    }
    return 0;
}

//print x stars in a single line

#include<iostream>
using namespace std;
int main()
{
    int i,x;
    cout<<"x=";
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cout<<"*";
    }
    cout<<"\n";
    return 0;
}

//prints m stars in x lines
#include<iostream>
using namespace std;
int main()
{
    int i,j,x=10,m=10;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=m;j++) //nested loops
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}



