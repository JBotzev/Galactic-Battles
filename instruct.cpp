#include "instruct.h"
#include "instr3.h"
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

void instruct::instructa()
{
    cls1();
    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       2/3       \n\n\n";
            cout<<"     hold S to shoot Lazer    hold Shift to Shield    press R to Restore Ship\n";
            cout<<"    =======================  ======================  =========================\n";
            cout<<"                                                                        \n";
            cout<<"                                                                        \n";
            cout<<"    и =====================             и                    HP:           \n";
            cout<<"                                                                        \n";
            cout<<"                                                                        \n";
            cout<<"                                                                        \n";
            cout<<"   press F to shoot Exploding missile        press D to shoot Dual bullets\n";
            cout<<"  ====================================      ===============================\n";
            cout<<"                                                                          \n";
            cout<<"                                                  -    -   -    -  -    -\n";
            cout<<"       и      ~                                 и                          \n";
            cout<<"                                                  -    -   -    -  -    -\n";
            cout<<"                                                                        \n\n";
            cout<<"                       <- previous page / next page ->";
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);cls1();menua();
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {instr3 io;io.instr3a();}
            if(GetAsyncKeyState(VK_LEFT))
            {
                instra ia;
                ia.instr();
            }
            Sleep(500);
            cls();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       2/3       \n\n\n";
            cout<<"     hold S to shoot Lazer    hold Shift to Shield    press R to Restore Ship\n";
            cout<<"    =======================  ======================  =========================\n";
            cout<<"                                        }                                \n";
            cout<<"                                         }                               \n";
            cout<<"    и =====================             и }                  HP: оо     \n";
            cout<<"                                         }                              \n";
            cout<<"                                        }                               \n";
            cout<<"                                                                        \n";
            cout<<"   press F to shoot Exploding missile        press D to shoot Dual bullets\n";
            cout<<"  ====================================      ===============================\n";
            cout<<"                                                                          \n";
            cout<<"                                                  -    -   -    -  -    -\n";
            cout<<"       и             ~                          и                          \n";
            cout<<"                                                  -    -   -    -  -    -\n";
            cout<<"                                                                        \n\n";
            cout<<"                       <- previous page / next page ->";
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);cls1();menua();
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {instr3 io;io.instr3a();}
            if(GetAsyncKeyState(VK_LEFT))
            {
                instra ia;
                ia.instr();
            }
            Sleep(500);
            cls();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       2/3       \n\n\n";
            cout<<"     hold S to shoot Lazer    hold Shift to Shield    press R to Restore Ship\n";
            cout<<"    =======================  ======================  =========================\n";
            cout<<"                                                                        \n";
            cout<<"                                                                        \n";
            cout<<"    и =====================             и                    HP: оооо   \n";
            cout<<"                                                                        \n";
            cout<<"                                                                        \n";
            cout<<"                                                                        \n";
            cout<<"   press F to shoot Exploding missile        press D to shoot Dual bullets\n";
            cout<<"  ====================================      ===============================\n";
            cout<<"                                                                          \n";
            cout<<"                           {  }                   -    -   -    -  -    -\n";
            cout<<"       и                  { {} }                и                          \n";
            cout<<"                           {  }                   -    -   -    -  -    -\n";
            cout<<"                                                                        \n\n";
            cout<<"                       <- previous page / next page ->";
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);cls1();menua();
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {instr3 io;io.instr3a();}
            if(GetAsyncKeyState(VK_LEFT))
            {
                instra ia;
                ia.instr();
            }
            Sleep(500);
            cls();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       2/3       \n\n\n";
            cout<<"     hold S to shoot Lazer    hold Shift to Shield    press R to Restore Ship\n";
            cout<<"    =======================  ======================  =========================\n";
            cout<<"                                        }                                \n";
            cout<<"                                         }                               \n";
            cout<<"    и =====================             и }                  HP: ооооо  \n";
            cout<<"                                         }                              \n";
            cout<<"                                        }                               \n";
            cout<<"                                                                        \n";
            cout<<"   press F to shoot Exploding missile        press D to shoot Dual bullets\n";
            cout<<"  ====================================      ===============================\n";
            cout<<"                          { {} }                                          \n";
            cout<<"                         { {  } }                 -    -   -    -  -    -\n";
            cout<<"       и                { { {} } }              и                          \n";
            cout<<"                         { {  } }                 -    -   -    -  -    -\n";
            cout<<"                          { {} }                                        \n\n";
            cout<<"                       <- previous page / next page ->";
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);cls1();menua();
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {instr3 io;io.instr3a();}
            if(GetAsyncKeyState(VK_LEFT))
            {
                instra ia;
                ia.instr();
            }
            Sleep(500);
            cls();
    }
}

