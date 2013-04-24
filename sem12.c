
void sem12(float xc,float yc,float r)
{
 float p0,p,x,y,k;
 p0=5/4-r;
 x=0,y=r;
 p=p0;
 
 while(x<=y)
 {
  if(p<0)
  {
   x=x+1;
   p=p+2*x+1;
  }
  else
  {
   x=x+1;y=y-1;
   p=p+2*x+1-2*y;
  } 
    glVertex2f(x+xc,y+yc);
    glVertex2f(-x+xc,y+yc);
    //glVertex2f(-x+xc,-y+yc);
    //glVertex2f(x+xc,-y+yc);
    glVertex2f(y+xc,x+yc);
    //glVertex2f(y+xc,-x+yc);
    glVertex2f(-y+xc,x+yc);
    //glVertex2f(-y+xc,-x+yc);
 }
 // glEnd();
}
