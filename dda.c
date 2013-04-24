#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
//void Init()
/*{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-400,400,-400,400);
}*/

void dda(float x0,float y0,float x1,float y1)
{

float x,y,dx,dy,xinc,yinc;
float steps;
int k;

glClear(GL_COLOR_BUFFER_BIT);
//glBegin(GL_POINTS);

//x1=10,y1=10,x0=0,y0=0;
//glColor3f(1.0,1.0,0.6);
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
 
//glEnd();
//glFlush();
}
/*int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("DDA");
Init();
glutDisplayFunc(display);
glutMainLoop();
}*/
