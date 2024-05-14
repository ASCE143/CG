#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    circle(100, 100, 50);

    delay(500000);
    closegraph();
    return 0;
}
