#include "records.h"
#include "menu.h"
#include "map.h"
#include "windows.h"
#include <iostream>
#include "fstream"
#include "challenge.h"

using namespace std;

void menua();
void cls();
void cls1();

void records::recorda()
{
   int score1,score2,score3,score4,score5,score6,score7,score8,score9,score10;

    string name1,name2,name3;

    ifstream filea;
    filea.open("score1.txt");
    string line1;
    while(filea.good())
    {
        getline(filea,line1);
        score1=atoi(line1.c_str());
    }

    ifstream fileb;
    fileb.open("score2.txt");
    string line2;
    while(fileb.good())
    {
        getline(fileb,line2);
        score2=atoi(line2.c_str());
    }

    ifstream filec;
    filec.open("score3.txt");
    string line3;
    while(filec.good())
    {
        getline(filec,line3);
        score3=atoi(line3.c_str());
    }

    ifstream filed;
    filed.open("score4.txt");
    string line4;
    while(filed.good())
    {
        getline(filed,line4);
        score4=atoi(line4.c_str());
    }

    ifstream filef;
    filef.open("score5.txt");
    string line5;
    while(filef.good())
    {
        getline(filef,line5);
        score5=atoi(line5.c_str());
    }

    ifstream fileg;
    fileg.open("score6.txt");
    string line6;
    while(fileg.good())
    {
        getline(fileg,line6);
        score6=atoi(line6.c_str());
    }

    ifstream fileh;
    fileh.open("score7.txt");
    string line7;
    while(fileh.good())
    {
        getline(fileh,line7);
        score7=atoi(line7.c_str());
    }

    ifstream filei;
    filei.open("score8.txt");
    string line8;
    while(filei.good())
    {
        getline(filei,line8);
        score8=atoi(line8.c_str());
    }

    ifstream filej;
    filej.open("score9.txt");
    string line9;
    while(filej.good())
    {
        getline(filej,line9);
        score9=atoi(line9.c_str());
    }
    ifstream filek;
    filek.open("score10.txt");
    string line10;
    while(filek.good())
    {
        getline(filek,line10);
        score10=atoi(line10.c_str());
    }
        int i,j;
        string name[10];
        int numb[10];
        int index[10];

        numb[0]=score1;
        numb[1]=score2;
        numb[2]=score3;
        numb[3]=score4;
        numb[4]=score5;
        numb[5]=score6;
        numb[6]=score7;
        numb[7]=score8;
        numb[8]=score9;
        numb[9]=score10;

        name[0]=line1;
        name[1]=line2;
        name[2]=line3;
        name[3]=line4;
        name[4]=line5;
        name[5]=line6;
        name[6]=line7;
        name[7]=line8;
        name[8]=line9;
        name[9]=line10;

        for(i=0;i<=9;i++)
        {
            index[i]=i;
        }

        for(i=0;i<=8;i++)
        {
            for(j=i+1;j<=9;j++)
            {
                int temp;

                if(numb[index[i]]<numb[index[j]])
                {
                    temp=index[i];
                    index[i]=index[j];
                    index[j]=temp;
                }
            }
        }

        cls();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                           ====== TOP FIGHTERS ======                          \n\n";
            cout<<"                                   1. "<<name[index[0]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"                                                                ооооо          \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо               ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 2. "<<name[index[1]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);cout<<"                                          ооооо           \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо               ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 3. "<<name[index[2]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);cout<<"                                       ооооо               \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"         ооооооооооооооо          ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 4. "<<name[index[3]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"                                                       ооооо                   \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"         ооооооооооооооо          ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 5. "<<name[index[4]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);cout<<"                                       ооооо               \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо               ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 6. "<<name[index[5]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);cout<<"                                          ооооо           \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо               ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 7. "<<name[index[6]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"                                                                ооооо          \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                   8. "<<name[index[7]]<<"\n";
            cout<<"                                                                         \n";
            cout<<"                                   9. "<<name[index[8]];


    while(true)
    {
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            Sleep(200);
            cls1();
            menua();
        }
    }
}


void records::recordb()
{
   int score1,score2,score3,score4,score5,score6,score7,score8,score9,score10;

    string name1,name2,name3;

    ifstream filea;
    filea.open("score1.txt");
    string line1;
    while(filea.good())
    {
        getline(filea,line1);
        score1=atoi(line1.c_str());
    }

    ifstream fileb;
    fileb.open("score2.txt");
    string line2;
    while(fileb.good())
    {
        getline(fileb,line2);
        score2=atoi(line2.c_str());
    }

    ifstream filec;
    filec.open("score3.txt");
    string line3;
    while(filec.good())
    {
        getline(filec,line3);
        score3=atoi(line3.c_str());
    }

    ifstream filed;
    filed.open("score4.txt");
    string line4;
    while(filed.good())
    {
        getline(filed,line4);
        score4=atoi(line4.c_str());
    }

    ifstream filef;
    filef.open("score5.txt");
    string line5;
    while(filef.good())
    {
        getline(filef,line5);
        score5=atoi(line5.c_str());
    }

    ifstream fileg;
    fileg.open("score6.txt");
    string line6;
    while(fileg.good())
    {
        getline(fileg,line6);
        score6=atoi(line6.c_str());
    }

    ifstream fileh;
    fileh.open("score7.txt");
    string line7;
    while(fileh.good())
    {
        getline(fileh,line7);
        score7=atoi(line7.c_str());
    }

    ifstream filei;
    filei.open("score8.txt");
    string line8;
    while(filei.good())
    {
        getline(filei,line8);
        score8=atoi(line8.c_str());
    }

    ifstream filej;
    filej.open("score9.txt");
    string line9;
    while(filej.good())
    {
        getline(filej,line9);
        score9=atoi(line9.c_str());
    }
    ifstream filek;
    filek.open("score10.txt");
    string line10;
    while(filek.good())
    {
        getline(filek,line10);
        score10=atoi(line10.c_str());
    }
        int i,j;
        string name[10];
        int numb[10];
        int index[10];

        numb[0]=score1;
        numb[1]=score2;
        numb[2]=score3;
        numb[3]=score4;
        numb[4]=score5;
        numb[5]=score6;
        numb[6]=score7;
        numb[7]=score8;
        numb[8]=score9;
        numb[9]=score10;

        name[0]=line1;
        name[1]=line2;
        name[2]=line3;
        name[3]=line4;
        name[4]=line5;
        name[5]=line6;
        name[6]=line7;
        name[7]=line8;
        name[8]=line9;
        name[9]=line10;

        for(i=0;i<=9;i++)
        {
            index[i]=i;
        }

        for(i=0;i<=8;i++)
        {
            for(j=i+1;j<=9;j++)
            {
                int temp;

                if(numb[index[i]]<numb[index[j]])
                {
                    temp=index[i];
                    index[i]=index[j];
                    index[j]=temp;
                }
            }
        }

        cls();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n    .    .  .   .    .  .      *                *     .  .    .   .   .   .";
          cout<<"\n      . .  .  .    .    .     * GALACTIC BATTLES *        . .  .    .   . \n";
            cout<<"     .   .       .    .   .    *                *    .  .   .     .    .   .\n\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        cout<<"                           ====== TOP FIGHTERS ======                          \n\n";

        string ach[5]={"1. ","2. ","3. ","4. ","5. ",};


        while(true)
        {   cls();
            for(int i=0;i<6;i++)
            {
               if(i==1)
               {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
                    cout<<"                                   1. "<<name[index[0]]<<"\n";
               }
               if(i==2)
               {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"                                                                ооооо          \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо               ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 2. "<<name[index[1]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);cout<<"                                          ооооо           \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо               ";
               }
               if(i==3)
               {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 3. "<<name[index[2]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);cout<<"                                       ооооо               \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"         ооооооооооооооо          ";
               }
               if(i==4)
               {
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 4. "<<name[index[3]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"                                                       ооооо                   \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"         ооооооооооооооо          ";
               }
               if(i==5)
               {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 5. "<<name[index[4]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);cout<<"                                       ооооо               \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо               ";
               }
            }
        }






            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 6. "<<name[index[5]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);cout<<"                                          ооооо           \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout<<"              ооооо               ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);cout<<" 7. "<<name[index[6]]<<"\n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"                                                                ооооо          \n";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
            cout<<"                                   8. "<<name[index[7]]<<"\n";
            cout<<"                                                                         \n";
            cout<<"                                   9. "<<name[index[8]];


    while(true)
    {
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            Sleep(200);
            cls1();
            menua();
        }
    }
}
