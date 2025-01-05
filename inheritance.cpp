#include<iostream>
#include<string>
using namespace std;
class publication
{
    protected:
    string title;
    int price;
    public:
    publication()
    {
        cout<<"\nEnter Book Name : ";
        cin>>title;

        try
        {
        cout<<"Enter Price : ";
        cin>>price;

        if (price<0)
            throw price;
        }
        catch(int)
        {
            cout<<"error : Invalid Price !! setting price to 0 "<<endl;
            price =0;
            title="";
        }
    }
    
    void display()
    {
        cout<<"Title : "<<title<<" ,Price : "<<price<<endl;
    }
};
class book: public publication
{
    int pgcount;
    public:
     
    book()
    {
        cout<<"enter page count : ";
        cin>>pgcount;
        if(pgcount<=0)
        {
            cout<<"Invalid PageCount..Resettting pagecount to 0.."<<endl;
            pgcount=0;
           
        }
    }

    void showbook()
    {
        cout<<"\nBook 1 details "<<endl;
        display();
        cout<<"Page count of book : "<<pgcount<<endl;
    }

};

class tape:public publication
{
    int time;
    public:
    tape()
    {
        cout<<"Enter playing time in minutes : ";
        cin>>time;
    }

    void showtape()
    {
        cout<<"\nBook 2 Details "<<endl;
        display();
        cout<<"Book Played for "<<time<<" minutes."<<endl;
    }

};

int main()
{
    book b; tape t;
    b.showbook();       t.showtape();
    return 0;
}