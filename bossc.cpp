#include "bossc.h"
#include <iostream>
#include "ctime"
#include "string.h"
#include "windows.h"
#include "fstream"
#include "map.h"
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
void colorsbc();
void bosslvlc();

char playerbc;
int pbc;
int cbc;

void deadbc()
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
                        ship so;
                        so.shipbc();
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
void ship::shipbc()
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
            cout<<"\n\n\n                          Ц                                            \n\n\n\n";
        }
        if(select==1)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"\n\n\n                                        и                             \n\n\n\n";
        }

        if(select==2)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"\n\n\n                                                      Ю                \n\n\n\n";
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
                    pbc=0;
                }
                if(select==1)
                {
                    pbc=1;
                }
                if(select==2)
                {
                    pbc=2;
                }
                colorsbc();
            }
        }
    }
}
void colorsbc()
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
                cout<<menu[i];cbc=0;
                }
                if(i==1)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                cout<<menu[i];cbc=1;
                }
                if(i==2)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<menu[i];cbc=2;
                }
                if(i==3)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
                cout<<menu[i];cbc=3;
                }
                if(i==4)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<menu[i];cbc=4;
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
                bosslvlc();
                break;
            }
            else if(GetAsyncKeyState(VK_ESCAPE))
            {   Sleep(200);
                cls1();
                ship so;
                so.shipbc();
                break;
            }
        }
    }
}
void bosslvlc()
{
    if(cbc==0)
    {
        system("color 09");
    }
    if(cbc==1)
    {
        system("color 0a");
    }
    if(cbc==2)
    {
        system("color 0c");
    }
    if(cbc==3)
    {
        system("color 0b");
    }
    if(cbc==4)
    {
        system("color 0e");
    }                           // 09  blue   0c red

    if(pbc==0)
    {
        playerbc='Ц';
    }
    if(pbc==1)
    {
        playerbc='и';
    }
    if(pbc==2)
    {
        playerbc='Ю';
    }

    int randcoinsy,randcoinsx;
    int randcoinsxmax=34;
    int chancem=3;
    int randNum;
    int randNuma;
    int randNumMax=3;
    int randNumMaxa=2;

    //CHARACTERS

    char bullet=' ',bulleta=' ',bulletb=' ',bulletc=' ',bulletd=' ';
    char bullete=' ',bulletf=' ',bulletg=' ',bulleth=' ',bulleti=' ';
    char star=' ';
    char exbull=' ';

    char bulletj=' ',bulletk=' ',bulletl=' ',bulletm=' ',bulletn=' ';
    char bulleto=' ',bulletp=' ',bulletq=' ',bulletr=' ',bullets=' ';
    char bullett=' ',bullety=' ',bulletv=' ',bulletx=' ',bulletz=' ';

//POSITIONS

    int ppx=10, ppy=8;
    int bby=0, bbx=0, ay=0, ax=0, by=0, bx=0, cy=0, cx=0, dy=0, dx=0;
    int ey=0, ex=0, fy=0, fx=0, gy=0, gx=0, hy=0, hx=0, iy=0, ix=0,ccy=0,ccx=0;

    int jy=0, jx=0, ky=0, kx=0, ly=0, lx=0, my=0, mx=0, ny=0, nx=0;
    int oy=0, ox=0, py=0, px=0, qy=0, qx=0, ry=0, rx=0, sy=0, sx=0;
    int ty=0, tx=0, yy=0, yx=0, vy=0, vx=0, xy=0, xx=0, zy=0, zx=0;
    int exy=0,exx=0;

//OTHERS

char u=' ',ua=' ',ub=' ',uc=' ',ud=' ',ue=' ',uf=' ',ug=' ',uh=' ',s=' ',s1=' ',s2=' ';
int ucount=0;
int uy=0;int ux=0;
int uay=0;int uax=0;
int uby=0;int ubx=0;
int ucy=0;int ucx=0;
int udy=0;int udx=0;
int uey=0;int uex=0;
int ufy=0;int ufx=0;
int ugy=0;int ugx=0;
int uhy=0;int uhx=0;

    int i=0;int ia=0;int m=0;int pi=0;int id=0;int rs=1;
    int milliseconds=1;
    int seconds=0;
    int g=0;
    int points=0;
    int health=5;
    int shield=3, say=0,sax=0, sby=0, sbx=0, scy=0, scx=0, sdy=0, sdx=0, sey=0, sex=0;
    int ka=10000;
    int ushield=500;
    int bossh=200;
    int explbull=5;
    int coins=0;
    string bossi;
    string healtha;
    string heata;
    weapons wo;
    wo.i;

//BOSS
char ship='<';
int asy=10,a1x=70;
int bsy=11,b1x=69;
int csy=12,c1x=68;
int dsy=13,d1x=67;
int esy=14,e1x=68;
int fsy=15,f1x=69;
int gsy=16,g1x=70;

//EXPL
int ebbx=77,ebby=0;
int ebb=' ';

    const char height=22, wight=78;
    unsigned char space[height][wight]=
    {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "", //74
        "",
};

    srand(time (NULL));
while(true)
{
    if(GetAsyncKeyState(VK_ESCAPE))
    {
       PlaySound(TEXT("Star Wars-Jedi Temple March.wav"),NULL,SND_ASYNC|SND_LOOP);Sleep(200);
       cout<<"\n\n\n\n\n\n\n\n\n\n\n                          ";system("pause");cls1();
    }
    if(GetAsyncKeyState(VK_BACK))
    {
        cls1();
        PlaySound(TEXT("Star Wars-Jedi Temple March.wav"),NULL,SND_ASYNC|SND_LOOP);
        menua();
    }
    //INTERFACE

    if(health==5)
    {
        healtha="ооооо";
    }
    if(health==4)
    {
        healtha="оооо ";
    }
    if(health==3)
    {
        healtha="ооо  ";
    }
    if(health==2)
    {
        healtha="оо   ";
    }
    if(health==1)
    {
        healtha="о    ";
    }
    if(health==0)
    {
        healtha="     ";
    }

    cout<<" HP:"<<healtha<<"| WALLS: "<<shield<<" | HEAT:"<<heata<<"| LAZER: "<<ka<<" | SHIELD: "<<ushield<<" |";
    cout<<"\n-------------------------------------------------------------------------------";
    cout<<"\n                                BOSS:"<<bossi;
    if(bossh>=180 && bossh<=200){
        bossi="оооооооооо|";
    }
    if(bossh>=160 && bossh<=179){
        bossi="ооооооооо |";
    }
    if(bossh>=140 && bossh<=159){
        bossi="оооооооо  |";
    }
    if(bossh>=120 && bossh<=139){
        bossi="ооооооо   |";
    }
    if(bossh>=100 && bossh<=119){
        bossi="оооооо    |";
    }
    if(bossh>=80 && bossh<=99){
        bossi="ооооо     |";
    }
    if(bossh>=60 && bossh<=79){
        bossi="оооо      |";
    }
    if(bossh>=40 && bossh<=59){
        bossi="ооо       |";
    }
    if(bossh>=20 && bossh<=39){
        bossi="оо        |";
    }
    if(bossh>0 && bossh<=19){
        bossi="о         |";
    }

    // COMPLETE LEVEL

    if(bossh<=0){
        bossi="          |";

        PlaySound(TEXT("bossexpl1.wav"),NULL,SND_ASYNC);
        ia=7;cls();
        if(dsy==1){cout<<"\n\n\n\n\n";}
        if(dsy==2){cout<<"\n\n\n\n\n\n";}
        if(dsy==3){cout<<"\n\n\n\n\n\n\n";}
        if(dsy==4){cout<<"\n\n\n\n\n\n\n\n";}
        if(dsy==5){cout<<"\n\n\n\n\n\n\n\n\n";}
        if(dsy==6){cout<<"\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==7){cout<<"\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==8){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==9){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==10){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==11){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==12){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==13){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==14){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==15){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==16){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==17){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}

cout<<"                                                                   {  }\n";
cout<<"                                                                  { {} }\n";
cout<<"                                                                   {  }";
Sleep(300);cls();
        if(dsy==1){cout<<"\n\n\n\n";}
        if(dsy==2){cout<<"\n\n\n\n\n";}
        if(dsy==3){cout<<"\n\n\n\n\n\n";}
        if(dsy==4){cout<<"\n\n\n\n\n\n\n";}
        if(dsy==5){cout<<"\n\n\n\n\n\n\n\n";}
        if(dsy==6){cout<<"\n\n\n\n\n\n\n\n\n";}
        if(dsy==7){cout<<"\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==8){cout<<"\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==9){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==10){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==11){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==12){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==13){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==14){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==15){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==16){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==17){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
cout<<"                                                                  { {} }  \n";
cout<<"                                                                 { {  } }\n";
cout<<"                                                                { { {} } }\n";
cout<<"                                                                 { {  } }\n";
cout<<"                                                                  { {} }  \n";
Sleep(300);cls();
        if(dsy==1){cout<<"\n\n\n";}
        if(dsy==2){cout<<"\n\n\n\n";}
        if(dsy==3){cout<<"\n\n\n\n\n";}
        if(dsy==4){cout<<"\n\n\n\n\n\n";}
        if(dsy==5){cout<<"\n\n\n\n\n\n\n";}
        if(dsy==6){cout<<"\n\n\n\n\n\n\n\n";}
        if(dsy==7){cout<<"\n\n\n\n\n\n\n\n\n";}
        if(dsy==8){cout<<"\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==9){cout<<"\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==10){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==11){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==12){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==13){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==14){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==15){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==16){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==17){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
cout<<"                                                                 { {  } }  \n";
cout<<"                                                                {   {}   }  \n";
cout<<"                                                               { { {  } } }\n";
cout<<"                                                              { {   {}   } }\n";
cout<<"                                                               { { {  } } }\n";
cout<<"                                                                {   {}   } \n";
cout<<"                                                                 { {  } }  \n";
        Sleep(300);cls();
        if(dsy==1){cout<<"\n\n\n";}
        if(dsy==2){cout<<"\n\n\n";}
        if(dsy==3){cout<<"\n\n\n";}
        if(dsy==4){cout<<"\n\n\n\n";}
        if(dsy==5){cout<<"\n\n\n\n\n";}
        if(dsy==6){cout<<"\n\n\n\n\n\n";}
        if(dsy==7){cout<<"\n\n\n\n\n\n\n";}
        if(dsy==8){cout<<"\n\n\n\n\n\n\n\n";}
        if(dsy==9){cout<<"\n\n\n\n\n\n\n\n\n";}
        if(dsy==10){cout<<"\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==11){cout<<"\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==12){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==13){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==14){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==15){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==16){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        if(dsy==17){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";}
cout<<"                                                                {  {  }  }  \n";
cout<<"                                                               { {  {}  } } \n";
cout<<"                                                              {  { {  } }  }\n";
cout<<"                                                             { {  { {} }  } } \n";
cout<<"                                                            {   { {    } }   }\n";
cout<<"                                                            {   {   {}   }   }\n";
cout<<"                                                            {  { { {  } } }  }\n";
cout<<"                                                             {  {   {}   }  }\n";
cout<<"                                                              {  { {  } }  }\n";
cout<<"                                                               { {  {}  } }\n";
cout<<"                                                                {  {  }  }  \n";
Sleep(300);cls();cout<<"\n\n\n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";
cout<<"                                                                               \n";


        ifstream filea;
        filea.open("MCF");
        string line;
        if(filea.good())
        {
            getline(filea,line);
            wo.i=atoi(line.c_str());
            wo.i=wo.i+100;
        }
        ofstream file1;
        file1.open("MCF");
        file1<<wo.i;
        file1.close();
        coins=coins+100;
        ofstream filemap;
        filemap.open("map8.txt");
        filemap.close();
        Sleep(1000);
        PlaySound(TEXT("jingle-lose-00.wav"),NULL,SND_ASYNC);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        cls();
        cout<<"\n\n\n\n\n\n\n\n\n                        YOU HAVE COMPLETED THE LEVEL  !!!\n";
                        cout<<"                       ==================================\n\n";
                        cout<<"                              COINS gained: "<<coins<<" C\n\n\n                         ";
        Sleep(4500);system("pause");cls1();
        PlaySound(TEXT("Star Wars-Jedi Temple March.wav"),NULL,SND_ASYNC|SND_LOOP);
        levelsa();
    }


    if(g>=50){
    heata="ооооо";
    }
    if(g>=40&&g<50){
    heata="оооо ";
    }
    if(g>=30&&g<40){
    heata="ооо  ";
    }
    if(g>=20&&g<30){
    heata="оо   ";
    }
    if(g>=10&&g<20){
    heata="о    ";
    }
    if(g>=0&&g<10){
    heata="     ";
    }

    space[ppy][ppx]=playerbc;
    space[ccy][ccx]=star;
    space[exy][exx]=exbull;
    space[ebby][ebbx]=ebb;
    space[bby][bbx]=bullet;
    space[ay][ax]=bulleta;
    space[by][bx]=bulletb;
    space[cy][cx]=bulletc;
    space[dy][dx]=bulletd;
    space[ey][ex]=bullete;
    space[fy][fx]=bulletf;
    space[gy][gx]=bulletg;
    space[hy][hx]=bulleth;
    space[iy][ix]=bulleti;

    space[jy][jx]=bulletj;
    space[ky][kx]=bulletk;
    space[ly][lx]=bulletl;
    space[my][mx]=bulletm;
    space[ny][nx]=bulletn;
    space[oy][ox]=bulleto;
    space[py][px]=bulletp;
    space[qy][qx]=bulletq;
    space[ry][rx]=bulletr;
    space[sy][sx]=bullets;
    space[ty][tx]=bullett;
    space[yy][yx]=bullety;
    space[vy][vx]=bulletv;
    space[xy][xx]=bulletx;
    space[zy][zx]=bulletz;

    space[uy][ux]=u;
    space[uay][uax]=ua;
    space[uby][ubx]=ub;
    space[ucy][ucx]=uc;
    space[udy][udx]=ud;
    space[uey][uex]=ue;
    space[ufy][ufx]=uf;
    space[ugy][ugx]=ug;
    space[uhy][uhx]=uh;

    space[say][sax]=s;
    space[sby][sbx]=s;
    space[scy][scx]=s;
    space[sdy][sdx]=s1;
    space[sey][sex]=s2;

//FIX
    space[asy][a1x]=ship;
    space[bsy][b1x]=ship;
    space[csy][c1x]=ship;
    space[dsy][d1x]=ship;
    space[esy][e1x]=ship;
    space[fsy][f1x]=ship;
    space[gsy][g1x]=ship;



    for(int y=0; y<height; y++)
    {cout<<endl;
    for(int x=0; x<wight; x++)
        {
            cout<<space[y][x];
        }
    }

//MOVEMENT
        if(GetAsyncKeyState(VK_UP))
        {
            if((ppy!=1 && u==' ')||(ppy!=1 && u==')' && space[ppy-1][ppx]!=u))
            {space[ppy][ppx]=' ';
             ppy--;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            if((ppy+2<height && u==' ')||(ppy+2<height && space[ppy+1][ppx]!=u && u==')'))
            {space[ppy][ppx]=' ';
             ppy++;
            }
        }
        if(GetAsyncKeyState(VK_LEFT))
        {
            if((ppx-1>2 && u==' ')||(ppx-1>2 && space[ppy][ppx-2]!=u && u==')'))
            {space[ppy][ppx]=' ';
             ppx--;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            if((ppx+1<35 && u==' ')||(ppx+1<35 && space[ppy][ppx+2]!=u && u==')'))
            {space[ppy][ppx]=' ';
             ppx++;
            }
        }

//DEAD

        if(health<=0)
        {
            PlaySound(TEXT("270467__littlerobotsoundfactory__jingle-lose-00.wav"),NULL,SND_ASYNC);
            deadbc();
        }
                                 //SHOOTING && POWERS

//TIMER
        if(milliseconds<12){
            ++milliseconds;
        }
        if(milliseconds==12)
        {
            milliseconds=0;
            seconds++;
        }
        if(seconds==10)
        {
            seconds=0;
        }

        //COINS

        if(seconds==9 && milliseconds==1)
        {
            int chance=rand()%chancem+1;
            if(chance==1)
            {
                randcoinsy=rand()%height-1;
                randcoinsx=rand()%randcoinsxmax-1;
                if(randcoinsy>1 && randcoinsx>4)
                {
                    space[ccy][ccx]=' ';
                    ccx=randcoinsx;
                    ccy=randcoinsy;
                    star='*';
                }
            }
        }
        if(seconds==4&&milliseconds==1&&star=='*')
        {
            space[ccy][ccx]=' ';star=' ';ccy=0,ccx=0;
        }
        if(ppy==ccy && ppx==ccx)
        {
            star=' ';
            ccy=0,ccx=0;
            ifstream filea;
            filea.open("MCF");
            string line;
            while(filea.good())
            {
                getline(filea,line);
                wo.i=atoi(line.c_str());
                wo.i=wo.i+10;
            }
            ofstream file1;
            file1.open("MCF");
            file1<<wo.i;
            file1.close();
            coins=coins+10;
        }

//ULTRA SHIELD

    ifstream filea;
    filea.open("PUI");

        if(ushield>0)
        {
            if(GetAsyncKeyState(VK_SHIFT)&&filea.good())
            {
                s='}';
                if(sdy+1<height)
                {s1='}';sdy=ppy+1, sdx=ppx+1;}
                if(sdy+1>=height)
                {s1=' ';sdy=0, sdx=0;}
                if(sey+1<height)
                {s2='}';sey=ppy+2, sex=ppx;}
                if(sey+1>=height)
                {s2=' ';sey=0, sex=0;}
                say=ppy-2,sax=ppx, sby=ppy-1, sbx=ppx+1, scy=ppy, scx=ppx+2;
                m=1;
                ushield--;
                if(GetAsyncKeyState(VK_LEFT))
                {
                    space[say][sax+1]=' ';space[sby][sbx+1]=' ';space[scy][scx+1]=' ';
                    space[say-1][sax+1]=' ';space[sby-1][sbx+1]=' ';space[scy-1][scx+1]=' ';
                    space[say+1][sax+1]=' ';space[sby+1][sbx+1]=' ';space[scy+1][scx+1]=' ';
                    if(s1=='}')
                    {space[sdy][sdx+1]=' ';space[sdy-1][sdx+1]=' ';space[sdy+1][sdx+1]=' ';}
                    if(s2=='}')
                    {space[sey][sex+1]=' ';space[sey-1][sex+1]=' ';space[sey+1][sex+1]=' ';}
                }
                if(GetAsyncKeyState(VK_RIGHT))
                {
                    space[say][sax-1]=' ';space[sby][sbx-1]=' ';space[scy][scx-1]=' ';
                    space[say-1][sax-1]=' ';space[sby-1][sbx-1]=' ';space[scy-1][scx-1]=' ';
                    space[say+1][sax-1]=' ';space[sby+1][sbx-1]=' ';space[scy+1][scx-1]=' ';

                    if(s1=='}')
                    {space[sdy][sdx-1]=' ';space[sdy-1][sdx-1]=' ';space[sdy+1][sdx-1]=' ';}
                    if(s2=='}')
                    {space[sey][sex-1]=' ';space[sey-1][sex-1]=' ';space[sey+1][sex-1]=' ';}
                }
                if(GetAsyncKeyState(VK_UP))
                {
                    space[say+1][sax]=' ';
                    space[sby+1][sbx]=' ';
                    space[scy+1][scx]=' ';
                    if(s1=='}')
                    {space[sdy+1][sdx]=' ';}
                    if(s2=='}')
                    {space[sey+1][sex]=' ';}
                }
                if(GetAsyncKeyState(VK_DOWN))
                {
                    space[say-1][sax]=' ';
                    space[sby-1][sbx]=' ';
                    space[scy-1][scx]=' ';
                    if(ppy+3<=height)
                    {space[ppy+1][ppx]=' ';space[ppy+1][ppx-1]=' ';}
                    if(ppy+2<=height)
                    {space[ppy][ppx+1]=' ';}
                }
            }
            else
            {
                m=0;s=' ';s1=' ';s2=' ';
                space[say][sax]=' ';
                space[sby][sbx]=' ';
                space[scy][scx]=' ';
                space[sdy][sdx]=' ';
                space[sey][sex]=' ';
                say=0,sax=0, sby=0, sbx=0, scy=0, scx=0, sdy=0, sdx=0, sey=0, sex=0;

            }
        }
        else if(ushield<=0&&ucount==0)
        {   ucount=1;
            s=' ';s1=' ';s2=' ';
            space[say][sax]=' ';
            space[sby][sbx]=' ';
            space[scy][scx]=' ';
            space[sdy][sdx]=' ';
            space[sey][sex]=' ';
            m=0;say=0,sax=0, sby=0, sbx=0, scy=0, scx=0, sdy=0, sdx=0, sey=0, sex=0;
        }


//SHIELD

    ifstream fileb;
    fileb.open("SWII");

        if((milliseconds==0 || milliseconds==5)&&shield>0&&fileb.good())
        {
            if(GetAsyncKeyState(0x41)) //A
            {
                if(shield==3)
                {
                    uy=ppy-1,ux=ppx+2,uay=ppy,uax=ppx+2,uby=ppy+1,ubx=ppx+2;
                    u=')',ua=')',ub=')';
                }
                if(shield==2)
                {
                    ucy=ppy-1,ucx=ppx+2,udy=ppy,udx=ppx+2,uey=ppy+1,uex=ppx+2;
                    uc=')',ud=')',ue=')';
                }
                if(shield==1)
                {
                    ufy=ppy-1,ufx=ppx+2,ugy=ppy,ugx=ppx+2,uhy=ppy+1,uhx=ppx+2;
                    uf=')',ug=')',uh=')';
                }
                shield--;
            }
        }

//RESTORE SHIP

    ifstream filee;
    filee.open("SSIII");

    if(rs==1&&health!=5&&(milliseconds==2||milliseconds==7))
    {
        if(GetAsyncKeyState(0x52)&&filee.good()) //R
        {
            health=5;
            rs=0;
        }
    }

//LAZER

    ifstream filec;
    filec.open("WPI");

    if(ka>0)
    {
        if(GetAsyncKeyState(0x53)&&filec.good()) //S
        {PlaySound(TEXT("12506__koops__newlazerloop.wav"),NULL,SND_ASYNC);
            if(GetAsyncKeyState(VK_UP))
            {
                for(int k=1; k<42;k++)
                {
                    if(space[ppy+1][ppx+k]!='}')
                    {
                        space[ppy+1][ppx+k]=' ';
                    }
                }
            }
            if(GetAsyncKeyState(VK_DOWN))
            {
                for(int k=1; k<42;k++)
                {
                    if(space[ppy-1][ppx+k]!='}')
                    {
                        space[ppy-1][ppx+k]=' ';
                    }
                }
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {
                for(int k=1; k<42;k++)
                {
                    if(space[ppy][ppx+k]!='}')
                    {
                        space[ppy][ppx+k]=' ';
                    }
                }
            }
            if(GetAsyncKeyState(VK_LEFT))
            {
                for(int k=2; k<42;k++)
                {
                    if(space[ppy][ppx+k]!='}')
                    {
                        space[ppy][ppx+k]=' ';
                    }
                }
            }
            for(int k=2; k<41;k++)
            {
                if(space[ppy][ppx+k]!='}'||space[ppy][ppx+k]!='|')
                {
                    space[ppy][ppx+k]='=';
                    ka--;
                }
            }
        }
        else for(int ka=1; ka<45;ka++)
        {
            if(space[ppy][ppx+ka]=='=' && space[ppy][ppx+ka]!='}')
            {
                space[ppy][ppx+ka]=' ';
            }
            if(space[ppy-1][ppx+ka]=='=' && space[ppy-1][ppx+ka]!='}')
            {
                space[ppy-1][ppx+ka]=' ';
            }
            if(space[ppy+1][ppx+ka]=='=' && space[ppy+1][ppx+ka]!='}')
            {
                space[ppy+1][ppx+ka]=' ';
            }
        }
    }
    if(ka<=0)
    {
        ka=0;
        for(int ka=1; ka<45;ka++)
        {
            if(space[ppy][ppx-ka]=='=' && space[ppy][ppx-ka]!='}')
            {
                space[ppy][ppx-ka]=' ';
            }
            if(space[ppy-1][ppx-ka]=='=' && space[ppy-1][ppx+ka]!='}')
            {
                space[ppy-1][ppx-ka]=' ';
            }
            if(space[ppy+1][ppx-ka]=='=' && space[ppy+1][ppx+ka]!='}')
            {
                space[ppy+1][ppx-ka]=' ';
            }
        }
    }

//FIX

//EXPLODING BULLETS

    ifstream filed;
    filed.open("EWII");

    if(milliseconds==0 || milliseconds==3 || milliseconds==6 || milliseconds==9)
    {
        if(explbull>=0)
        {
        if(GetAsyncKeyState(0x46)&&filed.good()) //F
        {
            explbull--;
            space[exy][exx]=' ';
            exbull='~';
            exy=ppy;
            exx=ppx+1;
        }
        }
    }
    if((space[exy][exx+1]=='{')||(space[exy][exx+2]=='{')||(space[exy][exx+1]=='!')||(space[exy][exx+2]=='!')||(space[exy][exx+1]=='*')||(space[exy][exx+2]=='*'))
        {
            space[exy][exx]=' ';
            exbull=' ';
            exy=0;exx=0;
        }
    if(exbull=='~' && ((space[exy][exx+1]!='|')||(space[exy][exx+2]!='|')))
    {
        space[exy][exx]=' ';
        exx++;
    }
    if(exx>=ppx+20||exx+1==78)
        {
//FIRST EXPLOSION INSERT
            if((milliseconds==0||milliseconds==6)&&exbull=='~')
            {   if(exy-5<=0){exy=6;}if(exy+5>=height){exy=16;}
                PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
                exbull='{';
                space[exy][exx]='{';space[exy][exx+1]='}';space[exy][exx-2]='{';space[exy][exx+3]='}';
                space[exy-1][exx-1]='{';space[exy-1][exx+2]='}';space[exy+1][exx-1]='{';space[exy+1][exx+2]='}';
                space[exy][exx-4]='{';space[exy][exx+5]='}';space[exy-1][exx-3]='{';space[exy-1][exx+4]='}';
                space[exy+1][exx-3]='{';space[exy+1][exx+4]='}';space[exy][exx-4]='{';space[exy][exx+5]='}';
                space[exy-2][exx]='{';space[exy-2][exx+1]='}';space[exy+2][exx]='{';space[exy+2][exx+1]='}';
                space[exy-2][exx-2]='{';space[exy-2][exx+3]='}';space[exy+2][exx-2]='{';space[exy+2][exx+3]='}';
            }
        }
            if((milliseconds==2||milliseconds==8)&&exbull=='{')
            {
//SECOND EXPLOSION INSERT
                space[exy][exx]=' ';space[exy][exx+1]=' ';space[exy][exx-2]=' ';space[exy][exx+3]=' ';
                space[exy-1][exx-1]=' ';space[exy-1][exx+2]=' ';space[exy+1][exx-1]=' ';space[exy+1][exx+2]=' ';
                space[exy][exx-4]=' ';space[exy][exx+5]=' ';space[exy-1][exx-3]=' ';space[exy-1][exx+4]=' ';
                space[exy+1][exx-3]=' ';space[exy+1][exx+4]=' ';space[exy][exx-4]=' ';space[exy][exx+5]=' ';
                space[exy-2][exx]=' ';space[exy-2][exx+1]=' ';space[exy+2][exx]=' ';space[exy+2][exx+1]=' ';
                space[exy-2][exx-2]=' ';space[exy-2][exx+3]=' ';space[exy+2][exx-2]=' ';space[exy+2][exx+3]=' ';
                space[exy][exx-8]='{';space[exy][exx-4]='{';space[exy][exx]='{';space[exy][exx+1]='}';
                space[exy][exx+5]='}';space[exy][exx+9]='}';space[exy-1][exx-8]='{';space[exy-1][exx-4]='{';
                space[exy-1][exx-2]='{';space[exy-2][exx-7]='{';space[exy-2][exx-5]='{';space[exy-2][exx-2]='{';
                space[exy-3][exx-6]='{';space[exy-3][exx-3]='{';space[exy-3][exx-1]='{';space[exy-4][exx-5]='{';
                space[exy-4][exx-3]='{';space[exy-4][exx]='{';space[exy-5][exx-4]='{';space[exy-5][exx-1]='{';
                space[exy+1][exx-8]='{';space[exy+1][exx-4]='{';space[exy+1][exx-2]='{';space[exy+2][exx-7]='{';
                space[exy+2][exx-5]='{';space[exy+2][exx-2]='{';space[exy+3][exx-6]='{';space[exy+3][exx-3]='{';
                space[exy+3][exx-1]='{';space[exy+4][exx-5]='{';space[exy+4][exx-3]='{';space[exy+4][exx]='{';
                space[exy+5][exx-4]='{';space[exy+5][exx-1]='{';space[exy-1][exx+9]='}';space[exy-1][exx+5]='}';
                space[exy-1][exx+3]='}';space[exy-2][exx+8]='}';space[exy-2][exx+6]='}';space[exy-2][exx+3]='}';
                space[exy-3][exx+7]='}';space[exy-3][exx+4]='}';space[exy-3][exx+2]='}';space[exy-4][exx+6]='}';
                space[exy-4][exx+4]='}';space[exy-4][exx+1]='}';space[exy-5][exx+5]='}';space[exy-5][exx+2]='}';
                space[exy+1][exx+9]='}';space[exy+1][exx+5]='}';space[exy+1][exx+3]='}';space[exy+2][exx+8]='}';
                space[exy+2][exx+6]='}';space[exy+2][exx+3]='}';space[exy+3][exx+7]='}';space[exy+3][exx+4]='}';
                space[exy+3][exx+2]='}';space[exy+4][exx+6]='}';space[exy+4][exx+4]='}';space[exy+4][exx+1]='}';
                space[exy+5][exx+5]='}';space[exy+5][exx+2]='}';space[exy-2][exx]='{';space[exy-2][exx+1]='}';
                space[exy+2][exx]='{';space[exy+2][exx+1]='}';space[exy-1][exx-6]='{';space[exy-1][exx+7]='}';
                space[exy+1][exx-6]='{';space[exy+1][exx+7]='}';
            }
            if((milliseconds==4||milliseconds==10)&&exbull=='{')
            {
//SECOND EXPLOSION DELETE
                space[exy][exx]=' ';space[exy][exx+1]=' ';space[exy][exx-2]=' ';space[exy][exx+3]=' ';
                space[exy-1][exx-1]=' ';space[exy-1][exx+2]=' ';space[exy+1][exx-1]=' ';space[exy+1][exx+2]=' ';
                space[exy][exx-4]=' ';space[exy][exx+5]=' ';space[exy-1][exx-3]=' ';space[exy-1][exx+4]=' ';
                space[exy+1][exx-3]=' ';space[exy+1][exx+4]=' ';
                space[exy-2][exx]=' ';space[exy-2][exx+1]=' ';space[exy+2][exx]=' ';space[exy+2][exx+1]=' ';
                space[exy-2][exx-2]=' ';space[exy-2][exx+3]=' ';space[exy+2][exx-2]=' ';space[exy+2][exx+3]=' ';
                space[exy][exx-8]=' ';space[exy][exx-4]=' ';space[exy][exx]=' ';space[exy][exx+1]=' ';
                space[exy][exx+5]=' ';space[exy][exx+9]=' ';space[exy-1][exx-8]=' ';space[exy-1][exx-4]=' ';
                space[exy-1][exx-2]=' ';space[exy-2][exx-7]=' ';space[exy-2][exx-5]=' ';space[exy-2][exx-2]=' ';
                space[exy-3][exx-6]=' ';space[exy-3][exx-3]=' ';space[exy-3][exx-1]=' ';space[exy-4][exx-5]=' ';
                space[exy-4][exx-3]=' ';space[exy-4][exx]=' ';space[exy-5][exx-4]=' ';space[exy-5][exx-1]=' ';
                space[exy+1][exx-8]=' ';space[exy+1][exx-4]=' ';space[exy+1][exx-2]=' ';space[exy+2][exx-7]=' ';
                space[exy+2][exx-5]=' ';space[exy+2][exx-2]=' ';space[exy+3][exx-6]=' ';space[exy+3][exx-3]=' ';
                space[exy+3][exx-1]=' ';space[exy+4][exx-5]=' ';space[exy+4][exx-3]=' ';space[exy+4][exx]=' ';
                space[exy+5][exx-4]=' ';space[exy+5][exx-1]=' ';space[exy-1][exx+9]=' ';space[exy-1][exx+5]=' ';
                space[exy-1][exx+3]=' ';space[exy-2][exx+8]=' ';space[exy-2][exx+6]=' ';space[exy-2][exx+3]=' ';
                space[exy-3][exx+7]=' ';space[exy-3][exx+4]=' ';space[exy-3][exx+2]=' ';space[exy-4][exx+6]=' ';
                space[exy-4][exx+4]=' ';space[exy-4][exx+1]=' ';space[exy-5][exx+5]=' ';space[exy-5][exx+2]=' ';
                space[exy+1][exx+9]=' ';space[exy+1][exx+5]=' ';space[exy+1][exx+3]=' ';space[exy+2][exx+8]=' ';
                space[exy+2][exx+6]=' ';space[exy+2][exx+3]=' ';space[exy+3][exx+7]=' ';space[exy+3][exx+4]=' ';
                space[exy+3][exx+2]=' ';space[exy+4][exx+6]=' ';space[exy+4][exx+4]=' ';space[exy+4][exx+1]=' ';
                space[exy+5][exx+5]=' ';space[exy+5][exx+2]=' ';space[exy-2][exx]=' ';space[exy-2][exx+1]=' ';
                space[exy+2][exx]=' ';space[exy+2][exx+1]=' ';space[exy-1][exx-6]=' ';space[exy-1][exx+7]=' ';
                space[exy+1][exx-6]=' ';space[exy+1][exx+7]=' ';
                exy=20;exx=0;exbull=' ';
            }


if(g>0)
{
    g--;
}

//PLAYER BULLET RESPAWNING

    if(milliseconds==0 || milliseconds==3 || milliseconds==6 || milliseconds==9)
    {
        if(GetAsyncKeyState(VK_SPACE))
        {
            if(g<80)
            {
                g++;
                g++;
                g++;
                g++;
                g++;
            }
            if(g<50)
            {
                i++;
                PlaySound(TEXT("blaster.wav"),NULL,SND_ASYNC);
            if(i==11)
            {
                i=1;
            }

            if(i==1)
            {   space[bby][bbx]=' ';
                bullet='-';
                bby=ppy;
                bbx=ppx+1;
            }
            if(i==2)
            {   space[ay][ax]=' ';
                bulleta='-';
                ay=ppy;
                ax=ppx+1;
            }
            if(i==3)
            {   space[by][bx]=' ';
                bulletb='-';
                by=ppy;
                bx=ppx+1;
            }
            if(i==4)
            {   space[cy][cx]=' ';
                bulletc='-';
                cy=ppy;
                cx=ppx+1;
            }
            if(i==5)
            {   space[dy][dx]=' ';
                bulletd='-';
                dy=ppy;
                dx=ppx+1;
            }
            if(i==6)
            {   space[ey][ex]=' ';
                bullete='-';
                ey=ppy;
                ex=ppx+1;
            }
            if(i==7)
            {   space[fy][fx]=' ';
                bulletf='-';
                fy=ppy;
                fx=ppx+1;
            }
            if(i==8)
            {   space[gy][gx]=' ';
                bulletg='-';
                gy=ppy;
                gx=ppx+1;
            }
            if(i==9)
            {   space[hy][hx]=' ';
                bulleth='-';
                hy=ppy;
                hx=ppx+1;
            }
            if(i==10)
            {   space[iy][ix]=' ';
                bulleti='-';
                iy=ppy;
                ix=ppx+1;
            }

            }
        }
    }
    ifstream filedb;
    filedb.open("WSIII");
    if(milliseconds==1 || milliseconds==4 || milliseconds==7 || milliseconds==10)
    {
        if(GetAsyncKeyState(0x44)&&filedb.good()) //D
        {
            if(g<80)
            {
                g++;
                g++;
                g++;
                g++;
                g++;
            }
            if(g<50)
            {
                id++;
                PlaySound(TEXT("blaster.wav"),NULL,SND_ASYNC);
                if(id==6)
                {
                    id=1;
                }

                if(id==1)
                {   space[bby][bbx]=' ';
                    space[ay][ax]=' ';
                    bullet='-';
                    bulleta='-';
                    bby=ppy-1;
                    bbx=ppx+1;
                    ay=ppy+1;
                    ax=ppx+1;
                }
                if(id==2)
                {
                    space[by][bx]=' ';
                    space[cy][cx]=' ';
                    bulletb='-';
                    bulletc='-';
                    by=ppy-1;
                    bx=ppx+1;
                    cy=ppy+1;
                    cx=ppx+1;
                }
                if(id==3)
                {
                    space[dy][dx]=' ';
                    space[ey][ex]=' ';
                    bulletd='-';
                    bullete='-';
                    dy=ppy-1;
                    dx=ppx+1;
                    ey=ppy+1;
                    ex=ppx+1;
                }
                if(id==4)
                {
                    space[fy][fx]=' ';
                    space[gy][gx]=' ';
                    bulletf='-';
                    bulletg='-';
                    fy=ppy-1;
                    fx=ppx+1;
                    gy=ppy+1;
                    gx=ppx+1;
                }
                if(id==5)
                {
                    space[hy][hx]=' ';
                    space[iy][ix]=' ';
                    bulleth='-';
                    bulleti='-';
                    hy=ppy-1;
                    hx=ppx+1;
                    iy=ppy+1;
                    ix=ppx+1;
                }
            }
        }
    }

    //FIX

    //ENEMY BULLET RESPAWNING

    //ENEMY BULLET RESPAWNING

    if(milliseconds==0 || milliseconds==3 || milliseconds==6 || milliseconds==9)
    {   randNum=rand()%randNumMax;
        if(randNum==1||randNum==2||randNum==0)
        {
            int randNumaa=rand()%randNumMax;
        if(randNumaa==1)
        {
            if(ia<=6)
            {
            ia++;
            PlaySound(TEXT("257232__javierzumer__retro-shot-blaster.wav"),NULL,SND_ASYNC);
            }

            if(ia==6)
            {
                ia=1;
            }

            if(ia==1)
            {   space[jy][jx]=' ';
                bulletj='-';
                jy=bsy;
                jx=b1x-2;
            }

            if(ia==2)
            {   space[ly][lx]=' ';
                bulletl='-';
                ly=bsy;
                lx=b1x-2;
            }

            if(ia==3)
            {   space[ny][nx]=' ';
                bulletn='-';
                ny=bsy;
                nx=b1x-2;
            }

            if(ia==4)
            {   space[py][px]=' ';
                bulletp='-';
                py=bsy;
                px=b1x-2;
            }

            if(ia==5)
            {   space[ry][rx]=' ';
                bulletr='-';
                ry=bsy;
                rx=b1x-2;
            }

        }
        if(randNumaa==2)
        {
            if(ia<=6)
            {
            ia++;
            PlaySound(TEXT("257232__javierzumer__retro-shot-blaster.wav"),NULL,SND_ASYNC);
            }
            if(ia==6)
            {
                ia=1;
            }
            if(ia==1)
            {   space[ky][kx]=' ';
                bulletk='-';
                ky=gsy;
                kx=g1x-2;
            }
            if(ia==2)
            {   space[my][mx]=' ';
                bulletm='-';
                my=gsy;
                mx=g1x-2;
            }
            if(ia==3)
            {   space[oy][ox]=' ';
                bulleto='-';
                oy=gsy;
                ox=g1x-2;
            }
            if(ia==4)
            {   space[qy][qx]=' ';
                bulletq='-';
                qy=gsy;
                qx=g1x-2;
            }
            if(ia==5)
            {   space[sy][sx]=' ';
                bullets='-';
                sy=gsy;
                sx=g1x-2;
            }
        }


        }

    }
//FIX

//PLAYER BULLETS

     if(bullet=='-' && ((space[bby][bbx+1]!='|')||(space[bby][bbx+2]!='|') ))
        {space[bby][bbx]=' ';
            bbx++;
            bbx++;

            if(bbx+1==78||bbx+2==78||space[bby][bbx-1]=='{'||space[bby][bbx]=='{'||space[bby][bbx-1]=='!'||space[bby][bbx]=='!'||space[bby][bbx-1]=='*'||space[bby][bbx]=='*')
            {bby=20;bbx=77;bullet=' ';}
        }
        if(space[bby][bbx+1]=='|'||space[bby][bbx+2]=='|')
        {
            bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bullet=' ';bby=20;bbx=77;
        }

//AAAA
        if(bulleta=='-' && ((space[ay][ax+1]!='|')||(space[ay][ax+2]!='|') ))
        {space[ay][ax]=' ';
            ax++;
            ax++;

        if(ax+1==78||ax+2==78||space[ay][ax-1]=='{'||space[ay][ax]=='{'||space[ay][ax-1]=='!'||space[ay][ax]=='!'||space[ay][ax-1]=='*'||space[ay][ax]=='*')
        {ay=20;ax=77;bulleta=' ';}
        }
        if(space[ay][ax+1]=='|'||space[ay][ax+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulleta=' ';ay=20;ax=77;
        }

//BBBB
        if(bulletb=='-' && ((space[by][bx+1]!='|')||(space[by][bx+2]!='|') ))
        {space[by][bx]=' ';
            bx++;
            bx++;

            if(bx+1==78||bx+2==78||space[by][bx-1]=='{'||space[by][bx]=='{'||space[by][bx-1]=='!'||space[by][bx]=='!'||space[by][bx-1]=='*'||space[by][bx]=='*')
            {by=20;bx=77;bulletb=' ';}
        }
        if(space[by][bx+1]=='|'||space[by][bx+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletb=' ';by=20;bx=77;

        }
        if(space[by][bx+1]=='|'||space[by][bx+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletb=' ';by=20;bx=77;
        }

//CCCC
        if(bulletc=='-' && ((space[cy][cx+1]!='|')||(space[cy][cx+2]!='|') ))
        {space[cy][cx]=' ';
            cx++;
            cx++;

            if(cx+1==78||cx+2==78||space[cy][cx-1]=='{'||space[cy][cx]=='{'||space[cy][cx-1]=='!'||space[cy][cx]=='!'||space[cy][cx-1]=='*'||space[cy][cx]=='*')
            {cy=20;cx=77;bulletc=' ';}
        }
        if(space[cy][cx+1]=='|'||space[cy][cx+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletc=' ';cy=20;cx=77;
        }

//DDDD
        if(bulletd=='-' && ((space[dy][dx+1]!='|')||(space[dy][dx+2]!='|') ))
        {space[dy][dx]=' ';
            dx++;
            dx++;

            if(dx+1==78||dx+2==78||space[dy][dx-1]=='{'||space[dy][dx]=='{'||space[dy][dx-1]=='!'||space[dy][dx]=='!'||space[dy][dx-1]=='*'||space[dy][dx]=='*')
            {dy=20;dx=77;bulletd=' ';}
        }
        if(space[dy][dx+1]=='|'||space[dy][dx+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletd=' ';dy=20;dx=77;
        }

//EEEE
        if(bullete=='-' && ((space[ey][ex+1]!='|')||(space[ey][ex+2]!='|') ))
        {space[ey][ex]=' ';
            ex++;
            ex++;

            if(ex+1==78||ex+2==78||space[ey][ex-1]=='{'||space[ey][ex]=='{'||space[ey][ex-1]=='!'||space[ey][ex]=='!'||space[ey][ex-1]=='*'||space[ey][ex]=='*')
            {ey=20;ex=77;bullete=' ';}
        }
        if(space[ey][ex+1]=='|'||space[ey][ex+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bullete=' ';ey=20;ex=77;
        }

//FFFF
        if(bulletf=='-' && ((space[fy][fx+1]!='|')||(space[fy][fx+2]!='|') ))
        {space[fy][fx]=' ';
            fx++;
            fx++;

            if(fx+1==78||fx+2==78||space[fy][fx-1]=='{'||space[fy][fx]=='{'||space[fy][fx-1]=='!'||space[fy][fx]=='!'||space[fy][fx-1]=='*'||space[fy][fx]=='*')
            {fy=20;fx=77;bulletf=' ';}
        }
        if(space[fy][fx+1]=='|'||space[fy][fx+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletf=' ';fy=20;fx=77;
        }

//GGGG
        if(bulletg=='-' && ((space[gy][gx+1]!='|')||(space[gy][gx+2]!='|') ))
        {space[gy][gx]=' ';
            gx++;
            gx++;

            if(gx+1==78||gx+2==78||space[gy][gx-1]=='{'||space[gy][gx]=='{'||space[gy][gx-1]=='!'||space[gy][gx]=='!'||space[gy][gx-1]=='*'||space[gy][gx]=='*')
            {gy=20;gx=77;bulletg=' ';}
        }
        if(space[gy][gx+1]=='|'||space[gy][gx+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletg=' ';gy=20;gx=77;
        }

//HHHHH
        if(bulleth=='-' && ((space[hy][hx+1]!='|')||(space[hy][hx+2]!='|') ))
        {space[hy][hx]=' ';
            hx++;
            hx++;

            if(hx+1==78||hx+2==78||space[hy][hx-1]=='{'||space[hy][hx]=='{'||space[hy][hx-1]=='!'||space[hy][hx]=='!'||space[hy][hx-1]=='*'||space[hy][hx]=='*')
            {hy=20;hx=77;bulleth=' ';}
        }
        if(space[hy][hx+1]=='|'||space[hy][hx+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulleth=' ';hy=20;hx=77;
        }

//IIII
        if(bulleti=='-' && ((space[iy][ix+1]!='|')||(space[iy][ix+2]!='|') ))
        {space[iy][ix]=' ';
            ix++;
            ix++;

            if(ix+1==78||ix+2==78||space[iy][ix-1]=='{'||space[iy][ix]=='{'||space[iy][ix-1]=='!'||space[iy][ix]=='!'||space[iy][ix-1]=='*'||space[iy][ix]=='*')
            {iy=20;ix=77;bulleti=' ';}
        }
        if(space[iy][ix+1]=='|'||space[iy][ix+2]=='|')
        {bossh--;
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulleti=' ';iy=20;ix=77;
        }


//ENEMIE FIREEEEEEEEEEEEEEEEEE   JJJJJJJJ

if(bulletj=='-' && ((space[jy][jx-1]!=playerbc)||(space[jy][jx-2]!=playerbc)||(space[jy][jx-1]!=')')||(space[jy][jx-2]!=')')||(space[jy][jx-1]!='}')||(space[jy][jx-2]!='}') ))
        {space[jy][jx]=' ';
            jx--;
            jx--;
            if(jx-1==0||jx-2==0||(space[jy][jx-1]==')')||(space[jy][jx-2]==')')||(space[jy][jx-1]=='}')||(space[jy][jx-2]=='}'))
            {bulletj=' ';jy=0;jx=77;}
        }
        if(jy==ppy&&(jx==ppx||jx==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulletj=' ';jy=0;jx=77;
        }

//KKKKKKKKK
        if(bulletk=='-' && ((space[ky][kx-1]!=playerbc)||(space[ky][kx-2]!=playerbc)||(space[ky][kx-1]!=')')||(space[ky][kx-2]!=')')||(space[ky][kx-1]!='}')||(space[ky][kx-2]!='}') ))
        {space[ky][kx]=' ';
            kx--;
            kx--;
            if(kx-1==0||kx-2==0||(space[ky][kx-1]==')')||(space[ky][kx-2]==')')||(space[ky][kx-1]=='}')||(space[ky][kx-2]=='}'))
            {bulletk=' ';ky=0;kx=77;}
        }
        if(ky==ppy&&(kx==ppx||kx==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulletk=' ';ky=0;kx=77;
        }

//LLLLLLLLLL
if(bulletl=='-' && ((space[ly][lx-1]!=playerbc)||(space[ly][lx-2]!=playerbc)||(space[ly][lx-1]!=')')||(space[ly][lx-2]!=')')||(space[ly][lx-1]!='}')||(space[ly][lx-2]!='}') ))
        {space[ly][lx]=' ';
            lx--;
            lx--;if(lx-1==0||lx-2==0||(space[ly][lx-1]==')')||(space[ly][lx-2]==')')||(space[ly][lx-1]=='}')||(space[ly][lx-2]=='}'))
            {bulletl=' ';ly=0;lx=77;}
        }
        if(ly==ppy&&(lx==ppx||lx==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulletl=' ';ly=0;lx=77;
        }

//MMMMMMMMMMMM
if(bulletm=='-' && ((space[my][mx-1]!=playerbc)||(space[my][mx-2]!=playerbc)||(space[my][mx-1]!=')')||(space[my][mx-2]!=')')||(space[my][mx-1]!='}')||(space[my][mx-2]!='}') ))
        {space[my][mx]=' ';
            mx--;
            mx--;if(mx-1==0||mx-2==0||(space[my][mx-1]==')')||(space[my][mx-2]==')')||(space[my][mx-1]=='}')||(space[my][mx-2]=='}'))
            {bulletm=' ';my=0;mx=77;}
        }
        if(my==ppy&&(mx==ppx||mx==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulletm=' ';my=0;mx=77;
        }

//NNNNNNNNNNNNN
if(bulletn=='-' && ((space[ny][nx-1]!=playerbc)||(space[ny][nx-2]!=playerbc)||(space[ny][nx-1]!=')')||(space[ny][nx-2]!=')')||(space[ny][nx-1]!='}')||(space[ny][nx-2]!='}') ))
        {space[ny][nx]=' ';
            nx--;
            nx--;if(nx-1==0||nx-2==0||(space[ny][nx-1]==')')||(space[ny][nx-2]==')')||(space[ny][nx-1]=='}')||(space[ny][nx-2]=='}'))
            {bulletn=' ';ny=0;nx=77;}
        }
        if(ny==ppy&&(nx==ppx||nx==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulletn=' ';ny=0;nx=77;
        }

//OOOOOOOOOOO
if(bulleto=='-' && ((space[oy][ox-1]!=playerbc)||(space[oy][ox-2]!=playerbc)||(space[oy][ox-1]!=')')||(space[oy][ox-2]!=')')||(space[oy][ox-1]!='}')||(space[oy][ox-2]!='}') ))
        {space[oy][ox]=' ';
            ox--;
            ox--;if(ox-1==0||ox-2==0||(space[oy][ox-1]==')')||(space[oy][ox-2]==')')||(space[oy][ox-1]=='}')||(space[oy][ox-2]=='}'))
            {bulleto=' ';oy=0;ox=77;}
        }
        if(oy==ppy&&(ox==ppx||ox==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulleto=' ';oy=0;ox=77;
        }

//PPPPPPPPPPP
if(bulletp=='-' && ((space[py][px-1]!=playerbc)||(space[py][px-2]!=playerbc)||(space[py][px-1]!=')')||(space[py][px-2]!=')')||(space[py][px-1]!='}')||(space[py][px-2]!='}') ))
        {space[py][px]=' ';
            px--;
            px--;if(px-1==0||px-2==0||(space[py][px-1]==')')||(space[py][px-2]==')')||(space[py][px-1]=='}')||(space[py][px-2]=='}'))
            {bulletp=' ';py=0;px=77;}
        }
        if(py==ppy&&(px==ppx||px==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulletp=' ';py=0;px=77;
        }

//QQQQQQQQQQQQ
if(bulletq=='-' && ((space[qy][qx-1]!=playerbc)||(space[qy][qx-2]!=playerbc)||(space[qy][qx-1]!=')')||(space[qy][qx-2]!=')')||(space[qy][qx-1]!='}')||(space[qy][qx-2]!='}') ))
        {space[qy][qx]=' ';
            qx--;
            qx--;if(qx-1==0||qx-2==0||(space[qy][qx-1]==')')||(space[qy][qx-2]==')')||(space[qy][qx-1]=='}')||(space[qy][qx-2]=='}'))
            {bulletq=' ';qy=0;qx=77;}
        }
        if(qy==ppy&&(qx==ppx||qx==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulletq=' ';qy=0;qx=77;
        }

//RRRRRRRRRRRRRRRRR
if(bulletr=='-' && ((space[ry][rx-1]!=playerbc)||(space[ry][rx-2]!=playerbc)||(space[ry][rx-1]!=')')||(space[ry][rx-2]!=')')||(space[ry][rx-1]!='}')||(space[ry][rx-2]!='}') ))
        {space[ry][rx]=' ';
            rx--;
            rx--;if(rx-1==0||rx-2==0||(space[ry][rx-1]==')')||(space[ry][rx-2]==')')||(space[ry][rx-1]=='}')||(space[ry][rx-2]=='}'))
            {bulletr=' ';ry=0;rx=77;}
        }
        if(ry==ppy&&(rx==ppx||rx==ppx+1)&&m==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;
            bulletr=' ';ry=0;rx=77;
        }

//SSSSSSSSSSSSS
if(bullets=='-' && ((space[sy][sx-1]!=playerbc)||(space[sy][sx-2]!=playerbc)||(space[sy][sx-1]!=')')||(space[sy][sx-2]!=')')||(space[sy][sx-1]!='}')||(space[sy][sx-2]!='}') ))
        {space[sy][sx]=' ';
            sx--;
            sx--;if(sx-1==0||sx-2==0||(space[sy][sx-1]==')')||(space[sy][sx-2]==')')||(space[sy][sx-1]=='}')||(space[sy][sx-2]=='}'))
            {bullets=' ';sy=0;sx=77;}
        }
          if(sy==ppy&&(sx==ppx||sx==ppx+1)&&m==0)
            {
                PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
                health--;
                bullets=' ';sy=0;sx=77;
            }

//TTTTTTTTTTTTT
if(bullett=='-' && ((space[ty][tx-1]!=playerbc)||(space[ty][tx-2]!=playerbc)||(space[ty][tx-1]!=')')||(space[ty][tx-2]!=')')||(space[ty][tx-1]!='}')||(space[ty][tx-2]!='}') ))
        {space[ty][tx]=' ';
            tx--;
            tx--;if(tx-1==0||tx-2==0||(space[ty][tx-1]==')')||(space[ty][tx-2]==')')||(space[ty][tx-1]=='}')||(space[ty][tx-2]=='}'))
            {bullett=' ';ty=0;tx=77;}
        }
          if(ty==ppy&&(tx==ppx||tx==ppx+1)&&m==0)
            {
                PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
                health--;
                bullett=' ';ty=0;tx=77;
            }
//VVVVVVVVVVVVVVV
if(bulletv=='-' && ((space[vy][vx-1]!=playerbc)||(space[vy][vx-2]!=playerbc)||(space[vy][vx-1]!=')')||(space[vy][vx-2]!=')')||(space[vy][vx-1]!='}')||(space[vy][vx-2]!='}') ))
        {space[vy][vx]=' ';
            vx--;
            vx--;if(vx-1==0||vx-2==0||(space[vy][vx-1]==')')||(space[vy][vx-2]==')')||(space[vy][vx-1]=='}')||(space[vy][vx-2]=='}'))
            {bulletv=' ';vy=0;vx=77;}
        }
          if(vy==ppy&&(vx==ppx||vx==ppx+1)&&m==0)
            {
                PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
                health--;
                bulletv=' ';vy=0;vx=77;
            }
//YYYYYYYYYYYYYY
if(bullety=='-' && ((space[yy][yx-1]!=playerbc)||(space[yy][yx-2]!=playerbc)||(space[yy][yx-1]!=')')||(space[yy][yx-2]!=')')||(space[yy][yx-1]!='}')||(space[yy][yx-2]!='}') ))
        {space[yy][yx]=' ';
            yx--;
            yx--;if(yx-1==0||yx-2==0||(space[yy][yx-1]==')')||(space[yy][yx-2]==')')||(space[yy][yx-1]=='}')||(space[yy][yx-2]=='}'))
            {bullety=' ';yy=0;yx=77;}
        }
          if(yy==ppy&&(yx==ppx||yx==ppx+1)&&m==0)
            {
                PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
                health--;
                bullety=' ';yy=0;yx=77;
            }
//XXXXXXXXXXXXXXXXX
if(bulletx=='-' && ((space[xy][xx-1]!=playerbc)||(space[xy][xx-2]!=playerbc)||(space[xy][xx-1]!=')')||(space[xy][xx-2]!=')')||(space[xy][xx-1]!='}')||(space[xy][xx-2]!='}') ))
        {space[xy][xx]=' ';
            xx--;
            xx--;if(xx-1==0||xx-2==0||(space[xy][xx-1]==')')||(space[xy][xx-2]==')')||(space[xy][xx-1]=='}')||(space[xy][xx-2]=='}'))
            {bulletx=' ';xy=0;xx=77;}
        }
          if(xy==ppy&&(xx==ppx||xx==ppx+1)&&m==0)
            {
                PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
                health--;
                bulletx=' ';xy=0;xx=77;
            }
//ZZZZZZZZZZZZZZZZZ
if(bulletz=='-' && ((space[zy][zx-1]!=playerbc)||(space[zy][zx-2]!=playerbc)||(space[zy][zx-1]!=')')||(space[zy][zx-2]!=')')||(space[zy][zx-1]!='}')||(space[zy][zx-2]!='}') ))
        {space[zy][zx]=' ';
            zx--;
            zx--;if(zx-1==0||zx-2==0||(space[zy][zx-1]==')')||(space[zy][zx-2]==')')||(space[zy][zx-1]=='}')||(space[zy][zx-2]=='}'))
            {bulletz=' ';zy=0;zx=77;}
        }
          if(zy==ppy&&(zx==ppx||zx==ppx+1)&&m==0)
            {
                PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
                health--;
                bulletz=' ';zy=0;zx=77;
            }

//LAZER DMG

//FIX

//BOSS MOVEMENT



//FIX

//EXPLODING BULLETS

if(seconds==1)
    {
        space[ebby][ebbx]=' ';
        ebb='~';
        ebby=fsy;
        ebbx=f1x-1;
    }
    if(ebb=='~' && (ebbx-9!=0||ebbx-10!=0))
    {
        space[ebby][ebbx]=' ';
        ebbx--;
    }
    if(ebbx==ppx||ebbx==ppx+1||ebbx==ppx-1||ebbx==ppx-2||ebbx==ppx+2||ebbx==ppx+3||ebbx==ppx-3||ebbx-15==0||ebbx-14==0||ebbx-13==0||ebbx-12==0)
        {
//FIRST EXPLOSION INSERT
            if((milliseconds==0||milliseconds==6)&&ebb=='~')
            {   if(ebby-5<=0){ebby=6;}if(ebby+5>=height){ebby=16;}
                PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
                ebb='{';
                space[ebby][ebbx]='{';space[ebby][ebbx+1]='}';space[ebby][ebbx-2]='{';space[ebby][ebbx+3]='}';
                space[ebby-1][ebbx-1]='{';space[ebby-1][ebbx+2]='}';space[ebby+1][ebbx-1]='{';space[ebby+1][ebbx+2]='}';
                space[ebby][ebbx-4]='{';space[ebby][ebbx+5]='}';space[ebby-1][ebbx-3]='{';space[ebby-1][ebbx+4]='}';
                space[ebby+1][ebbx-3]='{';space[ebby+1][ebbx+4]='}';space[ebby][ebbx-4]='{';space[ebby][ebbx+5]='}';
                space[ebby-2][ebbx]='{';space[ebby-2][ebbx+1]='}';space[ebby+2][ebbx]='{';space[ebby+2][ebbx+1]='}';
                space[ebby-2][ebbx-2]='{';space[ebby-2][ebbx+3]='}';space[ebby+2][ebbx-2]='{';space[ebby+2][ebbx+3]='}';
            }
        }
            if((milliseconds==2||milliseconds==8)&&ebb=='{')
            {
//SECOND EXPLOSION INSERT
                space[ebby][ebbx]=' ';space[ebby][ebbx+1]=' ';space[ebby][ebbx-2]=' ';space[ebby][ebbx+3]=' ';
                space[ebby-1][ebbx-1]=' ';space[ebby-1][ebbx+2]=' ';space[ebby+1][ebbx-1]=' ';space[ebby+1][ebbx+2]=' ';
                space[ebby][ebbx-4]=' ';space[ebby][ebbx+5]=' ';space[ebby-1][ebbx-3]=' ';space[ebby-1][ebbx+4]=' ';
                space[ebby+1][ebbx-3]=' ';space[ebby+1][ebbx+4]=' ';space[ebby][ebbx-4]=' ';space[ebby][ebbx+5]=' ';
                space[ebby-2][ebbx]=' ';space[ebby-2][ebbx+1]=' ';space[ebby+2][ebbx]=' ';space[ebby+2][ebbx+1]=' ';
                space[ebby-2][ebbx-2]=' ';space[ebby-2][ebbx+3]=' ';space[ebby+2][ebbx-2]=' ';space[ebby+2][ebbx+3]=' ';
                space[ebby][ebbx-8]='{';space[ebby][ebbx-4]='{';space[ebby][ebbx]='{';space[ebby][ebbx+1]='}';
                space[ebby][ebbx+5]='}';space[ebby][ebbx+9]='}';space[ebby-1][ebbx-8]='{';space[ebby-1][ebbx-4]='{';
                space[ebby-1][ebbx-2]='{';space[ebby-2][ebbx-7]='{';space[ebby-2][ebbx-5]='{';space[ebby-2][ebbx-2]='{';
                space[ebby-3][ebbx-6]='{';space[ebby-3][ebbx-3]='{';space[ebby-3][ebbx-1]='{';space[ebby-4][ebbx-5]='{';
                space[ebby-4][ebbx-3]='{';space[ebby-4][ebbx]='{';space[ebby-5][ebbx-4]='{';space[ebby-5][ebbx-1]='{';
                space[ebby+1][ebbx-8]='{';space[ebby+1][ebbx-4]='{';space[ebby+1][ebbx-2]='{';space[ebby+2][ebbx-7]='{';
                space[ebby+2][ebbx-5]='{';space[ebby+2][ebbx-2]='{';space[ebby+3][ebbx-6]='{';space[ebby+3][ebbx-3]='{';
                space[ebby+3][ebbx-1]='{';space[ebby+4][ebbx-5]='{';space[ebby+4][ebbx-3]='{';space[ebby+4][ebbx]='{';
                space[ebby+5][ebbx-4]='{';space[ebby+5][ebbx-1]='{';space[ebby-1][ebbx+9]='}';space[ebby-1][ebbx+5]='}';
                space[ebby-1][ebbx+3]='}';space[ebby-2][ebbx+8]='}';space[ebby-2][ebbx+6]='}';space[ebby-2][ebbx+3]='}';
                space[ebby-3][ebbx+7]='}';space[ebby-3][ebbx+4]='}';space[ebby-3][ebbx+2]='}';space[ebby-4][ebbx+6]='}';
                space[ebby-4][ebbx+4]='}';space[ebby-4][ebbx+1]='}';space[ebby-5][ebbx+5]='}';space[ebby-5][ebbx+2]='}';
                space[ebby+1][ebbx+9]='}';space[ebby+1][ebbx+5]='}';space[ebby+1][ebbx+3]='}';space[ebby+2][ebbx+8]='}';
                space[ebby+2][ebbx+6]='}';space[ebby+2][ebbx+3]='}';space[ebby+3][ebbx+7]='}';space[ebby+3][ebbx+4]='}';
                space[ebby+3][ebbx+2]='}';space[ebby+4][ebbx+6]='}';space[ebby+4][ebbx+4]='}';space[ebby+4][ebbx+1]='}';
                space[ebby+5][ebbx+5]='}';space[ebby+5][ebbx+2]='}';space[ebby-2][ebbx]='{';space[ebby-2][ebbx+1]='}';
                space[ebby+2][ebbx]='{';space[ebby+2][ebbx+1]='}';
            }
            if((milliseconds==4||milliseconds==10)&&ebb=='{')
            {
//SECOND EXPLOSION DELETE
                space[ebby][ebbx]=' ';space[ebby][ebbx+1]=' ';space[ebby][ebbx-2]=' ';space[ebby][ebbx+3]=' ';
                space[ebby-1][ebbx-1]=' ';space[ebby-1][ebbx+2]=' ';space[ebby+1][ebbx-1]=' ';space[ebby+1][ebbx+2]=' ';
                space[ebby][ebbx-4]=' ';space[ebby][ebbx+5]=' ';space[ebby-1][ebbx-3]=' ';space[ebby-1][ebbx+4]=' ';
                space[ebby+1][ebbx-3]=' ';space[ebby+1][ebbx+4]=' ';space[ebby][ebbx-4]=' ';space[ebby][ebbx+5]=' ';
                space[ebby-2][ebbx]=' ';space[ebby-2][ebbx+1]=' ';space[ebby+2][ebbx]=' ';space[ebby+2][ebbx+1]=' ';
                space[ebby-2][ebbx-2]=' ';space[ebby-2][ebbx+3]=' ';space[ebby+2][ebbx-2]=' ';space[ebby+2][ebbx+3]=' ';
                space[ebby][ebbx-8]=' ';space[ebby][ebbx-4]=' ';space[ebby][ebbx]=' ';space[ebby][ebbx+1]=' ';
                space[ebby][ebbx+5]=' ';space[ebby][ebbx+9]=' ';space[ebby-1][ebbx-8]=' ';space[ebby-1][ebbx-4]=' ';
                space[ebby-1][ebbx-2]=' ';space[ebby-2][ebbx-7]=' ';space[ebby-2][ebbx-5]=' ';space[ebby-2][ebbx-2]=' ';
                space[ebby-3][ebbx-6]=' ';space[ebby-3][ebbx-3]=' ';space[ebby-3][ebbx-1]=' ';space[ebby-4][ebbx-5]=' ';
                space[ebby-4][ebbx-3]=' ';space[ebby-4][ebbx]=' ';space[ebby-5][ebbx-4]=' ';space[ebby-5][ebbx-1]=' ';
                space[ebby+1][ebbx-8]=' ';space[ebby+1][ebbx-4]=' ';space[ebby+1][ebbx-2]=' ';space[ebby+2][ebbx-7]=' ';
                space[ebby+2][ebbx-5]=' ';space[ebby+2][ebbx-2]=' ';space[ebby+3][ebbx-6]=' ';space[ebby+3][ebbx-3]=' ';
                space[ebby+3][ebbx-1]=' ';space[ebby+4][ebbx-5]=' ';space[ebby+4][ebbx-3]=' ';space[ebby+4][ebbx]=' ';
                space[ebby+5][ebbx-4]=' ';space[ebby+5][ebbx-1]=' ';space[ebby-1][ebbx+9]=' ';space[ebby-1][ebbx+5]=' ';
                space[ebby-1][ebbx+3]=' ';space[ebby-2][ebbx+8]=' ';space[ebby-2][ebbx+6]=' ';space[ebby-2][ebbx+3]=' ';
                space[ebby-3][ebbx+7]=' ';space[ebby-3][ebbx+4]=' ';space[ebby-3][ebbx+2]=' ';space[ebby-4][ebbx+6]=' ';
                space[ebby-4][ebbx+4]=' ';space[ebby-4][ebbx+1]=' ';space[ebby-5][ebbx+5]=' ';space[ebby-5][ebbx+2]=' ';
                space[ebby+1][ebbx+9]=' ';space[ebby+1][ebbx+5]=' ';space[ebby+1][ebbx+3]=' ';space[ebby+2][ebbx+8]=' ';
                space[ebby+2][ebbx+6]=' ';space[ebby+2][ebbx+3]=' ';space[ebby+3][ebbx+7]=' ';space[ebby+3][ebbx+4]=' ';
                space[ebby+3][ebbx+2]=' ';space[ebby+4][ebbx+6]=' ';space[ebby+4][ebbx+4]=' ';space[ebby+4][ebbx+1]=' ';
                space[ebby+5][ebbx+5]=' ';space[ebby+5][ebbx+2]=' ';space[ebby-2][ebbx]=' ';space[ebby-2][ebbx+1]=' ';
                space[ebby+2][ebbx]=' ';space[ebby+2][ebbx+1]=' ';
                ebby=20;ebbx=77;ebb=' ';seconds=1;
            }
        if(ppy<=ebby+5&&ppy>=ebby-5&&ppx>=ebbx-15&&ppx<=ebbx+15&&(milliseconds==0||milliseconds==2||milliseconds==6||milliseconds==8)&&ebb=='{')
        {
            health=health-1;
        }


cls();
}
}
