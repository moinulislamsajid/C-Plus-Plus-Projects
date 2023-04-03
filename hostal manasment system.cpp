#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

void menu();
void pascode();
void cpascode();
using namespace std;

class one
{
    public:
    virtual void get()=0;
    virtual void show()=0;

};
class info:public one
{
    public:
    char name[50],time[50];
    int num,age;
    void get()
    {
        system("cls");
        //cin.syc();
        cout<<"\n enter patient name : ";
        cin.getline(name,50);

         cout<<"\n enter The Appoinment Time : ";
        cin.getline(time,50);

        cout<<"\n enter age : ";
        cin>>age;

         cout<<"\n enter The Appoinment No : ";
         cin>>num;
    }
    void show()
    {
        cout<<"\nName :"<<name;
        cout<<"\nAge :"<<age;
        cout<<"\nNo :"<<num;
        cout<<"\nTime :"<<time;
    }
};
class rana:public info
{
public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("Rana.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your entry is been saved";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("rana.txt");
        if(in==NULL)
        {
            cout<<"\n\nNo Data In The File";
            cout<<"\n\n\t\tPress Any Key to continue : ";
            getch();
            menu();
        }
        else{
            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
                }
                in.close();
                getch();
                menu();
        }
    }
};
class waqar:public info
{
   public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("waqar.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your entry is been saved";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("waqar.txt");
        if(in==NULL)
        {
            cout<<"\n\nNo Data In The File";
            cout<<"\n\n\t\tPress Any Key to continue : ";
            getch();
            menu();
        }
        else{
            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
                }
                in.close();
                getch();
                menu();
        }
    }

};
class Ahmed:public info
{ public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("Ahmed.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your entry is been saved";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("Ahmed.txt");
        if(in==NULL)
        {
            cout<<"\n\nNo Data In The File";
            cout<<"\n\n\t\tPress Any Key to continue : ";
            getch();
            menu();
        }
        else{
            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
                }
                in.close();

        }
    }

};
class staf:public one
{
    public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("staf.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your entry is been saved";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("staf.txt");
        if(!in)
        {
            cout<<"File open error";

        }
        else{
            while(!in.eof())
            {
                in.getline(all,999);
                cout<<all<<endl;
            }
            in.close();
            cout<<"\n\n\t\tPress Any To Continue : ";
            getch();
            menu();
    }
};



