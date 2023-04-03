#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
/*struct student
{
    string fname;
    string lname;
    string Registraation;
    string classes;
} studentdata;
struct teacher
{
    string fst_name;
    string lst_name;
    string qualifaction;
    string exp;

    string pay;
    string subj;
    string lec;
    string addres;
    string cel_no;
    string blodgroup;
    string servrs;
} tech[50];*/
int main()
{
    int i=0,j;
    int choice;
    int choice1;
    string find;
    string srch;
    while(1)
    {
        system("cls");
        cout<<"1.Student information"<<endl;
        cout<<"2.Teacher information"<<endl;
        cout<<"3. Exit\n";
        cout<<endl;
        cout<<"Enter your choice above : ";
        cin>>choice;

        system("cls");
        switch(choice)
        {
        case 1 :
        {
            while(1)
            {
                system("cls");
                cout<<"Student section";
            }

         }
        }
    }
}




                   /* ofstream f1("student.txt",ios::app);
                    for(i=0; choice!='n'; i++)
                    {
                        if((choice=='y')||(choice=='Y')||(choice=='1'))
                        {
                            cout<<"Enter First Name : ";
                            cin>>studentdata.fname;
                            cout<<"Enter Last Name : ";
                            cin>>studentdata.lname;
                            cout<<"Enter Registration Number : ";
                            cin>>studentdata.Registraation;
                            cout<<"Enter class : ";
                            cin>>studentdata.classes;
                            f1<<studentdata.fname<<endl<<studentdata.lname<<endl<<studentdata.Registraation<<endl<<studentdata.classes<<endl;
                            cout<<"Do you want to enter data : ";
                            cout<<"press y for continue and n for ends : ";
                            cin>>choice;
                        }
                    }
                    f1.close();
                }
                continue;*/







