#include<iostream>
#include<conio.h>
using namespace std;
bool gameover;
const int width = 20;
const int heigth = 20;
int x,y,fruitx,fruity,score;
enum direcation {STOP=0,LEFT,RIGHT,UP,DOWN};
direcation dir;

void setup(){
    gameover = false;
    dir= STOP;
    x = width/2;
    y = heigth/2;
    fruitx = rand() % width;
    fruity = rand() % heigth;
    score = 0;
}

void draw(){
 system("cls");
 for(int i=0;i<width+2;i++)
    cout<< "#";
    cout<<endl;

 for(int i=0;i<heigth;i++){
    for(int j=0;j<width;j++){
        if(j==0)
            cout<< "#";
        if(i == y && j== x)
            cout<<"0";
        else if(i== fruity && j == fruitx)
            cout<<"F";
        else
            cout<<" ";

        if(j==width-1){
            cout<<"#";
        }
        cout<<endl;
    }
 } for(int i=0;i<width+2;i++)
    cout<<"#";
 cout<<endl;
 cout<<"score"<<score<<endl;
}


void input(){
    if(_kbhit()){
        switch(_getch()){

    case 'a':
         dir = LEFT;
         break;

    case 'd':
         dir = RIGHT;
         break;

    case 'w':
         dir = UP;
         break;

    case 's':
         dir = DOWN;
         break;

    case 'x':
         gameover = true ;
         break;



        }
    }
}

void logic(){
 switch(dir)
 {
case LEFT:
    x--;
    break;

    case RIGHT:
    x++;
    break;

    case UP:
    y--;
    break;

    default:
    break;
   }
 if(x>width || x<0 || y>heigth || y<0)
    gameover = true;
 if(x == fruitx && y == fruity)
 {
     score+=10;
     fruitx = rand() % width;
     fruity = rand() % heigth;
 }


}
int main()
{
   setup();
   while(!gameover){
    draw();
    input();
    logic();
    //sleep(10)

   }

    return 0;
}

