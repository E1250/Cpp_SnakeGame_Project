#include<graphics.h>
int main()
{
    initwindow(500,250,"Playground",0,0);


    setfillstyle(SOLID_FILL,GREEN);
    setlinestyle(SOLID_LINE,1,THICK_WIDTH);

    rectangle(10,10,580,580);




    system("pause");
    return 0;
}
