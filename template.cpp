#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class item
{
    public:

    string name;
    int cost;
    int quantity;
    int code;

    bool operator ==(item i1)
    {
        if(code==i1.code)
        {
            return 1;
            
        }
        return 0;
    }

    bool operator<(item i1)
    {
        if(code<i1.code)
        {
            return 1;
        }
        return 0;
    }
     
};

vector<item> v;
vector<item>::iterator p;
void print(item i1);
void insert();
void display();
void search();
void delt();

bool compare(item i1,item i2)
{
    return i1.cost<i2.cost;
}

int main()
{
    int choice =0;
    char ans='y';
    do
    {
        cout<<"1.insert\n2.display\n3.search\n4.sort\n5.delete\n6.exit"<<endl;
        cout<<"Enter your choice : "; cin>>choice;

        switch(choice)
        {
            case 1:
            {
                insert();   break;
            }
            case 2:
            {
                display();  break;
            }
            case 3:
            {
                search();  break;
            }
            case 4:
            {
                sort(v.begin(),v.end(),compare);
                cout<<"sorted on cost..."<<endl;
                display();  break;
            }
            case 5:
            {
                delt();  break;
            }
            case 6:
            {
                exit(0); 
            }
            default:
            {
                cout<<"Invalid choice ..."<<endl;
            }
        }
        cout<<"Do you want to continue (y/n) : ";
        cin>>ans;
    } while (ans=='y'||ans=='Y');
 return 0;   
}

void print(item i1)
{
    cout<<"Item name : "<<i1.name<<endl;
    cout<<"Item cost : "<<i1.cost<<endl;
    cout<<"Item quantity : "<<i1.quantity<<endl;
    cout<<"Item code : "<<i1.code<<endl;
}

void insert()
{
    item i1;
    cout<<"Enter item name : ";  cin>>i1.name;
    cout<<"Enter item cost : ";  cin>>i1.cost;
    cout<<"Enter item quantity : ";  cin>>i1.quantity;
    cout<<"Enter item code : ";  cin>>i1.code;
    v.push_back(i1);
}

void display()
{
    for_each(v.begin(),v.end(),print);
}

void search()
{
    item i1;
    cout<<"Enter item code to search item : ";  cin>>i1.code;

    p=find(v.begin(),v.end(),i1);
    if(p==v.end())
    {
        cout<<"NOT found"<<endl;
    }
    else{
        cout<<"item Found "<<endl;
    }
}

void delt()
{
    item i1;
    cout<<"Enter item code to Delete item : ";  cin>>i1.code;

    p=find(v.begin(),v.end(),i1);
    if(p==v.end())
    {
        cout<<"NOT found"<<endl;
    }
    else{
        v.erase(p);
        cout<<"item Deleted!! "<<endl;
    }
}