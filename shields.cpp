#include "shields.h"
#include "shop.h"
#include <iostream>
#include "windows.h"
#include "fstream"
#include "weapons.h"

using namespace std;

void cls1();
void cls();

void shields::shielda()
{
    weapons wo;
    wo.i;

    cls();

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout<<"\n\n\n\n\n\n                               WEAPONS";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout<<"    SHIELDS        Collected: ";

    ifstream filea;
    filea.open("MCF");
    if(!filea.is_open())
    {
        wo.i=0;
        cout<<"0 C";
    }
    else
    {
        string line;
        while(filea.good())
        {
            getline(filea,line);
            wo.i=atoi(line.c_str());
            cout<<wo.i<<" C  ";
        }
    }

            cout<<"\n                                          ===============================";

                    //SH 1
                            ifstream file1;
                            file1.open("PUI");
                            if(!file1.is_open())
                            {
                                cout<<"\n\n                                                             - 500 C";
                            }
                            else if(file1.good())
                            {
                                cout<<"\n\n                                                             - Bought";
                            }
                    //SH 2
                            ifstream file2;
                            file2.open("SWII");
                            if(!file2.is_open())
                            {
                                cout<<"\n\n\n                                                         - 200 C";
                            }
                            else if(file2.good())
                            {
                                cout<<"\n\n\n                                                         - Bought";
                            }

                    //SH 3
                            ifstream file3;
                            file3.open("SSIII");
                            if(!file3.is_open())
                            {
                                cout<<"\n\n\n                                                             - 150 C";
                            }
                            else if(file3.good())
                            {
                                cout<<"\n\n\n                                                             - Bought";
                            }


    string classa[3]={"\n\n\n\n\n\n\n\n\n                                                ULTRA SHIELD\n\n\n","                                                   WALLS\n\n\n","                                                RESTORE SHIP"};
    int select=0;

    while(true)
    {
        cls();
        for(int i=0; i<3; i++)
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
        cout<<"\n\n\n\n                               ==================\n";
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
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);
                cls1();
                shop so;
                so.shopa();

            }
            if(GetAsyncKeyState(VK_RETURN)!=0)
            {
                Sleep(200);
                switch(select)
                {
                    case 0:
                        {
                            if(wo.i>=500)
                            {
                                wo.i=wo.i-500;
                                Sleep(200);
                                ofstream file1;
                                file1.open("PUI");
                                ofstream fileC;
                                fileC.open("MCF");
                                fileC<<wo.i;
                                fileC.close();
                                shielda();
                            }
                            else
                            {
                                cls();
                                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                               Not enough Coins !";
                            }
                        }
                        break;
                    case 1:
                        {
                            if(wo.i>=200)
                            {
                                wo.i=wo.i-200;
                                Sleep(200);
                                ofstream file2;
                                file2.open("SWII");
                                ofstream fileC;
                                fileC.open("MCF");
                                fileC<<wo.i;
                                fileC.close();
                                shielda();
                            }
                            else
                            {
                                cls();
                                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                               Not enough Coins !";
                            }
                        }
                        break;
                    case 2:
                        {
                            if(wo.i>=150)
                            {
                                wo.i=wo.i-150;
                                Sleep(200);
                                ofstream file3;
                                file3.open("SSIII");
                                ofstream fileC;
                                fileC.open("MCF");
                                fileC<<wo.i;
                                fileC.close();
                                shielda();
                            }
                            else
                            {
                                cls();
                                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                               Not enough Coins !";
                            }
                        }
                        break;
                }
            }
        }
    }
}
