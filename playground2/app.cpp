#include<graphics.h>
int main()
{
    initwindow(500,500,"Playground",500,200);
    setbkcolor(GREEN);
    cleardevice();
    setfillstyle(SOLID_FILL,GREEN);

    setlinestyle(SOLID_LINE,1,THICK_WIDTH);
    rectangle(50,150,450,350);
    rectangle(50,200,100,300);
    rectangle(400,200,450,300);
    line(250,150,250,350);
    circle(250,250,40);


    system("pause");
    return 0;
}
