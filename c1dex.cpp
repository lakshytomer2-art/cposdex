//ch-1
//first program
#include<iostream>
using namespace std;
int main()
{
 cout << "dp" << endl; //endl(end of line)or \n(escape sequence) means the same thing that the current line ends.
    return 0;
}

//variables
#include<iostream>
using namespace std;
int main()
{
    //data types (primitive)
    //integer data type(int)
    int age = 25; //a variable must always start with an underscore or aA-zZ and not with a digit or something else it will give an error.
    cout<<"age"<<endl; //prints age only like strings in python
    cout<<age<<endl; //prints int age value
    cout<<sizeof(age)<<endl; //prints size of data type i.e for an integer it's 4 bytes
    //character data type(char)
    char grade ='A';
    cout<<grade<<endl;
    cout<<sizeof(grade)<<endl; //prints size of char data type i.e 1 byte
    //float data type(float)
    float pi=3.14f;
    cout<<pi<<endl;
    cout<<sizeof(pi)<<endl; //prints size of float data type i.e 4 bytes
    bool safe=false;
    cout<<safe<<endl; //true->1 & false->0
    cout<<sizeof(safe)<<endl; //prints size of boolean data type i.e 1 byte
    double price=10.99;
    cout<<price<<endl; //same as float (float by default is named as double)
    cout<<sizeof(price)<<endl; //prints size of double data type i.e 8 bytes
 return 0;
}

//type conversion(automatic)(implicit)
#include<iostream>
using namespace std;
int main()
{
    char grade='a';
    int value= grade;
    cout<<value<<endl;
    double xox=100.789567;
    float new_value=xox;
    cout<<new_value<<endl;


//type casting(manual)(explicit)
//generally used to convert big data types to small ones

   double yoy=100.76757;
   int np_value=int(yoy);//Old C-Style (Fast but risky)
   int np_value1=static_cast<int>(yoy);//Modern C++ Style (Safe and explicit)
   cout<<yoy<<endl;
   cout<<np_value<<endl;
   cout<<np_value1<<endl;
   //or
   cout<<yoy<<"\n"<<np_value<<"\n"<<np_value1<<"\n";
   return 0;
}

// The Golden Rule :
//Widening (Small to Big): Let the compiler do it implicitly.
//Narrowing(Big to Small): Always use explicit.
//Mixed-Type Math Logic: Always use explicit to fix the calculation before it happens.(eg:Dividing two integers to get a decimal, Avoiding the integer division trap (4 / 5 = 0).)

//input in c++
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age: ";
    cin>>age;
    cout<<"your age is: "<<age<<"\n";
    double price;
    cout<<"enter the price:";
    cin>>price;
    cout<<"the price is:"<<price<<"\n";
    return 0;
}

//operators

//airthmetic operator

#include<iostream>
using namespace std;
int main()
{
int a=5, b=9;
int sum=a+b;
cout<<"sum="<<sum<<"\n";

//or

int c=4, d=6;
cout<<"sum="<<(c+d)<<"\n";
int e=1, f=2;
cout<<"difference="<<(e-f)<<"\n";
int g=2, h=7;
cout<<"product="<<(g*h)<<"\n";
int m=5, n=2;
cout<<"division="<<(m/n)<<"\n"; //(inaccurate)
double i=3.6, j=4.5;
cout<<"division="<<(i/j)<<"\n"; //0.8 (accurate)
int k=5, l=2;
cout<<"modulus="<<(k%l)<<"\n"; //1
return 0;

}

//division(airthmetic operator)

#include<iostream>
using namespace std;
int main()
{
    int a=5; //implicit(automatic)
    float b=3; //division will be according to the bigger datatype, here it is float(even if they both take 4 bytes but float with more decimal points is more precised and is considered as a bigger data type)
    cout<<"division="<<(a/b)<<"\n";
    int c=5;
    double d=2; //division will be according to the bigger datatype, double - the bigger datatype
    cout<<"division="<<(c/d)<<"\n";
    
    //or

    cout<<"div="<<(5/(float)3)<<"\n"; //explicit(manual)
    cout<<"div="<<(5/(double)2)<<"\n";
    int ans=(5/(double)2); //here when we store that divided double value in a small datatype like int it loses its decimal values and the ans printed will be in int form
    cout<<"division="<<ans<<"\n";
return 0;
}

//relational operator

#include<iostream>
using namespace std;
int main()
{
    cout<<(5<7)<<"\n"; //relative operator gives boolean outputs like true or false
    cout<<(5>7)<<"\n"; //false->0
    cout<<(1<=1)<<"\n"; //true->1
    cout<<(2>=1)<<"\n";
    cout<<(3==2)<<"\n";
    cout<<(3!=3)<<"\n";
    return 0;
}
 
//logical operators

#include<iostream>
using namespace std;
int main()
{
    cout<<!(3<1)<<"\n"; //not (logical operator)- gives opp as result
    cout<<!(3>1)<<"\n";
    cout<<((3>1)||(1>3))<<"\n"; //or - if one of the conditions is true the whole output becomes true->1
    cout<<((3<1)||(2<1))<<"\n"; //if both conditions are false the output is false too
    cout<<((3<1)&&(3>1))<<"\n"; //and - if one of the conditions is false the output becomes false 
    cout<<((3>1)&&(3<5))<<"\n"; //if both conditions are true then only the output becomes true
    return 0;
}

//unary operators
//increment ++ :a++/++a

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=++a; //pre increment - increment first, use second
    cout<<"a="<<a<<"\n"; //#1 a becomes 11
    cout<<"b="<<b<<"\n"; //#2 b grabs the new value
    int c=10;
    int d=c++; //post increment - use first,increment second
    cout<<"c="<<c<<"\n"; //#2 c increments to 11 
    cout<<"d="<<d<<"\n"; //#1 grabs the current value 10
    return 0;
}

//decrement -- :a--/--a

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=--a; //pre decrement - decrement first, use second
    cout<<"a="<<a<<"\n"; //#1 a becomes 9
    cout<<"b="<<b<<"\n"; //#2 b grabs the new value
    int c=10;
    int d=c--; //post decrement - use first,decrement second
    cout<<"c="<<c<<"\n"; //#2 c decrements to 9 
    cout<<"d="<<d<<"\n"; //#1 grabs the current value 10
    return 0;
}

