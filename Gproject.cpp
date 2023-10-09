#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void gotoxy(short x,short y);
char getCharAtxy(short int x,short int y);
void printMaze();
void printEnemy();
void printPlayer();
void printenemy2();
void printenemy3();
void eraseenemy2();
void erasePlayer();
void moveenemy2();
void eraseEnemy();
void moveEnemy();
void movePlayerright();
void movePlayerleft();
int eX=2;
int eY=2;
int fX=2;
int fY=12;
int pX=5;
int pY=25;
int main()
{
	system("cls");
	printMaze();
  printPlayer();
  printEnemy();
  printenemy2();
 
  while(true)
   {
  if (GetAsyncKeyState(VK_LEFT))
 {
 movePlayerleft();
 }
 if (GetAsyncKeyState(VK_RIGHT))
 {
 movePlayerright();
 }
	moveEnemy();
  moveenemy2();
  }
  return 0;
}
void gotoxy(short x, short y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMaze()
{
   cout<<" ############################################################################# "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" #                                                                           # "<<endl;
   cout<<" ############################################################################# "<<endl;
 }
 void printEnemy()
{   gotoxy(eX,eY);
    cout<<"            ___     "<<endl;
    gotoxy(eX,eY+1);
    cout<<"        ___/   \\___   "<<endl;
    gotoxy(eX,eY+2);
    cout<<"       /   '---'   \\  "<<endl;
    gotoxy(eX,eY+3);
    cout<<"       '--_______--'  "<<endl;
    gotoxy(eX,eY+4);
    cout<<"           /\\O/\\\\ "<<endl;
    gotoxy(eX,eY+5);
    cout<<"           // \\\\    "<<endl;
}
 void eraseEnemy()
 {   gotoxy(eX,eY);
    cout<<"                     "<<endl;
    gotoxy(eX,eY+1);
    cout<<"                      "<<endl;
     gotoxy(eX,eY+2);
    cout<<"                       "<<endl;
     gotoxy(eX,eY+3);
    cout<<"                        "<<endl;
     gotoxy(eX,eY+4);
    cout<<"                         "<<endl;
     gotoxy(eX,eY+5);
    cout<<"                         "<<endl;
}

void moveEnemy()
{    eraseEnemy();
    eX = eX + 3;
    eY = eY +1;
   if(eY == 15 )
   { eX = 2;
   eY = 2;}
   
  
   printEnemy(); 
   Sleep(100);
}
void printenemy2()
{   gotoxy(fX,fY);
    cout<<"            ___     "<<endl;
    gotoxy(fX,fY+1);
    cout<<"        ___/   \\___   "<<endl;
    gotoxy(fX,fY+2);
    cout<<"       /   '---'   \\  "<<endl;
    gotoxy(fX,fY+3);
    cout<<"       '--_______--'  "<<endl;
    gotoxy(fX,fY+4);
    cout<<"           /\\O/\\\\ "<<endl;
    gotoxy(fX,fY+5);
    cout<<"           // \\\\    "<<endl;
}
 void eraseenemy2()
 {   gotoxy(fX,fY);
    cout<<"                     "<<endl;
    gotoxy(fX,fY+1);
    cout<<"                      "<<endl;
     gotoxy(fX,fY+2);
    cout<<"                       "<<endl;
     gotoxy(fX,fY+3);
    cout<<"                        "<<endl;
     gotoxy(fX,fY+4);
    cout<<"                         "<<endl;
     gotoxy(fX,fY+5);
    cout<<"                         "<<endl;
}
void moveenemy2()
{    eraseenemy2();
    fX = fX + 2;
   if(fX == 50)
   { fX = 2;}
   printenemy2(); 
   Sleep(100);
}
void printPlayer()
 {
    gotoxy(pX,pY);
    cout <<"        /\\      ";
     gotoxy(pX, pY+1);
    cout <<"     __/~~\\__   ";
     gotoxy(pX, pY+2);
    cout <<"    /  |  |   \\ ";
     gotoxy(pX, pY+3);
    cout <<"  =====.  .===== ";
    gotoxy(pX, pY+4);
    cout <<"       ||||     ";
}
void erasePlayer()
  {
    gotoxy(pX,pY);
    cout <<"                 ";
     gotoxy(pX, pY+1);
    cout <<"                 ";
     gotoxy(pX, pY+2);
    cout <<"                  ";
     gotoxy(pX, pY+3);
    cout <<"                 ";
    gotoxy(pX, pY+4);
    cout <<"                 ";
  }
void movePlayerright()
{ if(getCharAtxy(pX+18,pY)==' ')
  {erasePlayer();
  pX=pX+1;
  printPlayer();}
}
void movePlayerleft()
{ if (getCharAtxy(pX-1,pY)==' ')
{erasePlayer();
pX=pX-1;
printPlayer();}
}
char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
