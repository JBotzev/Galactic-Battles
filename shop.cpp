#include "shop.h"
#include "menu.h"
#include "string.h"
#include <iostream>
#include "windows.h"
#include "weapons.h"
#include "shields.h"
#include "map.h"
#include "fstream"

using namespace std;

void cls1();
void cls();
void menua();

void shop::shopa()
{


    string classa[2]={"                               WEAPONS   "," SHIELDS"};
    int select=0;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n\n";
            cout<<"                               ==================\n";


        for(int i=0; i<2; i++)
        {
            if(i==select)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<classa[i];
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                cout<<classa[i];
            }
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                               ==================\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        cout<<"                                     { {} }\n";
        cout<<"                                    { {  } }\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);

        cout<<"   Ø -  -    -  -   - -   -   -";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        cout<<"    { { {} } }    ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        cout<<"- - -   -  -   -  - -   -  <\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        cout<<"                                    { {  } }\n";
        cout<<"                                     { {} }";

        while(true)
        {
            if(GetAsyncKeyState(VK_RIGHT)!=0)
            {Sleep(200);
                select+=1;
                if(select==2)
                {
                    select=0;
                }
                break;
            }
            if(GetAsyncKeyState(VK_LEFT)!=0)
            {Sleep(200);
                select-=1;
                if(select==-1)
                {
                    select=1;
                }
                break;
            }
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);
                cls1();
                menua();

            }
            if(GetAsyncKeyState(VK_RETURN)!=0)
            {
                Sleep(200);
                switch(select)
                {
                    case 0:
                        {
                            weapons wo;
                            wo.weaponsa();
                        }
                    break;
                    case 1:
                        {
                            shields so;
                            so.shielda();
                        }
                    break;
                }
            }
        }
    }
}





