#include "instra.h"
#include "instruct.h"
#include "menu.h"
#include "ship.h"
#include "string.h"
#include <iostream>
#include<windows.h>
#include<string>
#include<cstdlib>
#include<conio.h>
#include<mmsystem.h>
#include<cmath>
#include<ctime>
#include "menu.h"

using namespace std;
void cls();
void cls1();
void menua();

void instra::instr()
{
    cls1();
    while(true)
    {
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       1/3       \n\n\n";
            cout<<"        press Space to Shoot                        press Arrows to Move\n";
            cout<<"      ========================                    ========================\n\n";
            cout<<"     и  -   - -  -  -  - -   -  -                     и                   \n\n\n";
            cout<<"        press A to use WALLS                              INTERFACE\n";
            cout<<"      ========================                    ========================\n";
            cout<<"                     \n";
            cout<<"                  и                                 HP - health points, 5\n";
            cout<<"                                                    KILLS - dead enemies\n";
            cout<<"                                                    WALLS - 3\n";
            cout<<"      - stops bullets                               HEAT -       max-5\n";
            cout<<"      - breaks if enemies go through                - on MAX you cant shoot\n";
            cout<<"                                                    - press Backspace to Menu\n\n";
            cout<<"                          ESC to return / next page ->";
            if(GetAsyncKeyState(VK_RIGHT))
            {instruct io;io.instructa();}
            if(GetAsyncKeyState(VK_LEFT))
            {Sleep(200);
                instra ia;
                ia.instr();
            }

            if(GetAsyncKeyState(VK_ESCAPE))
            {Sleep(200);cls1();menua();}

            Sleep(500);
            cls();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       1/3       \n\n\n";
            cout<<"        press Space to Shoot                        press Arrows to Move\n";
            cout<<"      ========================                    ========================\n\n";
            cout<<"     и  -   - -  -  -  - -   -  -                          и\n\n\n";
            cout<<"        press A to use WALLS                              INTERFACE\n";
            cout<<"      ========================                    ========================\n";
            cout<<"                    )\n";
            cout<<"                  и )                               HP - health points, 5\n";
            cout<<"                    )                               KILLS - dead enemies\n";
            cout<<"                                                    WALLS - 3\n";
            cout<<"      - stops bullets                               HEAT - оо    max-5\n";
            cout<<"      - breaks if enemies go through                - on MAX you cant shoot\n";
            cout<<"                                                    - press Backspace to Menu\n\n";
            cout<<"                          ESC to return / next page ->";
            if(GetAsyncKeyState(VK_RIGHT))
            {instruct io;io.instructa();}
            if(GetAsyncKeyState(VK_LEFT))
            {Sleep(200);
                instra ia;
                ia.instr();
            }

            if(GetAsyncKeyState(VK_ESCAPE))
            {Sleep(200);cls1();menua();}

            Sleep(500);
            cls();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       1/3       \n\n\n";
            cout<<"        press Space to Shoot                        press Arrows to Move\n";
            cout<<"      ========================                    ========================\n\n";
            cout<<"     и  -   - -  -  -  - -   -  -                               и\n\n\n";
            cout<<"        press A to use WALLS                              INTERFACE\n";
            cout<<"      ========================                    ========================\n";
            cout<<"                     \n";
            cout<<"                  и                                 HP - health points, 5\n";
            cout<<"                                                    KILLS - dead enemies\n";
            cout<<"                                                    WALLS - 3\n";
            cout<<"      - stops bullets                               HEAT - оооо  max-5\n";
            cout<<"      - breaks if enemies go through                - on MAX you cant shoot\n";
            cout<<"                                                    - press Backspace to Menu\n\n";
            cout<<"                          ESC to return / next page ->";
            if(GetAsyncKeyState(VK_RIGHT))
            {instruct io;io.instructa();}
            if(GetAsyncKeyState(VK_LEFT))
            {Sleep(200);
                instra ia;
                ia.instr();
            }

            if(GetAsyncKeyState(VK_ESCAPE))
            {Sleep(200);cls1();menua();}

            Sleep(500);
            cls();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       1/3       \n\n\n";
            cout<<"        press Space to Shoot                        press Arrows to Move\n";
            cout<<"      ========================                    ========================\n\n";
            cout<<"     и  -   - -  -  -  - -   -  -                                    и    \n\n\n";
            cout<<"        press A to use WALLS                              INTERFACE\n";
            cout<<"      ========================                    ========================\n";
            cout<<"                    )\n";
            cout<<"                  и )                               HP - health points, 5\n";
            cout<<"                    )                               KILLS - dead enemies\n";
            cout<<"                                                    WALLS - 3\n";
            cout<<"      - stops bullets                               HEAT - ооооо max-5\n";
            cout<<"      - breaks if enemies go through                - on MAX you cant shoot\n";
            cout<<"                                                    - press Backspace to Menu\n\n";
            cout<<"                          ESC to return / next page ->";
            if(GetAsyncKeyState(VK_RIGHT))
            {instruct io;io.instructa();}
            if(GetAsyncKeyState(VK_LEFT))
            {Sleep(200);
                instra ia;
                ia.instr();
            }

            if(GetAsyncKeyState(VK_ESCAPE))
            {Sleep(200);cls1();menua();}

            Sleep(500);
            cls();
    }
}
