#include<iostream>
using namespace std;
void pattern()
{
    int width;
    int heigth;
    int i,j;
    for(i=1;i<=width;i++){
        for(j=1;j<=heigth;j++){
            if(i==1||i==width||j==1||j==heigth)
            cout<<"#";
            cout<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    pattern();
    return 0;
}
