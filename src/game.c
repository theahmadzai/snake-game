#include "game.h"

struct STAGE stage;
struct GAME game;
struct SNAKE snake;
struct FOOD food;

int main(int argc, char* argv[])
{
    initscr();

    setup_stage(&stage);

    int x = 0, y = 0;

    while (true) {

        addChar(x, y, "*");
        x++;
        y++;

        noecho();
        getch();
    }

    endwin();

    return 0;
}

void setup_stage(struct STAGE* stage)
{
    getScreenXY(stage->width, stage->height);

    border('|', '|', '-', '-', '+', '+', '+', '+');
}