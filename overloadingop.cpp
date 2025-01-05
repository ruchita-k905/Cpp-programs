#include<iostream>
using namespace std;
class Complex
{
    public:
    float r,i;

    Complex()
    {
        r=0; i=0;
    }

    Complex operator+(Complex);
    istream operator>>(Complex);
    ostream operator<<(Complex);
    Complex operator*(Complex);
};

Complex Complex::operator*(Complex c)
{
    Complex c3;
    c3.r=r*c.r;
    c3.i=i*c.i;
    return c3;
}
Complex Complex :: operator+(Complex c)
{
    Complex c3;
    c3.r=r+c.r;
    c3.i=i+c.i;
    return c3;
}

istream &operator>>(istream &in,Complex &c)
{
    cout<<"Enter real part : ";  in>>c.r;
    cout<<"Enter img part : ";  in>>c.i;
    return in;
}

ostream &operator<<(ostream &ou,Complex &c)
{
    ou<<c.r<<"+"<<c.i<<"i"<<endl;
    return ou;
}

int main()
{
    Complex c1,c2,c3;
    cout<<"Enter first obj "<<endl;
    cin>>c1;
    cout<<"Enter second obj "<<endl;
    cin>>c2;

    c3=c1+c2;
    cout<<"addition of two complex nos"<<endl;
    cout<<c3;

    c3=c1*c2;
    cout<<"Multiplication of two complex nos"<<endl;
    cout<<c3;
    return 0;
}

/*output
Enter first obj 
Enter real part : 3
Enter img part : 2
Enter second obj 
Enter real part : 3
Enter img part : 2
addition of two complex nos
6+4i
Multiplication of two complex nos
9+4i
*/