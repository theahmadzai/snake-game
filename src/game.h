#include "platform.h"

struct GAME {
    bool over;
    int score;
};

struct FOOD {
    int x;
    int y;
};

enum DIRECTION {
    UP = 0,
    RIGHT = 1,
    DOWN = 2,
    LEFT = 3,
    STOP = 4
};

struct SNAKE {
    int x;
    int y;
    enum DIRECTION d;
};

struct STAGE {
    unsigned short width;
    unsigned short height;
};

void setup_stage(struct STAGE*);
void* resizeHandler(int);