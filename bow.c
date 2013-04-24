float l,m,n,atipx,atipy,aendx,aendy;
int c1=0,c2=0;
int r,dc;
float xcbow=-190+bdr;
float ycbow=350-scr-bdr;
float rxbow=18,rybow=41;
float balloonshot;

void ddaline33(float x0,float y0,float x1,float y1)
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


void displayBOW(int c1)
{

 float p1,p2,y,x;
 p1=rybow*rybow-rxbow*rxbow*rybow+rxbow*rxbow/4;
 x=0;y=rybow;

 /***BOW***/
 glPointSize(2.5);
  glBegin(GL_POINTS);
 glColor3f(1.0,1.0,0.0);
   
 while(2*rybow*rybow*x<=2*rxbow*rxbow*y)
 {
  if(p1<0)
  {
   x=x+1;
   p1=p1+2*rybow*rybow*x+rybow*rybow;
  }
  else
  {
   x=x+1;y=y-1;
   p1=p1+2*rybow*rybow*x-2*rxbow*rxbow*y+rybow*rybow;
  } 
    glVertex2f(x+xcbow,y+ycbow+m);
    glVertex2f(x+xcbow,-y+ycbow+m);
}
 
 p2=rybow*rybow*pow((x+1/2),2)+rxbow*rxbow*pow((y-1),2)-rxbow*rxbow*rybow*rybow;
 
 while(y!=0)
 {
  if(p2>0)
  {
   y=y-1;
   p2=p2-2*rxbow*rxbow*y+rxbow*rxbow;
  }
  else
  {
   x=x+1;y=y-1;
   p2=p2+2*rybow*rybow*x-2*rxbow*rxbow*y+rxbow*rxbow;
  } 
    glVertex2f(x+xcbow,y+ycbow+m);
    glVertex2f(x+xcbow,-y+ycbow+m);

 }
 glEnd();

 glPointSize(1.0);
if(c1==0) {

  glBegin(GL_POINTS);
  dda(xcbow,ycbow+rybow+m,xcbow,ycbow-rybow+m);
  glEnd();
  glFlush();

/*for arrow*/

  glBegin(GL_POINTS);
  dda(xcbow+n,ycbow+m,xcbow+2*rxbow+n,ycbow+m);
  glEnd();
  glFlush();

  glBegin(GL_POINTS);
  dda(xcbow+2*rxbow+n,ycbow+m+2,xcbow+2*rxbow+n+5,ycbow+m);
  dda(xcbow+2*rxbow+n+5,ycbow+m,xcbow+2*rxbow+n,ycbow+m-2);
  dda(xcbow+2*rxbow+n,ycbow+m-2,xcbow+2*rxbow+n,ycbow+m+2);
  glEnd();
  glFlush();

  atipx=xcbow+2*rxbow+n+5;
  atipy=ycbow+m;
  aendx=xcbow+n;
  aendy=ycbow+m;
}

else if(c1==1) {

  glBegin(GL_POINTS);
  dda(xcbow,ycbow+rybow+m,xcbow-10,ycbow+m);
  dda(xcbow-10,ycbow+m,xcbow,ycbow-rybow+m);
  glEnd();
  glFlush();

/*for arrow*/

  glBegin(GL_POINTS);
  dda(xcbow+n-5,ycbow+m,xcbow+2*rxbow+n-5,ycbow+m);
  glEnd();
  glFlush();

  glBegin(GL_POINTS);
  dda(xcbow+2*rxbow+n-5,ycbow+m+2,xcbow+2*rxbow+n+5-5,ycbow+m);
  dda(xcbow+2*rxbow+n+5-5,ycbow+m,xcbow+2*rxbow+n-5,ycbow+m-2);
  dda(xcbow+2*rxbow+n-5,ycbow+m-2,xcbow+2*rxbow+n-5,ycbow+m+2);
  glEnd();
  glFlush();

  atipx=xcbow+2*rxbow+n+5;
  atipy=ycbow+m;
  aendx=xcbow+n;
  aendy=ycbow+m;
}
    
glFlush();
}

void keyPressed (unsigned char key,int a,int b) 
{ 
int u,v,i,dist,sc;
switch(key)
{
case 87: 
case 119: if((m+ycbow+rybow)<=400)
	  m=m+10; //w or W for moving bow up
          break;

case 83:
case 115:  if((ycbow+m-rybow)>=-200)
	   m=m-10; //s or S key for moving bow down
	   break;

case 13: 
	//enter key for shooting
	 c1=1;
	 displayBOW(c1);
	 for(;n<470;n=n+90)
	 {
	 	balloon();
	 	for(i=0;i<nb;i++) 
		{
	 	 	dist=bpx[i]-atipx;
		 	if(!disapp[i])
			{
	  			if(dist>=0 && dist<90)
				{
					if((bpy[i]-50<=atipy) && (atipy<= bpy[i]+50))	
					{
					 disapp[i]=1;
					 scorec+=1;
						if(scorec==15)
						{
						 goto nnnext;
						}						  
					dc=scorec/10;
					r=scorec%10;
					sctensdigit(dc);//tens place
					scunitdigit(r);//unit place
					}
				}	 
			 }
		 }
	 	 c1=0;
	 }
	 n=0;	 
	 break;
 }
nnnext:
if(scorec==15)
{
 glutIdleFunc(NULL);
 glutKeyboardFunc(NULL);
 theend();
}
}
