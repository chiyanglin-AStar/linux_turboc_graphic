/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式65】 題目：一個最優美的圖案。
程式分析：
程式原始碼：
*/
#include<stdio.h>
#include "graphics.h"
#include <math.h>
#include "dos.h"
#include "conio.h"
#include <stdlib.h>
#include <stdarg.h>
#define MAXPTS 15
#define PI 3.1415926
struct PTS {
int x,y;
};
double AspectRatio=0.85;
void LineToDemo(void)
{
struct viewporttype vp;
struct PTS points[MAXPTS];
int i, j, h, w, xcenter, ycenter;
int radius, angle, step;
double rads;
printf(" MoveTo / LineTo Demonstration" );
getviewsettings( &vp );
h = vp.bottom - vp.top;
w = vp.right - vp.left;
xcenter = w / 2; /* Determine the center of circle */
ycenter = h / 2;
radius = (h - 30) / (AspectRatio * 2);
step = 360 / MAXPTS; /* Determine # of increments */
angle = 0; /* Begin at zero degrees */
for( i=0 ; i<MAXPTS ; ++i ){ /* Determine circle intercepts */
rads = (double)angle * PI / 180.0; /* Convert angle to radians */
points[i].x = xcenter + (int)( cos(rads) * radius );
points[i].y = ycenter - (int)( sin(rads) * radius * AspectRatio );
angle += step; /* Move to next increment */
}
circle( xcenter, ycenter, radius ); /* Draw bounding circle */
for( i=0 ; i<MAXPTS ; ++i ){ /* Draw the cords to the circle */
for( j=i ; j<MAXPTS ; ++j ){ /* For each remaining intersect */
moveto(points[i].x, points[i].y); /* Move to beginning of cord */
lineto(points[j].x, points[j].y); /* Draw the cord */
} } }
main()
{int driver,mode;
driver=CGA;mode=CGAC0;
initgraph(&driver,&mode,"");
setcolor(3);
setbkcolor(GREEN);
LineToDemo();} 