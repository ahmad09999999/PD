#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void playermove(int x,int y);


main()
{

system ("cls");
printmaze();
int x=1;
int y=1;
while(true)
{

playermove(x,y);

if(x<20)
  { x=x+1;
  }
if(x==20)
  {
gotoxy(x-1,y);
cout<<" ";
x=2;
    }
}


}

void printmaze()
{  

cout<<"###########################"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"#                         #"<<endl;
cout<<"###########################"<<endl;
}



void playermove(int x,int y)
{ 

gotoxy(x-1,y);
cout<<" ";
gotoxy(x,y);
cout<<"p";
Sleep(500);
}
void gotoxy(int x, int y)
 {
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
