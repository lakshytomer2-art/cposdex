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



