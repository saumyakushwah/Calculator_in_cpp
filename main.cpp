/*
    Enter two numbers:
    2 3

    What do you want to perform?
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    Choose: 1

    2 + 3 = 5
*/

//Author: Saumya Kushwah

#include <iostream>
using namespace std;

int main()
{
    float m,n,a,s,mt,d,choose;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    cout<<"what do you want to perform?"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Choose: "<<endl;
    cin>>choose;
    if(choose==1) {
        a=m+n;
        cout<<"Sum: "<<m<<" - "<<n<<" = "<<a;
    }
    else if(choose==2) {
        s=m-n;
        cout<<"Subtraction: "<<m<<" - "<<n<<" = "<<s;
    }
    else if(choose==3) {
        mt=m*n;
        cout<<"Multiplication: "<<m<<" x "<<n<<" = "<<mt;
    }
    else if(choose==4) {
        d=m/n;
        cout<<"Division: "<<m<<" / "<<n<<" = "<<d;
    }
    cout<<endl;
    cout<<"hope u get the desired result";
    cout<<endl;
    cout<<endl;
    return 0;
}
