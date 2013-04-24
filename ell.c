#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

void ell(float xc,float yc,float rx,float ry)
{ 
 float p1,p2,y,x,p,x0,y0;
 
 p=ry*ry-rx*rx+ry+rx*rx/4;
 x0=x=0;y0=y=ry;
 p1=p;
 
 while(2*ry*ry*x<=2*rx*rx*y)
 {
  if(p1<0)
  {
   x=x+1;
   p1=p1+2*ry*ry*x+ry*ry;
  }
  else
  {
   x=x+1;y=y-1;
   p1=p1+2*ry*ry*x-2*rx*rx*y+ry*ry;
  } 
  glVertex2f(x+xc,y+yc);
    glVertex2f(-x+xc,y+yc);
    glVertex2f(-x+xc,-y+yc);
    glVertex2f(x+xc,-y+yc);
 }
 
 p2=ry*ry*pow((x+1/2),2)+rx*rx*pow((y-1),2)-rx*rx*ry*ry;
 
 while(y!=0)
 {
  if(p2>0)
  {
   y=y-1;
   p2=p2-2*rx*rx*y+rx*rx;
  }
  else
  {
   x=x+1;y=y-1;
   p2=p2+2*ry*ry*x-2*rx*rx*y+rx*rx;
  } 
    glVertex2f(x+xc,y+yc);
    glVertex2f(-x+xc,y+yc);
    glVertex2f(-x+xc,-y+yc);
    glVertex2f(x+xc,-y+yc);
 }
}
