#include "credits.h"
#include "menu.h"
#include "iostream"
#include "windows.h"

using namespace std;

void menua();

void credits::credit(){


      cout<<"\n                               GALACTIC BATTLES\n\n\n";Sleep(1000);
        cout<<"                                   CREDITS\n\n";Sleep(1000);
        cout<<"                                 DEVELOPED BY  \n";
        cout<<"                                Johnny Studios \n\n";Sleep(1000);
        cout<<"                                 GAME DIRECTOR \n";
        cout<<"                                  Joan Botzev   \n\n";Sleep(1000);
        cout<<"                                STUDIO DIRECTOR  \n";
        cout<<"                                  Joan Botzev  \n\n";Sleep(1000);
        cout<<"                                 ART DIRECTOR  \n";
        cout<<"                                  Joan Botzev  \n\n";Sleep(1000);
        cout<<"                               TECHNICAL DIRECTOR  \n";
        cout<<"                                  Joan Botzev  \n\n";Sleep(1000);
        cout<<"                                   PRODUCER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                               CREATIVE DIRECTOR\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                               EXEUTIVE PRODUCER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                                 GAME DESIGNER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                             LEVEL DESIGN DIRECTOR\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                               ANIMATION DIRECTOR\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                                 AUDIO DIRECTOR\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                                     MUSIC\n";
        cout<<"                                Alexander Bonev\n\n";Sleep(1000);
        cout<<"                                  SOUNDTRACKS\n";
        cout<<"                                   by R.H.C.P\n";
        cout<<"                            Californication-8bit mix\n\n";Sleep(1000);
        cout<<"                                by Running Forest\n";
        cout<<"                                    Pressure\n";
        cout<<"                             Back to the eight bits\n";
        cout<<"                          Game of Thrans Ending Theme\n\n";Sleep(1000);
        cout<<"                                    STORY BY\n";
        cout<<"                                 Boris Georgiev\n\n";Sleep(1000);
        cout<<"                            ASSISTANT LEVEL DESIGNERS \n";
        cout<<"                                 Boris Georgiev\n";
        cout<<"                                 Stefan Mirev\n\n";Sleep(1000);
        cout<<"                                  SCRIPTWRITER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                              TEST STUDIO MANAGER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                            LEAD GRAPHICS PROGRAMMER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                              GAMEPLAY PROGRAMMING\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                             INTERFACE PROGRAMMING\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                              MARKETING ASSISTANT\n";
        cout<<"                                Alexander Bonev\n\n";Sleep(1000);
        cout<<"                              PRODUCTION ASSISTANT\n";
        cout<<"                                 Boris Georgiev\n\n";Sleep(1000);
        cout<<"                                   PR MANAGER\n";
        cout<<"                                 Boris Georgiev\n\n";Sleep(1000);
        cout<<"                                   PRESIDENT\n";
        cout<<"                                  Joan Botzev\n\n"; Sleep(1000);
        cout<<"                                   CREATED BY \n";
        cout<<"                                  Joan Botzev \n\n";Sleep(1000);
        cout<<"                              IN ASSOCIATION WITH\n";
        cout<<"                                    NOBODY\n\n";Sleep(1000);
        cout<<"                             THIS SOFTWARE CONTAINS\n";
        cout<<"                                 ALMOST NOTHING\n\n";Sleep(1000);
        cout<<"                              COPYRIGHT @1998-2015\n";
        cout<<"                              ALL RIGHTS RESERVED.\n\n\n";Sleep(1000);
        cout<<"                            Press ESC to return to MENU . . .";

    while(true)
    {
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            system("cls");
            menua();
            Sleep(500);
        }
    }

}
