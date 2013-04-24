#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
int xmax=200,xmin=0,ymax=200,ymin=0,c=0;
int sh=1;

void linecl(int x0, int y0, int x1, int y1,int c)
{

float x,y,dx,dy,xinc,yinc;
float steps;
int k,i;

glBegin(GL_POINTS);
if(c==1)
glColor3f(1.0,1.0,1.0);
else glColor3f(1.0,0.0,0.0);
dx=x1-x0;
dy=y1-y0;
x=x0;
y=y0;
if(abs(dx)>abs(dy))
steps=abs(dx);
else 
steps =abs(dy);
xinc=dx/steps;
yinc=dy/steps;
glVertex2f(round(x),round(y));
for (k=0;k<=steps;k++)
{
    x=x+xinc;
    y=y+yinc;
    glVertex2f(round(x),round(y));
}
glEnd();
glFlush();
}

void clip(int x0, int y0, int x1, int y1) {
float m=(float)(y1-y0)/(x1-x0);

if(y0>ymax) {
	x0=x0+(ymax-y0)/m;
	y0=ymax;
}
else if(y0<ymin) {
	x0=x0+(ymin-y0)/m;
	y0=ymin;
}

if(y1>ymax) {
	x1=x1+(ymax-y1)/m;
	y1=ymax;
}
else if(y1<ymin) {
	x1=x1+(ymin-y1)/m;
	y1=ymin;
}

if(x0>xmax) {
	y0=y0+(xmax-x0)*m;
	x0=xmax;
}
else if(x0<xmin) {
	y0=y0+(xmin-x0)*m;
	x0=xmin;
}
if(x1>xmax) {
	y1=y1+(xmax-x1)*m;
	x1=xmax;
}
else if(x1<xmin) {
	y1=y1+(xmin-x1)*m;
	x1=xmin;
}

linecl(x0,y0,x1,y1,0);
}

void start(int x0, int y0, int x1, int y1) {
sh=1;
if(sh==1)
{
int n,i=0,j=0;

i=0;j=0;

clip(x0,y0,x1,y1);
sleep(1);
glFlush();
sh=0;
}
}

