#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    typedef map<string,int> maptype;
    maptype popmap;
    maptype :: iterator p;

    popmap.insert(pair<string,int>("karnataka",412354));
    popmap.insert(pair<string,int>("jaipur",612354));
    popmap.insert(pair<string,int>("maharashtra",752354));
    popmap.insert(pair<string,int>("delhi",814354));
    popmap.insert(pair<string,int>("bihar",562354));
    //popmap["gujrat"]=654738;

    cout<<"Size of Populationmap : "<<popmap.size()<<endl;

    cout<<"Displaying contents of popmap ...\n";
    for(p=popmap.begin();p!=popmap.end();++p)
    {
        cout<<p->first<<" ,"<<p->second<<endl;
    }
    string st;
    cout<<"Enter state no to search : ";    cin>>st;
    p=popmap.find(st);
    if(p==popmap.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"found!!"<<endl;
        cout<<st<<" population is : "<<p->second;

    }
    return 0;
}