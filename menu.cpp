#include "menu.h"
#include "ship.h"
#include "string.h"
#include <iostream>
#include<windows.h>
#include<string>
#include<mmsystem.h>
#include "levels.h"
#include "instruct.h"
#include "instra.h"
#include "records.h"
#include "credits.h"
#include "shop.h"

using namespace std;
void cls();
void cls1();
void levelsa();
void confirm();

void menua()
{
    string menu[6]={"   START","   STORE","ACHIEVEMENTS","INSTRUCTIONS","  CREDITS","    QUIT"};
    int select=0;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n\n";
            cout<<"                               ==================\n\n";


        for(int i=0; i<6; i++)
        {
            if(i==select)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<"                                  "<<menu[i]<<endl<<endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                cout<<"                                  "<<menu[i]<<endl<<endl;
            }
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<"                               ==================\n";
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
            if(GetAsyncKeyState(VK_DOWN)!=0)
            {Sleep(200);
                select+=1;
                if(select==6)
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
                    select=5;
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
                        levelsa();
                        break;
                    }
                    case 1:
                    {
                        cls1();
                        shop so;
                        so.shopa();
                        break;
                    }
                    case 2:
                    {
                        cls1();
                        records ro;
                        ro.recorda();
                        break;
                    }
                    case 3:
                    {
                        instra ia;
                        ia.instr();
                        break;
                    }
                    case 4:
                    {
                        cls1();
                        credits co;
                        co.credit();
                        break;
                    }
                    case 5:
                    {
                        confirm();

                        break;
                    }

                }
            }
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);
                confirm();
            }
        }
    }


}

void confirm()
{
    cls1();
    string confirm[2]={"                                    NO  ","  YES"};
    int select=0;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n\n";
            cout<<"                               ==================";
        cls();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
cout<<"\n\n\n\n\n\n\n\n\n\n                              Do you wish to quit?\n\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                    cout<<"                            ========================\n\n";

        for(int i=0;i<2;i++)
        {
            if(i==select)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<confirm[i];
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                cout<<confirm[i];
            }
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<"\n\n\n\n\n                               ==================\n";
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
            {
                Sleep(200);
                select+=1;
                if(select==2)
                {
                    select=0;
                }
                break;
            }
            if(GetAsyncKeyState(VK_LEFT)!=0)
            {
                Sleep(200);
                select-=1;
                if(select==-1)
                {
                    select=1;
                }
                break;
            }
            if(GetAsyncKeyState(VK_RETURN)!=0)
            {   Sleep(200);
                switch(select)
                {
                    case 1:
                    exit(EXIT_PROCESS_DEBUG_EVENT);
                    break;
                    case 0:
                    cls1();
                    menua();
                }
            }
            if(GetAsyncKeyState(VK_ESCAPE)!=0)
            {   Sleep(200);
                    cls1();
                    menua();

            }
        }
    }
}

void cls1()
{
  DWORD n;                         /* Number of characters written */
  DWORD size;                      /* number of visible characters */
  COORD coord = {0};               /* Top left screen position */
  CONSOLE_SCREEN_BUFFER_INFO csbi;

  /* Get a handle to the console */
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );

  GetConsoleScreenBufferInfo ( h, &csbi );

  /* Find the number of characters to overwrite */
  size = csbi.dwSize.X * csbi.dwSize.Y;

  /* Overwrite the screen buffer with whitespace */
  FillConsoleOutputCharacter ( h, TEXT ( ' ' ), size, coord, &n );
  GetConsoleScreenBufferInfo ( h, &csbi );
  FillConsoleOutputAttribute ( h, csbi.wAttributes, size, coord, &n );

  /* Reset the cursor to the top left position */
  SetConsoleCursorPosition ( h, coord );
}
