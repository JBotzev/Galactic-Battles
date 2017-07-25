#include "map4.h"
#include <iostream>
#include "ctime"
#include "string.h"
#include "windows.h"
#include "fstream"
#include "menu.h"
#include "levels.h"
#include "shop.h"
#include "ship.h"
#include "weapons.h"
#include "shields.h"

using namespace std;

void cls1();
void cls();
void menua();
void levelsa();
void colors4();

char player4;
int p4;
int c4;

void dead4()
{
    string menu[3]={"                                    MAIN MENU","                                     RESTART","                                      QUIT"};
    int select=0;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
        cout<<"\n\n\n\n\n\n                                    YOU DIED\n";
        cout<<"                                 ==============\n\n";

        for(int i=0; i<3; i++)
        {
            if(i==select)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<menu[i]<<endl<<endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                cout<<menu[i]<<endl<<endl;
            }
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<"                                 ==============";

        while(true)
        {
            if(GetAsyncKeyState(VK_DOWN)!=0)
            {Sleep(200);
                select+=1;
                if(select==3)
                {
                    select=0;
                }
                break;
            }
            if(GetAsyncKeyState(VK_UP)!=0)
            {Sleep(200);
                select-=1;
                if(select==-1)
                {
                    select=2;
                }
                break;
            }
            if(GetAsyncKeyState(VK_RETURN)!=0)
            {
                Sleep(200);
                switch(select)
                {
                    case 0:
                    {
                        cls1();
                        PlaySound(TEXT("Star Wars-Jedi Temple March.wav"),NULL,SND_ASYNC|SND_LOOP);
                        menua();
                        break;
                    }
                    case 1:
                    {
                        cls1();
                        mapo mo;
                        mo.map4();
                        break;
                    }
                    case 2:
                    {
                        exit(EXIT_PROCESS_DEBUG_EVENT);

                        break;
                    }

                }
            }
        }
    }
}

void ship::ship4()
{

    string menu[3]={"                     Interceptor ","    Warship    "," StarFighter"};
    int select=1;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n\n\n\n";
            cout<<"                               Select a Spacecraft\n\n";
            cout<<"                  ============================================\n\n";

        for(int i=0; i<3; i++)
        {
            if(i==select)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<menu[i];
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                cout<<menu[i];
            }
        }
        if(select==0)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"\n\n\n                          Ö                                            \n\n\n\n";
        }
        if(select==1)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"\n\n\n                                        è                             \n\n\n\n";
        }

        if(select==2)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"\n\n\n                                                      Þ                \n\n\n\n";
        }
        while(true)
        {
            if(GetAsyncKeyState(VK_RIGHT)!=0)
            {Sleep(200);
                select+=1;
                if(select==3)
                {
                    select=0;
                }
                break;
            }
            else if(GetAsyncKeyState(VK_LEFT)!=0)
            {Sleep(200);
                select-=1;
                if(select==-1)
                {
                    select=2;
                }
                break;
            }
            else if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);
                cls1();
                levelsa();
            }

//COLORS
            else if(GetAsyncKeyState(VK_RETURN)!=0)
            {
                Sleep(200);
                if(select==0)
                {
                    p4=0;
                }
                if(select==1)
                {
                    p4=1;
                }
                if(select==2)
                {
                    p4=2;
                }
                colors4();
            }
        }
    }
}

void colors4()
{
   string menu[5]={"                         BLUE "," GREEN "," RED "," AQUA "," YELLOW "};
    int select=2;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                 Select a Colour\n\n";
                                  cout<<"                       ==================================\n\n";

        for(int i=0; i<5; i++)
        {
            if(i==select)
            {   if(i==0)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                cout<<menu[i];c4=0;
                }
                if(i==1)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                cout<<menu[i];c4=1;
                }
                if(i==2)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<menu[i];c4=2;
                }
                if(i==3)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
                cout<<menu[i];c4=3;
                }
                if(i==4)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<menu[i];c4=4;
                }


            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
                cout<<menu[i];
            }
        }

        while(true)
        {
            if(GetAsyncKeyState(VK_RIGHT)!=0)
            {Sleep(200);
                select+=1;
                if(select==5)
                {
                    select=0;
                }
                break;
            }
            else if(GetAsyncKeyState(VK_LEFT)!=0)
            {Sleep(200);
                select-=1;
                if(select==-1)
                {
                    select=4;
                }
                break;
            }
            else if(GetAsyncKeyState(VK_RETURN)!=0)
            {
                PlaySound(TEXT("Start.wav"),NULL,SND_ASYNC);
                cls1();
                mapo ma;
                ma.map4();
                break;
            }
            else if(GetAsyncKeyState(VK_ESCAPE))
            {   Sleep(200);
                cls1();
                ship so;
                so.ship4();
                break;
            }
        }
    }
}

//LEVEL 444444444444444444444444444444444444444444444444444444444444444
void mapo::map4()
{
    cout<< " stana we ";
}
