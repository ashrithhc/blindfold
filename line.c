void ddaline(float x0,float y0,float x1,float y1)
{

float x,y,dx,dy,xinc,yinc;
float steps;
int k;

glBegin(GL_POINTS);
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

