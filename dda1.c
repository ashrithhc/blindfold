#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

void lineDDA(int x0,int y0,int x1,int y1)
{
int k;
int dx, dy, steps;
dx=x1-x0;
dy=y1-y0;
double x=x0, y=y0, xinc, yinc;

if(abs(dx)>abs(dy)) steps=abs(dx);
else steps=abs(dy);

xinc = (double)dx/(double)steps;
yinc = (double)dy/(double)steps;

//glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POINTS);
glVertex2f(floor(x+0.5),floor(y+0.5));
glEnd();

for(k=0;k<steps;k++)
{
x+=xinc;
y+=yinc;
//setPixel(round(x),round(y));
glBegin(GL_POINTS);
glVertex2f(floor(x+0.5),floor(y+0.5));
glEnd();
}
//glutSwapBuffers();

}

