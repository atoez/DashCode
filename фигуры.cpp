#include "txLib.h"

void DrawMan(int x, int y);     // Вывод человека на экран
void DrawRabbit(int x, int y);  // Вывод кролика на экран
void DrawHome(int x, int y);    // Вывод дома на экран
void DrawLight(int x, int y);   // Вывод молнии на экран
void DrawAuto(int x, int y);    // Вывод автомобиля на экран
void DrawStar(int x, int y);    // Вывод звезды на экран

int main()
    {
// Создание рабочего окна
    txCreateWindow (1920, 1080);
// Создание фона окна
    txSetFillColor (TX_WHITE);
    txRectangle (1, 1, 1920, 1080);
//  Вывод человека на экран
    DrawMan(200, 100);
//  Вывод кролика на экран
    DrawRabbit(1000, 500);
//  Вывод дома на экран
    DrawHome(800, 500);
//  Вывод молнии на экран
    DrawLight(1000, 200);
//  Вывод звезды на экран
    DrawStar(1000, 500);
//  Вывод автомобиля на экран
    DrawAuto(500, 700);

    return 0;
    }


// Вывод человека на экран
void DrawMan()
    {
    txSetColor (TX_BLACK);
    txDrawMan (x+525, x+50, x-100, y, TX_BLACK, 0,    0,    0,   0,   1.0,  0,   1,  -0.3,   3,  0);
    }

// Вывод кролика на экран
void DrawRabbit()
    {
    // Вывод головы на экран
    txSetColor (TX_BLACK);
    txSetFillColor (TX_GRAY);
    txCircle (x+274, y+214, 26);
    // Вывод глаз на экран
    txSetFillColor (TX_RED);
    txCircle (x+280, y+206, 5);
    // Вывод первого уха на экран
    txSetColor (TX_BLACK);
    txSetFillColor (TX_GRAY);
    POINT ear[4] =
    {
    {x+260, y+191},
    {x+174, y+65},
    {x+152, y+102},
    {x+254, y+196}
    };
    txPolygon (ear, 4);
    // Вывод второго уха не экран
    POINT ear2[4] =
    {
    {x+260, y+191},
    {x+219, y+74},
    {x+180, y+74},
    {x+260, y+191}
    };
    txPolygon (ear2, 4);
    // Вывод тела на экран
    POINT body[5] =
    {
    {x+251, y+231},
    {x+135, y+225},
    {x+128, y+261},
    {x+235, y+265},
    {x+251, y+31}
    };
    txPolygon (body, 5);
    // Вывод лап на экран
    txCircle (x+129, y+213, 15);
    txCircle (x+142, y+270, 16);
    txCircle (x+220, y+270, 16);
    txSetColor (TX_GRAY, 10);
    txLine (x+142, y+287, x+162, y+287);
    txLine (x+220, y+287, x+240, y+287);
    }

// Вывод дома на экран
void DrawHome()
    {
    // Вывод дома на экран
    txSetColor (TX_BLACK, 10);
    txSetFillColor (TX_GREEN);
    txRectangle (x+16, y-317, x+347, y-26);
    // Вывод окна на экран
    txSetColor (TX_BLACK, 5);
    txSetFillColor (TX_LIGHTBLUE);
    txRectangle (x+69, y-240, x+156, y-155);
    // Вывод на экран
    txSetColor (TX_BLACK, 5);
    txSetFillColor (TX_BROWN);
    txRectangle (x+237, y-176, x+39, y-27);
    // Вывод дверной ручки на экран
    txSetColor (TX_GRAY, 5);
    txLine (x+289, y-114, x+289, y-83);
    // Вывод крыши на экран
    txSetColor (TX_BLACK, 10);
    txSetFillColor (TX_RED);
    POINT roof[3] =
    {
    {x+16, y-321},
    {x+182, y-494},
    {x+347, y-321}
    };
    txPolygon (roof, 3);
    }

// Вывод звезды на экран
void DrawStar()
    {
    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    POINT star[11] =
    {
    {x+544, y+35},
    {x+513, y+134},
    {x+414, y+135},
    {x+492, y+193},
    {x+462, y+292},
    {x+544, y+234},
    {x+625, y+292},
    {x+598, y+193},
    {x+675, y+135},
    {x+576, y+134},
    {x+544, y+35}
    };
    txPolygon (star, 11);
    }

// Вывод молнии на экран
void DrawLight()
    {
    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    POINT light[12] =
    {
    {x+291, y-62},
    {x+400, y},
    {x+368, y+20},
    {x+466, y+80},
    {x+439, y+97},
    {x+603, y+194},
    {x+503, y+63},
    {x+528, y+51},
    {x+455, y-22},
    {x+474, y-35},
    {x+412, y-123},
    {x+291, y-62}
    };
    txPolygon (light, 12);
    }
// Вывод автомобиля на экран
void DrawAuto()
    {
    // Вывод нижней корпуса на экран
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txRectangle (x-206, y-50, x+259, y+20);
    // Вывод верхней второй части корпуса на экран
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLUE);
    txRectangle (x-106, y-150, x+159, y-50);
    // Вывод фары на экран
    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txRectangle (x-206, y-20, x-190, y);
    // Вывод контура на экран
    txSetColor (TX_BLACK, 10);
    txLine (x-22, y+20, x+74, y+20);
    txLine (x-106, y+20, x-206, y+20);
    txLine (x-206, y+20, x-206, y-50);
    txLine (x+159, y+20, x+259, y+20);
    txLine (x+259, y+20, x+259, y-50);
    txLine (x-206, y-50, x-106, y-50);
    txLine (x+259, y-50, x+159, y-50);
    txLine (x-106, y-50, x-106, y-150);
    txLine (x-106, y-150, x+159, y-150);
    txLine (x+159, y-150, x+159, y-50);
    // Вывод колёс на экран
    txSetColor (TX_BLACK);
    txSetFillColor (TX_GRAY);
    txCircle (x-66, y+20, 40);
    txCircle (x+119, y+20, 40);
    txSetFillColor (TX_BLACK);
    txCircle (x-66, y+20, 30);
    txCircle (x+119, y+20, 30);
    }
