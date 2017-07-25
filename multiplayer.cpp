#include <iostream>
#include "ctime"
#include "string.h"
#include "windows.h"
#include "fstream"
#include "multiplayer.h"
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
void colorsmp();

char playermp;
char enemy1sprite;
int pmp;
int p1mp;
int cmp;
int colorsint1=0;
int colorsint2=0;
int setkill;
int menuint=0;


void completelvl()
{
    string menu[3]={"                                    MAIN MENU                ","                                     RESTART              ","                                      QUIT              "};
    int select=0;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
        cout<<"\n\n\n\n\n\n                                     OPTIONS\n";
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
                        multiplayer mu;
                        mu.multiplayera();
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
void deadmp()
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
                        multiplayer mu;
                        mu.multiplayera();
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
void ship::shipmp()
{

    string menu[6]={" Interceptor ","   Warship   "," StarFighter ","   Interceptor ","   Warship   "," StarFighter"};
    int select=1;
    int select2=4;

    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cls();
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n\n\n\n";
            cout<<"          Spacecraft - Player 1                  Spacecraft - Player 2\n\n";
            cout<<"   ==================================      ==================================\n\n";

        for(int i=0; i<6; i++)
        {
            if(i==select||i==select2)
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
            cout<<"\n\n\n      Ц                           ";
        }
        if(select==1)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"\n\n\n                   и              ";
        }

        if(select==2)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"\n\n\n                                Ю ";
        }
        if(select2==3)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"             <                            \n\n";
        }
        if(select2==4)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                          и                \n\n";
        }

        if(select2==5)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                       Ю     \n\n";
        }
        while(true)
        {
            if(GetAsyncKeyState(0x44)!=0)
            {Sleep(200);
                select+=1;colorsint1=0;
                if(select==3)
                {
                    select=0;
                }
                break;
            }
            else if(GetAsyncKeyState(0x41)!=0)
            {Sleep(200);
                select-=1;colorsint1=0;
                if(select==-1)
                {
                    select=2;
                }
                break;
            }
            else if(GetAsyncKeyState(VK_LEFT)!=0)
            {Sleep(200);
                select2-=1;colorsint2=0;
                if(select2==2)
                {
                    select2=5;
                }
                break;
            }
            if(GetAsyncKeyState(VK_RIGHT)!=0)
            {Sleep(200);
                select2+=1;colorsint2=0;
                if(select2==6)
                {
                    select2=3;
                }
                break;
            }
            else if(GetAsyncKeyState(VK_SPACE)!=0)
            {
                Sleep(200);
                if(select==0)
                {
                    pmp=0;
                }
                if(select==1)
                {
                    pmp=1;
                }
                if(select==2)
                {
                    pmp=2;
                }
                colorsint1=1;
            break;}
            else if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);
                cls1();
                colorsint1=0;
                colorsint2=0;
                levelsa();
            break;}
             if(GetAsyncKeyState(VK_RSHIFT)!=0)
            {
                Sleep(200);
                if(select2==3)
                {
                    p1mp=0;
                }
                if(select2==4)
                {
                    p1mp=1;
                }
                if(select2==5)
                {
                    p1mp=2;
                }
                colorsint2=1;
            break;}
        }
        if((colorsint1+colorsint2==1)&&colorsint1>colorsint2)
        {
            cout<<"                 READY";
        }
        if((colorsint1+colorsint2==1)&&colorsint1<colorsint2)
        {
            cout<<"                                                          READY";
        }
        if(colorsint1+colorsint2==2)
        {
            cout<<"                 READY                                    READY";
            colorsmp();
        }
    }
}

void colorsmp()
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
                cout<<menu[i];cmp=0;
                }
                if(i==1)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                cout<<menu[i];cmp=1;
                }
                if(i==2)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<menu[i];cmp=2;
                }
                if(i==3)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
                cout<<menu[i];cmp=3;
                }
                if(i==4)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<menu[i];cmp=4;
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
            {Sleep(200);
                string classa[50]={"1 ","2","3","4","5","6","7","8","9 ","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49    ","50 MAX"};
                int select=0;

    while(true)
    {
        cls();
        for(int i=0; i<51; i++)
        {
            if(i==select)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Set Kills: "<<classa[i];
                cout<<"\n  =================";
            }
        }
        while(true)
        {
            if(GetAsyncKeyState(VK_DOWN)!=0)
            {Sleep(100);
                select-=1;
                if(select==-1)
                {
                    select=0;
                }
                break;
            }
            if(GetAsyncKeyState(VK_UP)!=0)
            {Sleep(100);
                select+=1;
                if(select==50)
                {
                    select=49;
                }
                break;
            }
            if(GetAsyncKeyState(VK_ESCAPE))
            {
                Sleep(200);
                cls1();
                colorsint1=0;
                colorsint2=0;
                ship so;so.shipmp();
            }
            if(GetAsyncKeyState(VK_RETURN)!=0)
            {
                Sleep(200);
                switch(select)
                {
                    case 0:{setkill=1;cls1();multiplayer mu;mu.multiplayera();break;}case 1:{setkill=2;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 2:{setkill=3;cls1();multiplayer mu;mu.multiplayera();break;}case 3:{setkill=4;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 4:{setkill=5;cls1();multiplayer mu;mu.multiplayera();break;}case 5:{setkill=6;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 6:{setkill=7;cls1();multiplayer mu;mu.multiplayera();break;}case 7:{setkill=8;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 8:{setkill=9;cls1();multiplayer mu;mu.multiplayera();break;}case 9:{setkill=10;cls1();multiplayer mu;mu.multiplayera();break;}//10
                    case 10:{setkill=11;cls1();multiplayer mu;mu.multiplayera();break;}case 11:{setkill=12;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 12:{setkill=13;cls1();multiplayer mu;mu.multiplayera();break;}case 13:{setkill=14;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 14:{setkill=15;cls1();multiplayer mu;mu.multiplayera();break;}case 15:{setkill=16;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 16:{setkill=17;cls1();multiplayer mu;mu.multiplayera();break;}case 17:{setkill=18;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 18:{setkill=19;cls1();multiplayer mu;mu.multiplayera();break;}case 19:{setkill=20;cls1();multiplayer mu;mu.multiplayera();break;}//20
                    case 20:{setkill=21;cls1();multiplayer mu;mu.multiplayera();break;}case 21:{setkill=22;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 22:{setkill=23;cls1();multiplayer mu;mu.multiplayera();break;}case 23:{setkill=24;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 24:{setkill=25;cls1();multiplayer mu;mu.multiplayera();break;}case 25:{setkill=26;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 26:{setkill=27;cls1();multiplayer mu;mu.multiplayera();break;}case 27:{setkill=28;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 28:{setkill=29;cls1();multiplayer mu;mu.multiplayera();break;}case 29:{setkill=30;cls1();multiplayer mu;mu.multiplayera();break;}//30
                    case 30:{setkill=31;cls1();multiplayer mu;mu.multiplayera();break;}case 31:{setkill=32;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 32:{setkill=33;cls1();multiplayer mu;mu.multiplayera();break;}case 33:{setkill=34;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 34:{setkill=35;cls1();multiplayer mu;mu.multiplayera();break;}case 35:{setkill=36;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 36:{setkill=37;cls1();multiplayer mu;mu.multiplayera();break;}case 37:{setkill=38;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 38:{setkill=39;cls1();multiplayer mu;mu.multiplayera();break;}case 39:{setkill=40;cls1();multiplayer mu;mu.multiplayera();break;}//40
                    case 40:{setkill=41;cls1();multiplayer mu;mu.multiplayera();break;}case 41:{setkill=42;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 42:{setkill=43;cls1();multiplayer mu;mu.multiplayera();break;}case 43:{setkill=44;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 44:{setkill=45;cls1();multiplayer mu;mu.multiplayera();break;}case 45:{setkill=46;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 46:{setkill=47;cls1();multiplayer mu;mu.multiplayera();break;}case 47:{setkill=48;cls1();multiplayer mu;mu.multiplayera();break;}
                    case 48:{setkill=49;cls1();multiplayer mu;mu.multiplayera();break;}case 49:{setkill=50;cls1();multiplayer mu;mu.multiplayera();break;}//50
                }
            }
        }
    }
}
            else if(GetAsyncKeyState(VK_ESCAPE))
            {   Sleep(200);
                colorsint1=0;
                colorsint2=0;
                cls1();
                ship so;
                so.shipmp();
                break;
            }
        }
    }
}

// LEVEL MULTIPLAYERRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
void multiplayer::multiplayera()
{
    if(cmp==0)
    {
     system("color 09");
    }
    if(cmp==1)
    {
     system("color 0a");
    }
    if(cmp==2)
    {
     system("color 0c");
    }
    if(cmp==3)
    {
     system("color 0b");
    }
    if(cmp==4)
    {
     system("color 0e");
    }  // 09  blue   0c red

if(pmp==0)
{
    playermp='Ц';
}
if(pmp==1)
{
    playermp='и';
}
if(pmp==2)
{
    playermp='Ю';
}


if(p1mp==0)
{
    enemy1sprite='<';
}
if(p1mp==1)
{
    enemy1sprite='и';
}
if(p1mp==2)
{
    enemy1sprite='Ю';
}

//CHARACTERS

    char bullet=' ',bulleta=' ',bulletb=' ',bulletc=' ',bulletd=' ';
    char bullete=' ',bulletf=' ',bulletg=' ',bulleth=' ',bulleti=' ';

    char bulletj=' ',bulletk=' ',bulletl=' ',bulletm=' ',bulletn=' ';
    char bulleto=' ',bulletp=' ',bulletq=' ',bulletr=' ',bullets=' ';
    char exbull=' ';
    char exbull1=' ';
    char star=' ';

//POSITIONS

    int ppx=10, ppy=10;
    int bby=0, bbx=0, ay=0, ax=0, by=0, bx=0, cy=0, cx=0, dy=0, dx=0;
    int ey=0, ex=0, fy=0, fx=0, gy=0, gx=0, hy=0, hx=0, iy=0, ix=0,ccy=0,ccx=0;
    int exy=0,exx=0;

    int exy1=0,exx1=0;
//OTHERS

char u=' ',ua=' ',ub=' ',uc=' ',ud=' ',ue=' ',uf=' ',ug=' ',uh=' ',s=' ';
int uy=0;int ux=0;
int uay=0;int uax=0;
int uby=0;int ubx=0;
int ucy=0;int ucx=0;
int udy=0;int udx=0;
int uey=0;int uex=0;
int ufy=0;int ufx=0;
int ugy=0;int ugx=0;
int uhy=0;int uhx=0;

char u1=' ',ua1=' ',ub1=' ',uc1=' ',ud1=' ',ue1=' ',uf1=' ',ug1=' ',uh1=' ',s1=' ';
int uy1=0;int ux1=0;
int uay1=0;int uax1=0;
int uby1=0;int ubx1=0;
int ucy1=0;int ucx1=0;
int udy1=0;int udx1=0;
int uey1=0;int uex1=0;
int ufy1=0;int ufx1=0;
int ugy1=0;int ugx1=0;
int uhy1=0;int uhx1=0;

    int i=0,id=0;int ia=0;int m=0;
    int milliseconds=1;
    int seconds=0;
    int g=0;
    int points=0;
    int health=5;
    int shield=3, say=0,sax=0, sby=0, sbx=0, scy=0, scx=0, sdy=0, sdx=0, sey=0, sex=0;
    int ka=10000;
    int ushield=500;
    int rs=1;
    int explbull=5;
    int bchoice=0;
    string healtha;
    string heata;
    string name;
    int d=0;

    int i1=0,id1=0;int ia1=0;int m1=0;
    int milliseconds1=1;
    int seconds1=0;
    int g1=0;
    int points1=0;
    int health1=5;
    int shield1=3, say1=0,sax1=0, sby1=0, sbx1=0, scy1=0, scx1=0, sdy1=0, sdx1=0, sey1=0, sex1=0;
    int ka1=10000;
    int ushield1=500;
    int rs1=1;
    int explbull1=5;
    int bchoice1=0;
    string healtha1;
    string heata1;
    string name1;
    int d1=0;int po=0;int start=1;

    int hpint=0;

int enemy1x=68;
int enemy1y=10;

int jy=0, jx=0, ky=0, kx=0, ly=0, lx=0, my=0, mx=0, ny=0, nx=0;
int oy=0, ox=0, py=0, px=0, qy=0, qx=0, ry=0, rx=0, sy=0, sx=0;

    const char height=21, wight=78;
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
        "",

    };

    srand(time (NULL));
while(true)
{
    if(GetAsyncKeyState(VK_ESCAPE))
    {
       PlaySound(TEXT("Star Wars-Jedi Temple March.wav"),NULL,SND_ASYNC|SND_LOOP);
       Sleep(200);cout<<"\n\n\n\n\n\n\n\n\n\n\n                          ";system("pause");cls1();
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

    cout<<" HP:"<<healtha<<"| WALLS: "<<shield<<"| HEAT:"<<heata<<"| BOMBS: "<<explbull<<"|           KILLS: "<<points<<" vs "<<points1<<" / "<<setkill;
    cout<<"\n-------------------------------------------------------------------------------";
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

    space[ppy][ppx]=playermp;
    space[ccy][ccx]=star;
    space[exy][exx]=exbull;
    space[exy1][exx1]=exbull1;
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

    space[enemy1y][enemy1x]=enemy1sprite;

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
    space[sdy][sdx]=s;
    space[sey][sex]=s;

    space[uy1][ux1]=u1;
    space[uay1][uax1]=ua1;
    space[uby1][ubx1]=ub1;
    space[ucy1][ucx1]=uc1;
    space[udy1][udx1]=ud1;
    space[uey1][uex1]=ue1;
    space[ufy1][ufx1]=uf1;
    space[ugy1][ugx1]=ug1;
    space[uhy1][uhx1]=uh1;

    space[say1][sax1]=s1;
    space[sby1][sbx1]=s1;
    space[scy1][scx1]=s1;
    space[sdy1][sdx1]=s1;
    space[sey1][sex1]=s1;

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
            if((enemy1y!=1 && u1==' ')||(enemy1y!=1 && u1=='(' && space[enemy1y-1][enemy1x]!=u1))
            {space[enemy1y][enemy1x]=' ';
             enemy1y--;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            if((enemy1y+2<height && u1==' ')||(enemy1y+2<height && space[enemy1y+1][enemy1x]!=u1 && u1=='('))
            {space[enemy1y][enemy1x]=' ';
             enemy1y++;
            }
        }
        if(GetAsyncKeyState(VK_LEFT))
        {
            if((enemy1x-1>44 && u1==' ')||(enemy1x-1>44 && space[enemy1y][enemy1x-2]!=u1 && u1=='('))
            {space[enemy1y][enemy1x]=' ';
             enemy1x--;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            if((enemy1x+1<wight-2 && u1==' ')||(enemy1x+1<wight-2 && space[enemy1y][enemy1x+2]!=u1 && u1=='('))
            {space[enemy1y][enemy1x]=' ';
             enemy1x++;
            }
        }
//ME
        if(GetAsyncKeyState(0x57))
        {
            if((ppy!=1 && u==' ')||(ppy!=1 && u==')' && space[ppy-1][ppx]!=u))
            {space[ppy][ppx]=' ';
             ppy--;
            }
        }
        if(GetAsyncKeyState(0x53))
        {
            if((ppy+2<height && u==' ')||(ppy+2<height && space[ppy+1][ppx]!=u && u==')'))
            {space[ppy][ppx]=' ';
             ppy++;
            }
        }
        if(GetAsyncKeyState(0x41))
        {
            if((ppx-1>2 && u==' ')||(ppx-1>2 && space[ppy][ppx-2]!=u && u==')'))
            {space[ppy][ppx]=' ';
             ppx--;
            }
        }
        if(GetAsyncKeyState(0x44))
        {
            if((ppx+1<35 && u==' ')||(ppx+1<35 && space[ppy][ppx+2]!=u && u==')'))
            {space[ppy][ppx]=' ';
             ppx++;
            }
        }

//PLAYER 2 DEAD

        if(health1<=0&&points<setkill)
        {
            if(po==0)
            {seconds=0;milliseconds=8;po=1;i=12;ia=12;id=12;id1=12;explbull1=0;explbull=0;}

            if(seconds==0&&milliseconds==9)
            {points++;PlaySound(TEXT("bossexpl1 (mp3cut.net).wav"),NULL,SND_ASYNC);}

            if(seconds>=1&&seconds<4)
            {
                enemy1sprite=' ';space[enemy1y][enemy1x]=' ';  // TUMNO
            }
            if(seconds>=4&&milliseconds<5&&seconds<9) // SVETLO
            {
                if(seconds==4&&milliseconds==1)
                {PlaySound(TEXT("respawn (mp3cut.net).wav"),NULL,SND_ASYNC);}
                if(p1mp==0)
                {
                    enemy1sprite='<';
                }
                if(p1mp==1)
                {
                    enemy1sprite='и';
                }
                if(p1mp==2)
                {
                    enemy1sprite='Ю';
                }
            }
            if(seconds>=4&&seconds<9&&milliseconds>5)  // TUMNO
            {
                enemy1sprite=' ';
                space[enemy1y][enemy1x]=' ';
            }
            if(seconds==9&&po==1)
            {
                if(p1mp==0)
                {
                    enemy1sprite='<';
                }
                if(p1mp==1)
                {
                    enemy1sprite='и';
                }
                if(p1mp==2)
                {
                    enemy1sprite='Ю';
                }
                health1=5;
                po=0;
                i=1;ia=1;id=1;id1=1;explbull1=5;explbull=5;
            }
        }

//PLAYER 1 DEAD

        if(health<=0&&points1<setkill)
        {
            if(po==0)
            {seconds=0;milliseconds=8;po=1;i=12;ia=12;id=12;id1=12;explbull=0;explbull1=0;}

            if(seconds==0&&milliseconds==9)
            {points1++;PlaySound(TEXT("bossexpl1 (mp3cut.net).wav"),NULL,SND_ASYNC);}

            if(seconds>=1&&seconds<4)
            {
                playermp=' ';space[ppy][ppx]=' ';  // TUMNO
            }
            if(seconds>=4&&milliseconds<5&&seconds<9) // SVETLO
            {
                if(seconds==4&&milliseconds==1)
                {PlaySound(TEXT("respawn (mp3cut.net).wav"),NULL,SND_ASYNC);}
                if(pmp==0)
                {
                    playermp='Ц';
                }
                if(pmp==1)
                {
                    playermp='и';
                }
                if(pmp==2)
                {
                    playermp='Ю';
                }
            }
            if(seconds>=4&&seconds<9&&milliseconds>5)  // TUMNO
            {
                playermp=' ';
                space[ppy][ppx]=' ';
            }
            if(seconds==9&&po==1)
            {
                if(pmp==0)
                {
                    playermp='Ц';
                }
                if(pmp==1)
                {
                    playermp='и';
                }
                if(pmp==2)
                {
                    playermp='Ю';
                }
                health=5;
                po=0;
                i=1;ia=1;id=1;id1=1;explbull=5;explbull1=5;
            }
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


//SHIELD


        if((milliseconds==0 || milliseconds==5)&&shield>0)
        {
            if(GetAsyncKeyState(0x47)&&health>0) //G
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

//SHIELD 111111


        if((milliseconds==0 || milliseconds==5)&&shield1>0)
        {
            if(GetAsyncKeyState(VK_OEM_4)&&health1>0) // {[ key
            {
                if(shield1==3)
                {
                    uy1=enemy1y-1,ux1=enemy1x-2,uay1=enemy1y,uax1=enemy1x-2,uby1=enemy1y+1,ubx1=enemy1x-2;
                    u1='(',ua1='(',ub1='(';
                }
                if(shield1==2)
                {
                    ucy1=enemy1y-1,ucx1=enemy1x-2,udy1=enemy1y,udx1=enemy1x-2,uey1=enemy1y+1,uex1=enemy1x-2;
                    uc1='(',ud1='(',ue1='(';
                }
                if(shield1==1)
                {
                    ufy1=enemy1y-1,ufx1=enemy1x-2,ugy1=enemy1y,ugx1=enemy1x-2,uhy1=enemy1y+1,uhx1=enemy1x-2;
                    uf1='(',ug1='(',uh1='(';
                }
                shield1--;
            }
        }

//EXPLODING BULLETS

    if(milliseconds==0 || milliseconds==3 || milliseconds==6 || milliseconds==9)
    {
        if(explbull>0)
        {
        if(GetAsyncKeyState(0x4A)) //J
        {
            explbull--;
            space[exy][exx]=' ';
            exbull='~';
            exy=ppy;
            exx=ppx+1;
        }
        }
    }
    if(exbull=='~' && (exx+9!=wight||exx+10!=wight))
    {
        space[exy][exx]=' ';
        exx++;
    }
     if(exx==enemy1x||exx==enemy1x+1||exx==enemy1x-1||exx==enemy1x-2||exx==enemy1x+2||exx==enemy1x+3||exx==enemy1x-3||exx+15==78||exx+14==78||exx+13==78||exx+16==78)
        {
//FIRST EXPLOSION INSERT
            if((milliseconds==0||milliseconds==6)&&exbull=='~')
            {   if(exy-5<=0){exy=6;}if(exy+5>=height){exy=15;}
                if(enemy1sprite!=' '){PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);}
                exbull='{';
                space[exy][exx]='{';space[exy][exx+1]='}';space[exy][exx-2]='{';space[exy][exx+3]='}';
                space[exy-1][exx-1]='{';space[exy-1][exx+2]='}';space[exy+1][exx-1]='{';space[exy+1][exx+2]='}';
                space[exy][exx-4]='{';space[exy][exx+5]='}';space[exy-1][exx-3]='{';space[exy-1][exx+4]='}';
                space[exy+1][exx-3]='{';space[exy+1][exx+4]='}';
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
                space[exy+1][exx-3]=' ';space[exy+1][exx+4]=' ';
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
                space[exy+2][exx]='{';space[exy+2][exx+1]='}'; space[exy-1][exx-6]='{';space[exy-1][exx+7]='}';
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
        if(enemy1y<=exy+5&&enemy1y>=exy-5&&enemy1x>=exx-15&&enemy1x<=exx+15&&(milliseconds==0||milliseconds==2||milliseconds==6||milliseconds==8)&&exbull=='{')
        {
            health1=health1-1;
        }

//EXPLODING BULLETS 11111111111111111111111

    if(milliseconds==0 || milliseconds==3 || milliseconds==16 || milliseconds==9)
    {
        if(explbull1>0)
        {
        if(GetAsyncKeyState(VK_OEM_6)) // }] key
        {
            explbull1--;
            space[exy1][exx1]=' ';
            exbull1='~';
            exy1=enemy1y;
            exx1=enemy1x-1;
        }
        }
    }
    if(exbull1=='~' && (exx1-9!=0||exx1-10!=0))
    {
        space[exy1][exx1]=' ';
        exx1--;
    }
    if(exx1==ppx||exx1==ppx+1||exx1==ppx-1||exx1==ppx-2||exx1==ppx+2||exx1==ppx+3||exx1==ppx-3||exx1-15==0||exx1-14==0||exx1-13==0||exx1-16==0)
        {
//FIRST EXPLOSION INSERT
            if((milliseconds==0||milliseconds==6)&&exbull1=='~')
            {   if(exy1-5<=0){exy1=6;}if(exy1+5>=height){exy1=15;}
                if(playermp!=' '){PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);}
                exbull1='{';
                space[exy1][exx1]='{';space[exy1][exx1+1]='}';space[exy1][exx1-2]='{';space[exy1][exx1+3]='}';
                space[exy1-1][exx1-1]='{';space[exy1-1][exx1+2]='}';space[exy1+1][exx1-1]='{';space[exy1+1][exx1+2]='}';
                space[exy1][exx1-4]='{';space[exy1][exx1+5]='}';space[exy1-1][exx1-3]='{';space[exy1-1][exx1+4]='}';
                space[exy1+1][exx1-3]='{';space[exy1+1][exx1+4]='}';
                space[exy1-2][exx1]='{';space[exy1-2][exx1+1]='}';space[exy1+2][exx1]='{';space[exy1+2][exx1+1]='}';
                space[exy1-2][exx1-2]='{';space[exy1-2][exx1+3]='}';space[exy1+2][exx1-2]='{';space[exy1+2][exx1+3]='}';
            }
        }
            if((milliseconds==2||milliseconds==8)&&exbull1=='{')
            {
//SECOND EXPLOSION INSERT
                space[exy1][exx1]=' ';space[exy1][exx1+1]=' ';space[exy1][exx1-2]=' ';space[exy1][exx1+3]=' ';
                space[exy1-1][exx1-1]=' ';space[exy1-1][exx1+2]=' ';space[exy1+1][exx1-1]=' ';space[exy1+1][exx1+2]=' ';
                space[exy1][exx1-4]=' ';space[exy1][exx1+5]=' ';space[exy1-1][exx1-3]=' ';space[exy1-1][exx1+4]=' ';
                space[exy1+1][exx1-3]=' ';space[exy1+1][exx1+4]=' ';
                space[exy1-2][exx1]=' ';space[exy1-2][exx1+1]=' ';space[exy1+2][exx1]=' ';space[exy1+2][exx1+1]=' ';
                space[exy1-2][exx1-2]=' ';space[exy1-2][exx1+3]=' ';space[exy1+2][exx1-2]=' ';space[exy1+2][exx1+3]=' ';
                space[exy1][exx1-8]='{';space[exy1][exx1-4]='{';space[exy1][exx1]='{';space[exy1][exx1+1]='}';
                space[exy1][exx1+5]='}';space[exy1][exx1+9]='}';space[exy1-1][exx1-8]='{';space[exy1-1][exx1-4]='{';
                space[exy1-1][exx1-2]='{';space[exy1-2][exx1-7]='{';space[exy1-2][exx1-5]='{';space[exy1-2][exx1-2]='{';
                space[exy1-3][exx1-6]='{';space[exy1-3][exx1-3]='{';space[exy1-3][exx1-1]='{';space[exy1-4][exx1-5]='{';
                space[exy1-4][exx1-3]='{';space[exy1-4][exx1]='{';space[exy1-5][exx1-4]='{';space[exy1-5][exx1-1]='{';
                space[exy1+1][exx1-8]='{';space[exy1+1][exx1-4]='{';space[exy1+1][exx1-2]='{';space[exy1+2][exx1-7]='{';
                space[exy1+2][exx1-5]='{';space[exy1+2][exx1-2]='{';space[exy1+3][exx1-6]='{';space[exy1+3][exx1-3]='{';
                space[exy1+3][exx1-1]='{';space[exy1+4][exx1-5]='{';space[exy1+4][exx1-3]='{';space[exy1+4][exx1]='{';
                space[exy1+5][exx1-4]='{';space[exy1+5][exx1-1]='{';space[exy1-1][exx1+9]='}';space[exy1-1][exx1+5]='}';
                space[exy1-1][exx1+3]='}';space[exy1-2][exx1+8]='}';space[exy1-2][exx1+6]='}';space[exy1-2][exx1+3]='}';
                space[exy1-3][exx1+7]='}';space[exy1-3][exx1+4]='}';space[exy1-3][exx1+2]='}';space[exy1-4][exx1+6]='}';
                space[exy1-4][exx1+4]='}';space[exy1-4][exx1+1]='}';space[exy1-5][exx1+5]='}';space[exy1-5][exx1+2]='}';
                space[exy1+1][exx1+9]='}';space[exy1+1][exx1+5]='}';space[exy1+1][exx1+3]='}';space[exy1+2][exx1+8]='}';
                space[exy1+2][exx1+6]='}';space[exy1+2][exx1+3]='}';space[exy1+3][exx1+7]='}';space[exy1+3][exx1+4]='}';
                space[exy1+3][exx1+2]='}';space[exy1+4][exx1+6]='}';space[exy1+4][exx1+4]='}';space[exy1+4][exx1+1]='}';
                space[exy1+5][exx1+5]='}';space[exy1+5][exx1+2]='}';space[exy1-2][exx1]='{';space[exy1-2][exx1+1]='}';
                space[exy1+2][exx1]='{';space[exy1+2][exx1+1]='}';space[exy1-1][exx1-6]='{';space[exy1-1][exx1+7]='}';
                space[exy1+1][exx1-6]='{';space[exy1+1][exx1+7]='}';
            }
            if((milliseconds==4||milliseconds==10)&&exbull1=='{')
            {
//SECOND EXPLOSION DELETE
                space[exy1][exx1]=' ';space[exy1][exx1+1]=' ';space[exy1][exx1-2]=' ';space[exy1][exx1+3]=' ';
                space[exy1-1][exx1-1]=' ';space[exy1-1][exx1+2]=' ';space[exy1+1][exx1-1]=' ';space[exy1+1][exx1+2]=' ';
                space[exy1][exx1-4]=' ';space[exy1][exx1+5]=' ';space[exy1-1][exx1-3]=' ';space[exy1-1][exx1+4]=' ';
                space[exy1+1][exx1-3]=' ';space[exy1+1][exx1+4]=' ';
                space[exy1-2][exx1]=' ';space[exy1-2][exx1+1]=' ';space[exy1+2][exx1]=' ';space[exy1+2][exx1+1]=' ';
                space[exy1-2][exx1-2]=' ';space[exy1-2][exx1+3]=' ';space[exy1+2][exx1-2]=' ';space[exy1+2][exx1+3]=' ';
                space[exy1][exx1-8]=' ';space[exy1][exx1-4]=' ';space[exy1][exx1]=' ';space[exy1][exx1+1]=' ';
                space[exy1][exx1+5]=' ';space[exy1][exx1+9]=' ';space[exy1-1][exx1-8]=' ';space[exy1-1][exx1-4]=' ';
                space[exy1-1][exx1-2]=' ';space[exy1-2][exx1-7]=' ';space[exy1-2][exx1-5]=' ';space[exy1-2][exx1-2]=' ';
                space[exy1-3][exx1-6]=' ';space[exy1-3][exx1-3]=' ';space[exy1-3][exx1-1]=' ';space[exy1-4][exx1-5]=' ';
                space[exy1-4][exx1-3]=' ';space[exy1-4][exx1]=' ';space[exy1-5][exx1-4]=' ';space[exy1-5][exx1-1]=' ';
                space[exy1+1][exx1-8]=' ';space[exy1+1][exx1-4]=' ';space[exy1+1][exx1-2]=' ';space[exy1+2][exx1-7]=' ';
                space[exy1+2][exx1-5]=' ';space[exy1+2][exx1-2]=' ';space[exy1+3][exx1-6]=' ';space[exy1+3][exx1-3]=' ';
                space[exy1+3][exx1-1]=' ';space[exy1+4][exx1-5]=' ';space[exy1+4][exx1-3]=' ';space[exy1+4][exx1]=' ';
                space[exy1+5][exx1-4]=' ';space[exy1+5][exx1-1]=' ';space[exy1-1][exx1+9]=' ';space[exy1-1][exx1+5]=' ';
                space[exy1-1][exx1+3]=' ';space[exy1-2][exx1+8]=' ';space[exy1-2][exx1+6]=' ';space[exy1-2][exx1+3]=' ';
                space[exy1-3][exx1+7]=' ';space[exy1-3][exx1+4]=' ';space[exy1-3][exx1+2]=' ';space[exy1-4][exx1+6]=' ';
                space[exy1-4][exx1+4]=' ';space[exy1-4][exx1+1]=' ';space[exy1-5][exx1+5]=' ';space[exy1-5][exx1+2]=' ';
                space[exy1+1][exx1+9]=' ';space[exy1+1][exx1+5]=' ';space[exy1+1][exx1+3]=' ';space[exy1+2][exx1+8]=' ';
                space[exy1+2][exx1+6]=' ';space[exy1+2][exx1+3]=' ';space[exy1+3][exx1+7]=' ';space[exy1+3][exx1+4]=' ';
                space[exy1+3][exx1+2]=' ';space[exy1+4][exx1+6]=' ';space[exy1+4][exx1+4]=' ';space[exy1+4][exx1+1]=' ';
                space[exy1+5][exx1+5]=' ';space[exy1+5][exx1+2]=' ';space[exy1-2][exx1]=' ';space[exy1-2][exx1+1]=' ';
                space[exy1+2][exx1]=' ';space[exy1+2][exx1+1]=' ';space[exy1-1][exx1-6]=' ';space[exy1-1][exx1+7]=' ';
                space[exy1+1][exx1-6]=' ';space[exy1+1][exx1+7]=' ';
                exy1=20;exx1=77;exbull1=' ';seconds=1;
            }
        if(ppy<=exy1+5&&ppy>=exy1-5&&ppx>=exx1-15&&ppx<=exx1+15&&(milliseconds==0||milliseconds==2||milliseconds==6||milliseconds==8)&&exbull1=='{')
        {
            health=health-1;
        }

//PLAYER BULLET RESPAWNING

    if(g>0)
    {g--;}
    if(g1>0)
    {g1--;}

    if(milliseconds==0 || milliseconds==3 || milliseconds==6 || milliseconds==9)
    {
        if(GetAsyncKeyState(VK_SPACE)&&i<12)
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

    if(milliseconds==1 || milliseconds==4 || milliseconds==7 || milliseconds==10)
    {
        if(GetAsyncKeyState(0x48)&&id<12) //H
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

//ENEMY BULLET RESPAWNING

    if(milliseconds==0 || milliseconds==3 || milliseconds==6 || milliseconds==9)
    {
        if(GetAsyncKeyState(VK_RCONTROL)&&ia<12) // RCNTRL
        {
            if(g1<80)
            {
                g1++;
                g1++;
                g1++;
                g1++;
                g1++;
            }
            if(g1<50)
            {
                ia++;
                PlaySound(TEXT("257232__javierzumer__retro-shot-blaster.wav"),NULL,SND_ASYNC);

            if(ia==11)
            {
                ia=1;
            }

            if(ia==1)
            {   space[jy][jx]=' ';
                bulletj='-';
                jy=enemy1y;
                jx=enemy1x;
            }
            if(ia==2)
            {   space[ky][kx]=' ';
                bulletk='-';
                ky=enemy1y;
                kx=enemy1x;
            }
            if(ia==3)
            {   space[ly][lx]=' ';
                bulletl='-';
                ly=enemy1y;
                lx=enemy1x;
            }
            if(ia==4)
            {   space[my][mx]=' ';
                bulletm='-';
                my=enemy1y;
                mx=enemy1x;
            }
            if(ia==5)
            {   space[ny][nx]=' ';
                bulletn='-';
                ny=enemy1y;
                nx=enemy1x;
            }
            if(ia==6)
            {   space[oy][ox]=' ';
                bulleto='-';
                oy=enemy1y;
                ox=enemy1x;
            }
            if(ia==7)
            {   space[py][px]=' ';
                bulletp='-';
                py=enemy1y;
                px=enemy1x;
            }
            if(ia==8)
            {   space[qy][qx]=' ';
                bulletq='-';
                qy=enemy1y;
                qx=enemy1x;
            }
            if(ia==9)
            {   space[ry][rx]=' ';
                bulletr='-';
                ry=enemy1y;
                rx=enemy1x;
            }
            if(ia==10)
            {   space[sy][sx]=' ';
                bullets='-';
                sy=enemy1y;
                sx=enemy1x;
            }
        }
    }
}
    if(milliseconds==1 || milliseconds==4 || milliseconds==7 || milliseconds==10)
    {
        if(GetAsyncKeyState(VK_OEM_5)&&id1<12) //DUAL 11111   \| key
        {
            if(g1<80)
            {
                g1++;
                g1++;
                g1++;
                g1++;
                g1++;
            }
            if(g1<50)
            {
                id1++;
                PlaySound(TEXT("257232__javierzumer__retro-shot-blaster.wav"),NULL,SND_ASYNC);
                if(id1==6)
                {
                    id1=1;
                }

                if(id1==1)
                {   space[jy][jx]=' ';
                    space[ky][kx]=' ';
                    bulletj='-';
                    bulletk='-';
                    jy=enemy1y-1;
                    jx=enemy1x-1;
                    ky=enemy1y+1;
                    kx=enemy1x-1;
                }
                if(id1==2)
                {
                    space[ly][lx]=' ';
                    space[my][mx]=' ';
                    bulletl='-';
                    bulletm='-';
                    ly=enemy1y-1;
                    lx=enemy1x-1;
                    my=enemy1y+1;
                    mx=enemy1x-1;
                }
                if(id1==3)
                {
                    space[ny][nx]=' ';
                    space[oy][ox]=' ';
                    bulletn='-';
                    bulleto='-';
                    ny=enemy1y-1;
                    nx=enemy1x-1;
                    oy=enemy1y+1;
                    ox=enemy1x-1;
                }
                if(id1==4)
                {
                    space[py][px]=' ';
                    space[qy][qx]=' ';
                    bulletp='-';
                    bulletq='-';
                    py=enemy1y-1;
                    px=enemy1x-1;
                    qy=enemy1y+1;
                    qx=enemy1x-1;
                }
                if(id1==5)
                {
                    space[ry][rx]=' ';
                    space[sy][sx]=' ';
                    bulletr='-';
                    bullets='-';
                    ry=enemy1y-1;
                    rx=enemy1x-1;
                    sy=enemy1y+1;
                    sx=enemy1x-1;
                }
            }
        }
    }

//PLAYER

//BULLET
        if(bullet=='-' && ((space[bby][bbx+1]!=enemy1sprite)||(space[bby][bbx+2]!=enemy1sprite)||(space[bby][bbx+1]!='(')||(space[bby][bbx+2]!='(') ))
        {space[bby][bbx]=' ';
            bbx++;
            bbx++;

            if(bbx+1==78||bbx+2==78||(space[bby][bbx+1]=='(')||(space[bby][bbx+2]=='('))
            {bby=20;bbx=77;bullet=' ';}
        }
        if(enemy1sprite!=' '&&bby==enemy1y&&(bbx==enemy1x||bbx==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bullet=' ';bby=20;bbx=77;
            health1--;
        }
//AAAA
        if(bulleta=='-' && ((space[ay][ax+1]!=enemy1sprite)||(space[ay][ax+2]!=enemy1sprite)||(space[ay][ax+1]!='(')||(space[ay][ax+2]!='(') ))
        {space[ay][ax]=' ';
            ax++;
            ax++;

            if(ax+1==78||ax+2==78||(space[ay][ax+1]=='(')||(space[ay][ax+2]=='('))
            {ay=20;ax=77;bulleta=' ';}
        }
        if(enemy1sprite!=' '&&ay==enemy1y&&(ax==enemy1x||ax==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulleta=' ';ay=20;ax=77;
            health1--;
        }
//BBBB
        if(bulletb=='-' && ((space[by][bx+1]!=enemy1sprite)||(space[by][bx+2]!=enemy1sprite)||(space[by][bx+1]!='(')||(space[by][bx+2]!='(') ))
        {space[by][bx]=' ';
            bx++;
            bx++;

            if(bx+1==78||bx+2==78||(space[by][bx+1]=='(')||(space[by][bx+2]=='('))
            {by=20;bx=77;bulletb=' ';}
        }
        if(enemy1sprite!=' '&&by==enemy1y&&(bx==enemy1x||bx==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletb=' ';by=20;bx=77;
            health1--;
        }

//CCCC
        if(bulletc=='-' && ((space[cy][cx+1]!=enemy1sprite)||(space[cy][cx+2]!=enemy1sprite)||(space[cy][cx+1]!='(')||(space[cy][cx+2]!='(') ))
        {space[cy][cx]=' ';
            cx++;
            cx++;

            if(cx+1==78||cx+2==78||(space[cy][cx+1]=='(')||(space[cy][cx+2]=='('))
            {cy=20;cx=77;bulletc=' ';}
        }
        if(enemy1sprite!=' '&&cy==enemy1y&&(cx==enemy1x||cx==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletc=' ';cy=20;cx=77;
            health1--;
        }

//DDDD
        if(bulletd=='-' && ((space[dy][dx+1]!=enemy1sprite)||(space[dy][dx+2]!=enemy1sprite)||(space[dy][dx+1]!='(')||(space[dy][dx+2]!='(') ))
        {space[dy][dx]=' ';
            dx++;
            dx++;

            if(dx+1==78||dx+2==78||(space[dy][dx+1]=='(')||(space[dy][dx+2]=='('))
            {dy=20;dx=77;bulletd=' ';}
        }
        if(enemy1sprite!=' '&&dy==enemy1y&&(dx==enemy1x||dx==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletd=' ';dy=20;dx=77;
            health1--;
        }

//EEEE
        if(bullete=='-' && ((space[ey][ex+1]!=enemy1sprite)||(space[ey][ex+2]!=enemy1sprite)||(space[ey][ex+1]!='(')||(space[ey][ex+2]!='(') ))
        {space[ey][ex]=' ';
            ex++;
            ex++;

            if(ex+1==78||ex+2==78||(space[ey][ex+1]=='(')||(space[ey][ex+2]=='('))
            {ey=20;ex=77;bullete=' ';}
        }
        if(enemy1sprite!=' '&&ey==enemy1y&&(ex==enemy1x||ex==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bullete=' ';ey=20;ex=77;
            health1--;
        }

//FFFF
        if(bulletf=='-' && ((space[fy][fx+1]!=enemy1sprite)||(space[fy][fx+2]!=enemy1sprite)||(space[fy][fx+1]!='(')||(space[fy][fx+2]!='(') ))
        {space[fy][fx]=' ';
            fx++;
            fx++;

            if(fx+1==78||fx+2==78||(space[fy][fx+1]=='(')||(space[fy][fx+2]=='('))
            {fy=20;fx=77;bulletf=' ';}
        }
        if(enemy1sprite!=' '&&fy==enemy1y&&(fx==enemy1x||fx==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletf=' ';fy=20;fx=77;
            health1--;
        }

//GGGG
        if(bulletg=='-' && ((space[gy][gx+1]!=enemy1sprite)||(space[gy][gx+2]!=enemy1sprite)||(space[gy][gx+1]!='(')||(space[gy][gx+2]!='(') ))
        {space[gy][gx]=' ';
            gx++;
            gx++;

            if(gx+1==78||gx+2==78||(space[gy][gx+1]=='(')||(space[gy][gx+2]=='('))
            {gy=20;gx=77;bulletg=' ';}
        }
        if(enemy1sprite!=' '&&gy==enemy1y&&(gx==enemy1x||gx==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulletg=' ';gy=20;gx=77;
            health1--;
        }

//HHHHH
        if(bulleth=='-' && ((space[hy][hx+1]!=enemy1sprite)||(space[hy][hx+2]!=enemy1sprite)||(space[hy][hx+1]!='(')||(space[hy][hx+2]!='(') ))
        {space[hy][hx]=' ';
            hx++;
            hx++;

            if(hx+1==78||hx+2==78||(space[hy][hx+1]=='(')||(space[hy][hx+2]=='('))
            {hy=20;hx=77;bulleth=' ';}
        }
        if(enemy1sprite!=' '&&hy==enemy1y&&(hx==enemy1x||hx==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulleth=' ';hy=20;hx=77;
            health1--;
        }

//IIII
        if(bulleti=='-' && ((space[iy][ix+1]!=enemy1sprite)||(space[iy][ix+2]!=enemy1sprite)||(space[iy][ix+1]!='(')||(space[iy][ix+2]!='(') ))
        {space[iy][ix]=' ';
            ix++;
            ix++;

            if(ix+1==78||ix+2==78||(space[iy][ix+1]=='(')||(space[iy][ix+2]=='('))
            {iy=20;ix=77;bulleti=' ';}
        }
        if(enemy1sprite!=' '&&iy==enemy1y&&(ix==enemy1x||ix==enemy1x-1)&&m1==0)
        {
            PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            bulleti=' ';iy=20;ix=77;
            health1--;
        }


//ENEMIE FIREEEEEEEEEEEEEEEEEE   JJJJJJJJ

if(bulletj=='-' && ((space[jy][jx-1]!=playermp)||(space[jy][jx-2]!=playermp)||(space[jy][jx-1]!=')')||(space[jy][jx-2]!=')') ))
        {
            space[jy][jx]=' ';
            jx--;
            jx--;
            if(jx-1==0||jx-2==0||(space[jy][jx-1]==')')||(space[jy][jx-2]==')'))
            {bulletj=' ';jy=0;jx=77;}
        }
        if(playermp!=' '&&jy==ppy&&(jx==ppx||jx==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulletj=' ';jy=0;jx=77;}

//KKKKKKKKK
        if(bulletk=='-' && ((space[ky][kx-1]!=playermp)||(space[ky][kx-2]!=playermp)||(space[ky][kx-1]!=')')||(space[ky][kx-2]!=')') ))
        {
            space[ky][kx]=' ';
            kx--;
            kx--;
            if(kx-1==0||kx-2==0||(space[ky][kx-1]==')')||(space[ky][kx-2]==')'))
            {bulletk=' ';ky=0;kx=77;}
        }
        if(playermp!=' '&&ky==ppy&&(kx==ppx||kx==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulletk=' ';ky=0;kx=77;}

//LLLLLLLLLL
if(bulletl=='-' && ((space[ly][lx-1]!=playermp)||(space[ly][lx-2]!=playermp)||(space[ly][lx-1]!=')')||(space[ly][lx-2]!=')') ))
        {
            space[ly][lx]=' ';
            lx--;
            lx--;
            if(lx-1==0||lx-2==0||(space[ly][lx-1]==')')||(space[ly][lx-2]==')'))
            {bulletl=' ';ly=0;lx=77;}
        }
        if(playermp!=' '&&ly==ppy&&(lx==ppx||lx==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulletl=' ';ly=0;lx=77;}

//MMMMMMMMMMMM
if(bulletm=='-' && ((space[my][mx-1]!=playermp)||(space[my][mx-2]!=playermp)||(space[my][mx-1]!=')')||(space[my][mx-2]!=')') ))
        {
            space[my][mx]=' ';
            mx--;
            mx--;
            if(mx-1==0||mx-2==0||(space[my][mx-1]==')')||(space[my][mx-2]==')'))
            {bulletm=' ';my=0;mx=77;}
        }
        if(playermp!=' '&&my==ppy&&(mx==ppx||mx==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulletm=' ';my=0;mx=77;}

//NNNNNNNNNNNNN
if(bulletn=='-' && ((space[ny][nx-1]!=playermp)||(space[ny][nx-2]!=playermp)||(space[ny][nx-1]!=')')||(space[ny][nx-2]!=')') ))
        {
            space[ny][nx]=' ';
            nx--;
            nx--;
            if(nx-1==0||nx-2==0||(space[ny][nx-1]==')')||(space[ny][nx-2]==')'))
            {bulletn=' ';ny=0;nx=77;}
        }
        if(playermp!=' '&&ny==ppy&&(nx==ppx||nx==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulletn=' ';ny=0;nx=77;}

//OOOOOOOOOOO
if(bulleto=='-' && ((space[oy][ox-1]!=playermp)||(space[oy][ox-2]!=playermp)||(space[oy][ox-1]!=')')||(space[oy][ox-2]!=')') ))
        {
            space[oy][ox]=' ';
            ox--;
            ox--;
            if(ox-1==0||ox-2==0||(space[oy][ox-1]==')')||(space[oy][ox-2]==')'))
            {bulleto=' ';oy=0;ox=77;}
        }
        if(playermp!=' '&&oy==ppy&&(ox==ppx||ox==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulleto=' ';oy=0;ox=77;}

//PPPPPPPPPPP
if(bulletp=='-' && ((space[py][px-1]!=playermp)||(space[py][px-2]!=playermp)||(space[py][px-1]!=')')||(space[py][px-2]!=')') ))
        {
            space[py][px]=' ';
            px--;
            px--;
            if(px-1==0||px-2==0||(space[py][px-1]==')')||(space[py][px-2]==')'))
            {bulletp=' ';py=0;px=77;}
        }
        if(playermp!=' '&&py==ppy&&(px==ppx||px==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulletp=' ';py=0;px=77;}

//QQQQQQQQQQQQ
if(bulletq=='-' && ((space[qy][qx-1]!=playermp)||(space[qy][qx-2]!=playermp)||(space[qy][qx-1]!=')')||(space[qy][qx-2]!=')') ))
        {
            space[qy][qx]=' ';
            qx--;
            qx--;
            if(qx-1==0||qx-2==0||(space[qy][qx-1]==')')||(space[qy][qx-2]==')'))
            {bulletq=' ';qy=0;qx=77;}
        }
        if(playermp!=' '&&qy==ppy&&(qx==ppx||qx==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulletq=' ';qy=0;qx=77;}

//RRRRRRRRRRRRRRRRR
if(bulletr=='-' && ((space[ry][rx-1]!=playermp)||(space[ry][rx-2]!=playermp)||(space[ry][rx-1]!=')')||(space[ry][rx-2]!=')') ))
        {
            space[ry][rx]=' ';
            rx--;
            rx--;
            if(rx-1==0||rx-2==0||(space[ry][rx-1]==')')||(space[ry][rx-2]==')'))
            {bulletr=' ';ry=0;rx=77;}
        }
        if(playermp!=' '&&ry==ppy&&(rx==ppx||rx==ppx+1)&&m==0)
        {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bulletr=' ';ry=0;rx=77;}

//SSSSSSSSSSSSS
if(bullets=='-' && ((space[sy][sx-1]!=playermp)||(space[sy][sx-2]!=playermp)||(space[sy][sx-1]!=')')||(space[sy][sx-2]!=')') ))
        {
            space[sy][sx]=' ';
            sx--;
            sx--;
            if(sx-1==0||sx-2==0||(space[sy][sx-1]==')')||(space[sy][sx-2]==')'))
            {bullets=' ';sy=0;sx=77;}
        }
          if(playermp!=' '&&sy==ppy&&(sx==ppx||sx==ppx+1)&&m==0)
            {PlaySound(TEXT("explosion.wav"),NULL,SND_ASYNC);
            health--;bullets=' ';sy=0;sx=77;}

//INTERFACE

    if(health1==5)
    {
        healtha1="ооооо";
    }
    if(health1==4)
    {
        healtha1="оооо ";
    }
    if(health1==3)
    {
        healtha1="ооо  ";
    }
    if(health1==2)
    {
        healtha1="оо   ";
    }
    if(health1==1)
    {
        healtha1="о    ";
    }
    if(health1==0)
    {
        healtha1="     ";
    }

    cout<<"  -------------------------------------------------------------------------------\n";
    cout<<"                                  | BOMBS: "<<explbull1<<"| WALLS: "<<shield1<<"| HEAT:"<<heata1<<"| HP:"<<healtha1<<"|";
    if(g1>=50){
   heata1="ооооо";
}
if(g1>=40&&g1<50){
   heata1="оооо ";
}
if(g1>=30&&g1<40){
   heata1="ооо  ";
}
if(g1>=20&&g1<30){
   heata1="оо   ";
}
if(g1>=10&&g1<20){
   heata1="о    ";
}
if(g1>=0&&g1<10){
   heata1="     ";
}

//COMPLETE LEVEL

if(points>=setkill)
{
    PlaySound(TEXT("jingle-lose-00.wav"),NULL,SND_ASYNC);
    Sleep(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cls();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n                                PLAYER 1 WINS !!!\n\n";
    Sleep(4000);
    if(points1==0)
    {   PlaySound(TEXT("MK4 (online-audio-converter.com).wav"),NULL,SND_ASYNC);
        cout<<"                                FLAWLESS VICTORY\n\n                         ";
        Sleep(2000);
        completelvl();
    }completelvl();
}
if(points1>=setkill)
{
    PlaySound(TEXT("jingle-lose-00.wav"),NULL,SND_ASYNC);
    Sleep(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cls();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n                                PLAYER 2 WINS !!!\n\n";
    Sleep(4000);
    if(points==0)
    {   PlaySound(TEXT("MK4 (online-audio-converter.com).wav"),NULL,SND_ASYNC);
        cout<<"                                FLAWLESS VICTORY\n\n                         ";
        Sleep(2000);
        completelvl();
    }completelvl();
}
cls();
if(start==1)
{
    PlaySound(TEXT("3,2,1 Fight.wav"),NULL,SND_ASYNC);
    cout<<"\n\n\n\n\n\n\n\n\n\n\n                                         3";Sleep(1000);cls();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n                                         2";Sleep(1000);cls();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n                                         1";Sleep(2300);cls();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n                                       FIGHT";Sleep(1000);cls();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n                                            ";start=0;cls();
}

}
}
