#include <GL/glut.h> 
#include <stdio.h>
#include "clipping.c"

int numLines,para;

typedef enum state
{
waitingforclick,
clickedonce,
}; 

typedef struct point
{
int x;
int y;
}point; 

point lines[256][2] ; 

int i,gState=waitingforclick;

void drawlines()
{
if(para==0)
{
coverpage();
}


glBegin(GL_POINTS);
for(i=0; i<=numLines; i++)
{

dda(-185+lines[i][0].x,350-lines[i][0].y,-185+lines[i][1].x,350-lines[i][1].y);
}
glEnd();
glFlush();
}

void cliplines()
{
glutMouseFunc(NULL);
glutPassiveMotionFunc(NULL);

glClear(GL_COLOR_BUFFER_BIT);
for(i=1; i<numLines; i++)
{
start( -200+lines[i][0].x, 400-lines[i][0].y, -200+lines[i][1].x, 400-lines[i][1].y);
}
glColor3f(1.0,1.0,1.0);
} 

void rbanding()
{
glClear(GL_COLOR_BUFFER_BIT);
if(para==0)drawlines();
else if(para==3) cliplines();
glutSwapBuffers();
} 

void mouseclick(int button, int state,int x, int y)
{
if(button==GLUT_LEFT_BUTTON && state==GLUT_UP)
{
switch(gState)
{

case waitingforclick:
++numLines;
lines[numLines][0].x=x;
lines[numLines][0].y=y;
lines[numLines][1].x=x;
lines[numLines][1].y=y;
gState++;
break;
case clickedonce:
lines[numLines][1].x=x;
lines[numLines][1].y=y;
gState=waitingforclick; 
break;
}
}
//glutPostRedisplay();
} 

void mousedrag(int x, int y)
{
if(gState==clickedonce)
{lines[numLines][1].x=x;
lines[numLines][1].y=y;
}
glutPostRedisplay();
} 

void rband(int para1)
{
para=para1;
glutDisplayFunc(rbanding);
glutMouseFunc(mouseclick);
glutPassiveMotionFunc(mousedrag);
}
