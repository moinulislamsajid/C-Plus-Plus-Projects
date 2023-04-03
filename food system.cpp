#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    //Quantity
     int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food item sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //Total proce of iteems
   int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;

   cout<<"\n\tQuantity of items we have";
   cout<<"\n Rooms avaliabe : ";
   cin>>Qrooms;
   cout<<"Quantity of pasta : ";
   cin>>Qpasta;
   cout<<"Quantity of burger : ";
   cin>>Qburger;
    cout<<"Quantity of noodless : ";
   cin>>Qnoodles;
    cout<<"Quantity of shake : ";
   cin>>Qshake;
    cout<<"Quantity of chicken : ";
   cin>>Qchicken;

   cout<<"\n\t\t\t Please select from the menu option ";
   cout<<"\n\n1) Rooms";
   cout<<"\n2) Pasta";
   cout<<"\n3) Burger";
   cout<<"\n4) Noodles";
   cout<<"\n5) shake";
   cout<<"\n6) Chicken-roll";
   cout<<"\n7) Information regarding sales and collection ";
   cout<<"\n8) exit ";

   cout<<"\n\nplease choice any one of above items : ";
   cin>>choice;

   switch(choice)
   {
    case 1 :
           cout<<"Enter the number of rooms you want : ";
           cin>> quant;
           if(Qrooms-Srooms>=quant){
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*800;
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
           }
           else{
                cout<<"\n\tOnly"<<Qrooms-Srooms<<"Remaining in hotel";
                break;
           }

     case 2 :
           cout<<"\n\nEnter the number of pasta you want : ";
           cin>> quant;
           if(Qpasta-Spasta>=quant){
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant*250;
                cout<<"\n\n\t\t"<<quant<<" pasta is the order";
           }
           else{
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Remaining in pasta";
                break;
           }

     case 3 :
           cout<<"\n\nEnter the number of Burger you want : ";
           cin>> quant;
           if(Qburger-Sburger>=quant){
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*250;
                cout<<"\n\n\t\t"<<quant<<" burger is the order";
           }
           else{
                cout<<"\n\tOnly"<<Qburger-Sburger<<"Remaining in burger";
                break;
           }
     case 4 :
           cout<<"\n\nEnter the number of noodles you want : ";
           cin>> quant;
           if(Qnoodles-Snoodles>=quant){
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*250;
                cout<<"\n\n\t\t"<<quant<<" noodles is the order";
           }
           else{
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Remaining in noodles";
                break;
           }
    case 5 :
           cout<<"\n\nEnter the number of shake you want : ";
           cin>> quant;
           if(Qshake-Sshake>=quant){
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*250;
                cout<<"\n\n\t\t"<<quant<<" shake is the order";
           }
           else{
                cout<<"\n\tOnly"<<Qshake-Sshake<<"Remaining in shake";
                break;
           }
        case 6 :
           cout<<"\n\nEnter the number of chicken you want : ";
           cin>> quant;
           if(Qchicken-Schicken>=quant){
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*250;
                cout<<"\n\n\t\t"<<quant<<" chicken is the order";
           }
           else{
                cout<<"\n\tOnly"<<Qchicken-Schicken<<"Remaining in chicken";
                break;
           }
        case 7 :
            cout<<"\n\t\tDetails of sales and collection";
             cout<<"\n\n Number of rooms we had : "<<Qrooms;
             cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
             cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
             cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;



   }


}

