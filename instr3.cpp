#include "instr3.h"
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
#include "instra.h"

using namespace std;
void cls();
void cls1();
void menua();

void instr3::instr3a()
{
    cls1();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
    cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
      cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
      cout<<"                                       3/3      \n\n\n";
      cout<<"           PLAYER 1           MULTIPLAYER CONTROLS           PLAYER 2\n";
      cout<<"        ==============     ==========================     ==============\n\n";
      cout<<"        Movement - W,A,S,D                                Movement - Arrows\n";
      cout<<"           Shoot - Space                                     Shoot - RCtrl\n";
      cout<<"    Dual bullets - H                                  Dual bullets - '|' key\n";
      cout<<"  Expl. missiles - J                                Expl. missiles - '}' key\n";
      cout<<"         Shields - G                                         Walls - '{' key\n\n";
      cout<<"                                 CHALLENGE MODE\n";
      cout<<"                              ====================         \n\n";
      cout<<"   Hints:    Endless enemies !\n";
      cout<<"   1 min - x2 Gold Multiplier!   2 min - x4 Multiplier!   3 min - x6 Multiplier     \n\n";
      cout<<"                       <- previous page / ESC to return";

while(true)
{
    if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);cls1();menua();
            }
            if(GetAsyncKeyState(VK_LEFT))
            {   Sleep(200);
                instruct ia;
                ia.instructa();
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {Sleep(200);instr3 io;io.instr3a();}
}
}
