#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class bank{
    char name[100],add[100],y;
    int balance;
public :
    void Open_an_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank :: Open_an_account(){
        cout<<"Enter your full name : ";
        cin.ignore();
        cin.getline(name,100);
        cout<<"Enter your address : ";
        cin.ignore();
        cin.getline(add,100);
        cout<<"What type of account you want to open saving (s) or current (c) : ";
        cin>>y;
        cout<<"Enter amount for deposit : ";
        cin>>balance;
        cout<<"Your account has been created Successfully\n";
}
 void bank :: deposite_money(){
        int a;
        cout<<" enter how much you deposit : ";
        cin>>a;
        balance+=a;
        cout<<"total amount you deposit : \t"<<balance;
}
void bank ::  display_account(){
  cout<<"your full name : \t"<<name;
  cout<<"your address : \t"<<add;
  cout<<"type of account that you open : \t"<<y;
  cout<<"amount you deposit : \t"<<balance;
  }
void bank :: withdraw_money(){
    float amount;
    cout<<"\n withdraw :";
    cout<<"enter amount to withdraw : ";
    cin>>amount;
    balance=balance-amount;
    cout<<"now total amount is left : "<<balance;


}
int main()
{
    int ch,x;
    bank obj;
    do{
                cout<<"\n\t\tWelcome To Bank Management System " <<endl;
   cout<<"\t===================== *** ========================"<<endl;
   cout<<endl;
   //cout<<endl;
   cout<<"1.Open an account\n";
   cout<<"2.Diposit money\n";
   cout<<"3.withdraw money\n";
   cout<<"4.Display account\n";
   cout<<"5.Exit";
   cout<<endl;
   cout<<endl;
   cout<<"select the option from above : \n";
   cin>>ch;
   switch(ch)
   {
       case 1 :"1.Open an account\n";
         obj. Open_an_account();
         break;

       case 2 : "2.Diposit money\n";
         obj.deposite_money();
         break;

        case 3 :"3.withdraw money\n";
        obj.display_account();
        break;

        case 4 :"4.Display account\n";
        obj. display_account();
        break;

        case 5 :
            if(ch==5){
                exit(0);
            }
            default:
            {
                cout<<"This is not exist try again\a\n";
            }
        cout<<"\n do want to select next option than  press : y\n ";
        cout<<"if you want to exit than press :  N\n";
        x=getch();
        if(x=='N' || x=='n')
            exit(0);
   }
   }while(x=='Y'|| x=='y');

   return 0;

   }








