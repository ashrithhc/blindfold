#include<GL/glut.h>
#include<stdio.h>      /* printf, scanf, puts, NULL */
#include<stdlib.h>     /* srand, rand */
#include<time.h>       /* time */
#include<math.h>

#define nb 15
#define bdr 12.5
#define scr 50
int nb1=nb,scorec=0;

#include "balloons.c"
#include "bow.c"
#include "line.c"


int randomgen(int min,int max)
{
  int r;
  srand (time(0));
  r = rand() % (max-min+1) + min;
  return r;
}


void balloon()
{
 static int num[nb],flg;
 int u,v,k,i,j;
 k=0;
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

//right
glBegin(GL_POINTS);
glColor3f(1.7,1.7,0.7);

for(j=-200;j<400;j++) 
for(i=400-bdr;i<400;i++)
  glVertex2f(i,j);
glEnd();

//left
glBegin(GL_POINTS);
glColor3f(1.7,1.7,0.7);
for(j=-200;j<400;j++) 
for(i=-200;i<-200+bdr;i++)
  glVertex2f(i,j);
glEnd();

//score board
glBegin(GL_POINTS);
glColor3f(0.7,0.7,0.7);
for(j=-200;j<400;j++) 
for(i=400-bdr-scr;i<400-bdr;i++)
  glVertex2f(i,j);
glEnd();


  if (flg != 1)
  {
    for (i=0; i<nb; i++)
    {
    num[i] =randomgen(50,75*(i%5));
//    printf(" num[i] %d\n", num[i]);
    }
    flg =1;
  }

dispscore();
sctensdigit(dc);
scunitdigit(r);

  for(i=0;i<nb;i++)
  {
    make_balloon(num[i],(i-(nb-1))*90,i);
   if(c1==0) {
    displayBOW(c1);
   }
   else {
    displayBOW(c1);
   }
}
  for(u=0;u<15000;u++)
  for(v=0;v<10000;v++);

  glFlush();
  return ;
}

