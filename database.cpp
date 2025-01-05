#include<iostream>
#include<string>
using namespace std;
class student
{ 
    public:
    string name;
    int rollno;
    string studclass;
    char division;
    string dob;
    string bloodgrp;
    string contactadress;
    string telephone;
    string drivelicence;
   static int studentcount; 
    public:
    student() 
    {
    cout<<"enter name = ";
        cin>>name;
        cout<<"enter rollno = ";
        cin>>rollno;
        cout<<"enter class = ";
        cin>>studclass;
        cout<<"enter division = ";
        cin>>division;
        cout<<"enter dob = ";
        cin>>dob;
        cout<<"enter bloodgrp = ";
        cin>>bloodgrp;
        cout<<"enter contactadress = ";
        cin>>contactadress;
        cout<<"enter telephone = ";
        cin>>telephone;
        cout<<"drive License no = ";
        cin>>drivelicence;
     studentcount++;
     
     
   }
   student( string n,int r,string st,char d,string db,string bgrp,string cad,string tele,string drive)
   {
    name=n;
    rollno=r;
    studclass=st;
    division=d;
    dob=db;
    bloodgrp=bgrp;
     contactadress=cad;
     telephone=tele;
     drivelicence=drive;
     studentcount++;
     
   }
   student(student &x)
   {
     name=x.name;
    rollno=x.rollno;
    studclass=x.studclass;
    division=x.division;
    dob=x.dob;
    bloodgrp=x.bloodgrp;
     contactadress=x.contactadress;
     telephone=x.telephone;
     drivelicence=x.drivelicence;
     studentcount++;
   }
   
 void display()
 {
     
     cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno<< endl;
        cout << "Class: " <<studclass << endl;
        cout << "Division: " << division << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Blood Group: " << bloodgrp << endl;
        cout << "Contact Address: " << contactadress << endl;
        cout << "Telephone Number: " << telephone << endl;
        cout << "Driving License Number: " << drivelicence << endl;
 }
 static int getstudentcount()
    {
        return studentcount;
    }
 friend class display;

};
class display /*friend class*/
{
    public:
    void displayinfo(student &t)
    {
        t.display();
    }
    
};
int student::studentcount=0;
int main()
{
    student s1;
    student s2("ram",30,"SE-A",'S',"09-05-2005","A+","ravet","9067813273","re452");
    student s3(s1);

    display d;
    cout<<"\n---SHOWING STUDENT DETAILS using friend class method ---"<<endl;
    d.displayinfo(s1);

    cout<<"\n---SHOWING STUDENT DETAILS ---"<<endl;
    s2.display();
    cout<<"\n---SHOWING STUDENT DETAILS ---"<<endl;
    s3.display();

    cout<<"\ncount of student="<<student::getstudentcount();
    return 0;
    
}