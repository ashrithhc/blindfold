#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

void mid(float a0,float b0,float a1,float b1)
{
 float x1,y1,x0,y0,p0,x,y,dx,dy,d;
 float incE,incNE,m,incSE;
 float steps;
 int k,i,xi,yi;

 for(i=0;i<100;i++)

 x0=a0;x1=a1;
 y0=b0;y1=b1;

 dx=x1-x0;
 dy=y1-y0;

 m=dy/dx;

 x=x0;
 y=y0;

 xi=dx/abs(dx);
 yi=dx/abs(dy);
 
 glVertex2f(x,y);
 k=0;


 if(m>=0&&m<=1)
 {
  if(dx>0)
  {
   d=2*dy-dx;
   incE=2*dy,incNE=2*(dy-dx);
   steps=abs(dx)-1;
   for (k=0;k<=steps;k++)
   {
    if(d<=0)
    {
     d=d+incE;
     x++;
     glVertex2f(x,y);
    }
    else
    {	 
	d=d+incNE;
	x++;
   	y++;
      glVertex2f(x,y);
    } 
   }
  }
  else
  {
   d=2*dy-dx;
   incNE=2*dy,incE=2*(dy-dx);
   steps=abs(dx)-1;
   for (k=0;k<=steps;k++)
   {
    if(d<=0)
    {
     d=d+incE;
     x--;
   	y--;
     glVertex2f(x,y);
    }
    else
    {	 
	d=d+incNE;
	x--;

      glVertex2f(x,y);
    } 
   }
  }
 }


 else if(m<0&&m>=-1)
 {
  if(dx>0)
  {
   d=2*dy+dx;
   incE=2*dy,incSE=2*(dy+dx);
   steps=abs(dx)-1;
   for (k=0;k<=steps;k++)
   {
    if(d<=0)
    {
     d=d-incE;
     x++;
     glVertex2f(x,y);
    }
    else
    {	 
	d=d-incSE;
	x++;
   	y--;
      glVertex2f(x,y);
    } 
   }
  }

  else
  {
   d=2*dy+dx;
   incE=2*dy,incSE=2*(dy+dx);
   steps=abs(dx)-1;
   for (k=0;k<=steps;k++)
   {
    if(d<=0)
    {
     d=d+incE;
     x--;
    // y++;
     glVertex2f(x,y);
    }
    else
    {	 
	d=d+incSE;
	x--;
   	y++;
      glVertex2f(x,y);
    } 
   }
  }
 }

 else if(m>1)
 {
  if(dy>0)
  {
   d=2*dx-dy;
   incE=2*dx,incNE=2*(dx-dy);
   steps=abs(dy)-1;
   for (k=0;k<=steps;k++)
   {
    if(d<=0)
    {
     d=d+incE;
     y++;
     glVertex2f(x,y);
    }
    else
    {	 
	d=d+incNE;
	x++;
   	y++;
      glVertex2f(x,y);
    } 
   }
  }

  else
  {
   d=2*dx-dy;
   incE=2*dx,incNE=2*(dx-dy);
   steps=abs(dy)-1;
   for (k=0;k<=steps;k++)
   {
    if(d<=0)
    {
     d=d-incE;
     y--;
  //   x--;
     glVertex2f(x,y);
    }
    else
    {	 
	d=d-incNE;
   	y--;
        x--;
      glVertex2f(x,y);
    } 
   }
  }
 }
 



 else if(m<-1)
 {
  if(dx<0)
  {
   d=2*dx+dy;
   incE=2*dx,incSE=2*(dx+dy);
   steps=abs(dy)-1;
   for (k=0;k<=steps;k++)
   {
    if(d<=0)
    {
     d=d-incE;
     y++;
     glVertex2f(x,y);
    }
    else
    {	 
	d=d-incSE;
	y++;
   	x--;
      glVertex2f(x,y);
    } 
   }
  }

  else
  {
   d=2*dx+dy;
   incE=2*dx,incSE=2*(dx+dy);
   steps=abs(dy)-1;
   for (k=0;k<=steps;k++)
   {
    if(d<=0)
    {
     d=d+incE;
     y--;
     glVertex2f(x,y);
    }
    else
    {	 
	d=d+incSE;
	y--;
   	x++;
      glVertex2f(x,y);
    } 
   }
  }
 }
}

