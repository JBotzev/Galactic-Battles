#include "levels.h"
#include "menu.h"
#include "ship.h"
#include "string.h"
#include <iostream>
#include "windows.h"
#include "fstream"
#include "challenge.h"

using namespace std;

void cls();
void cls1();
void menua();
void shipba();
void levelsa()
{

    string menu[14]={"  CHALLENGE MODE  ","  MULTIPLAYER  \n\n\n","  LEVEL 1  ","  LEVEL 2  ","  LEVEL 3  ","  BOSS FIGHT  \n\n","  LEVEL 4  ","  LEVEL 5  ","  LEVEL 6  ","  BOSS FIGHT  \n\n","  LEVEL 7  ","  LEVEL 8  ","  LEVEL 9  ","  BOSS FIGHT  "};
    int select=2;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n\n\n";
            cout<<"                =================================================\n\n";

        for(int i=0; i<14; i++)
        {
            if((i==select||i!=select)&&i==0)
            {
            cout<<"                        ";
            }
            if((i==select||i!=select)&&i==2)
            {
            cout<<"                 ";
            }
            if((i==select||i!=select)&&i==6)
            {
            cout<<"                 ";
            }

            if((i==select||i!=select)&&i==10)
            {
            cout<<"                 ";
            }

            if(i==select)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),233);
                cout<<menu[i];
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
                cout<<menu[i];
            }
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<"\n\n                =================================================\n\n\n";
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
                if(select==14)
                {
                    select=2;
                }
                break;
            }
            if(GetAsyncKeyState(VK_LEFT)!=0)
            {Sleep(200);
                select-=1;

                if(select==1)
                {
                    select=13;
                }
                if(select==-1)
                {
                    select=1;
                }
                break;
            }
            if(GetAsyncKeyState(VK_UP)!=0)
            {
                Sleep(200);
                select-=4;
                if(select==1)
                {
                    select=1;
                }
                if(select==0)
                {
                    select=1;
                }
                if(select==-4)
                {
                    select=0;
                }
                if(select==-3)
                {
                    select=1;
                }
                if(select==-2)
                {
                    select=0;
                }
                if(select==-1)
                {
                    select=0;
                }
                break;
            }
            if(GetAsyncKeyState(VK_DOWN)!=0)
            {
                Sleep(200);
                select+=4;
                if(select==4)
                {
                    select=3;

                }
                if(select==5)
                {
                    select=4;
                }
                if(select==14)
                {
                    select=2;
                }
                if(select==15)
                {
                    select=3;
                }
                if(select==16)
                {
                    select=4;
                }
                if(select==17)
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
                        ship so;
                        so.shipch();  //CHALLENGE
                        break;
                    }
                    case 1:
                    {
                        cls1();
                        ship so;
                        so.shipmp(); //MULTIPLAYER
                    }
                    case 2:
                    {
                        cls1();
                        ship so;
                        so.ship1();  //MAP 1
                        break;
                    }
                    case 3:
                    {
                        ifstream file1;
                        file1.open("map1.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.ship2();   //MAP 2
                            }
                        }
                        break;
                    }
                    case 4:
                    {
                        ifstream file1;
                        file1.open("map2.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.ship3();  // MAP 3
                            }
                        }
                        break;
                    }
                    case 5:
                    {
                        ifstream file1;
                        file1.open("map3.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.shipba();  //BOSS 1
                            }
                        }
                        break;
                    }
                    case 6:
                    {
                        ifstream file1;
                        file1.open("map4.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.ship4(); //MAP 4
                            }
                        }
                        break;
                    }
                    case 7:
                    {
                        ifstream file1;
                        file1.open("map5.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.ship1(); // MAP 5
                            }
                        }
                        break;
                    }
                    case 8:
                    {
                        ifstream file1;
                        file1.open("map6.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.ship1();  //MAP 6
                            }
                        }
                        break;
                    }
                    case 9:
                    {
                        ifstream file1;
                        file1.open("map7.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.shipbb(); //BOSS 2
                            }
                        }
                        break;
                    }
                    case 10:
                    {
                        ifstream file1;
                        file1.open("map8.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.ship1(); //MAP 7
                            }
                        }
                        break;
                    }
                    case 11:
                    {
                        ifstream file1;
                        file1.open("map9.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.ship1();  //MAP 8
                            }
                        }
                        break;
                    }
                    case 12:
                    {
                        ifstream file1;
                        file1.open("map10.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.ship1(); //MAP 9
                            }
                        }
                        break;
                    }
                    case 13:
                    {
                        ifstream file1;
                        file1.open("map11.txt");
                        if(!file1.is_open())
                        {   cls();
                            cout<<"\n\n\n\n                                  LEVEL LOCKED\n                           ";
                            system("pause");cls1();
                            levelsa();
                        }
                        else
                        {
                            string line;
                            while(file1.good())
                            {
                                cls1();
                                ship so;
                                so.shipbc();  //BOSS 3
                            }
                        }
                        break;
                    }
                }
            }
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);
                cls1();
                menua();
            }
        }
    }
}
