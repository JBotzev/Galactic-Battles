#ifndef MAP_H
#define MAP_H

class mapo
{
    public:
       void mapa();
       void cmapa();

int randcoinsy,randcoinsx;
int randcoinsxmax=34;
int chancem=3;
int randNum;
int randNuma;
int randNumMax=3;
int randNumMaxa=2;

    struct Moveables
    {
        char sprite;
        int x;
        int y;
        int ppy, ppx;
    };


};

#endif // MAP_H
