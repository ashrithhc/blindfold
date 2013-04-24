float j[nb];
int disapp[nb];
double col[nb][3];
int bpx[nb],bpy[nb];
int missedB=0;


float check(float x,float y,float xc,float yc,int k) {
float r;
r=(((x-xc)*(x-xc))/400)+(((y-yc-j[k])*(y-yc-j[k]))/1225)-1;
return r;
}

double randomcolgen() {
  double r;
  //srand (time(0));
  r = (double)rand()/(double)RAND_MAX;
  return r;
}

void make_balloon(float xc,float yc,int k) {

 static float color,flag;
 float rx,ry,p1,p2,y,x,x0,y0,c,z;
 int m,u,v,a;
 rx=20,ry=35;
 p1=ry*ry-rx*rx*ry+rx*rx/4;
 x=0;y=ry;
 if(disapp[k])
 return;

 if(!flag) {
 for(m=0;m<nb;m++)
 j[m]=-200;
 flag=1;
 } 

 glBegin(GL_POINTS);
 glColor3f(0.0,0.0,0.0);
//glColor3f(0.0, 0.9, 1.0);

    bpx[k]=-rx+xc;
    bpy[k]=yc+j[k];

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
    glVertex2f(x+xc,y+yc+j[k]);
    glVertex2f(-x+xc,y+yc+j[k]);
    glVertex2f(-x+xc,-y+yc+j[k]);
    glVertex2f(x+xc,-y+yc+j[k]);
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
    glVertex2f(x+xc,y+yc+j[k]);
    glVertex2f(-x+xc,y+yc+j[k]);
    glVertex2f(-x+xc,-y+yc+j[k]);
    glVertex2f(x+xc,-y+yc+j[k]);
 }
 glEnd();
 glBegin(GL_POINTS);  
 glColor3f(1.0, 1.0, 0.0);
 dda(x-rx+xc,y-ry+yc+j[k],x-rx+xc,y-ry+yc-30+j[k]);
 glEnd();
 glFlush();

if(color<nb) {
 for(a=0;a<3;a++) {
  col[k][a]=randomcolgen();
 }
 color++;
}

//coloring the balloons
glColor3f(col[k][0],col[k][1],1);
glBegin(GL_POINTS);
float q,r;
q=y;
r=x;
for(y=q+yc-ry+j[k];y<=q+yc+ry+j[k];y+=1) {
 for(x=r+xc-2*rx;x<=r+xc;x+=1) {
  if(check(x,y,xc,yc,k)<0) {
   glVertex2f(x,y);
  }
 }
}
glEnd();

j[k]+=15;
c=j[k]+(k-(nb-1))*90-75;

if(c>400) {
missedB+=1;

if(missedB==5)
{
glutIdleFunc(NULL);
glutKeyboardFunc(NULL);
theend();
}
 j[k]=-200-(k-(nb-1))*90;
}
 return ;
}

