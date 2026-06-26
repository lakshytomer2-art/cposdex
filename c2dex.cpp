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

