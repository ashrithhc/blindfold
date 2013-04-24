#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

void ellipseMID(int rx, int ry, int xc, int yc)
{
int p1, p2, x0=0, y0=ry;
p1=ry*ry - rx*rx*ry + rx*rx/4;
//glClear(GL_COLOR_BUFFER_BIT);

do
{
if(p1<0)
{
x0++;
p1=p1 + 2*ry*ry*x0 + ry*ry;
}

else
{
x0++;
y0--;
p1=p1 + 2*ry*ry*x0 - 2*rx*rx*y0 + ry*ry;
}

glBegin(GL_POINTS);
glVertex2f(xc+x0,yc+y0);
glVertex2f(xc-x0,yc+y0);
glVertex2f(xc+x0,yc-y0);
glVertex2f(xc-x0,yc-y0);
glEnd();


}
while((2*ry*ry*x0)<(2*rx*rx*y0));

p2=ry*ry*(x0+1/2)*(x0+1/2) - rx*rx*(y0-1)*(y0-1) + rx*rx*ry*ry;
do
{
if(p2<0)
{
y0--;
p2=p2 - 2*rx*rx*y0 + rx*rx;
}

else
{
x0++;
y0--;
p2=p2 + 2*ry*ry*x0 - 2*rx*rx*y0 + rx*rx;
}

glBegin(GL_POINTS);
glVertex2f(xc+x0,yc+y0);
glVertex2f(xc-x0,yc+y0);
glVertex2f(xc+x0,yc-y0);
glVertex2f(xc-x0,yc-y0);
glEnd();

}
while(y0!=0);
glFlush();
}

