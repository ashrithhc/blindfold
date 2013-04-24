#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include "pro.c"
#include "sample.c"
#include "band.c"


int wel;

void display()							
{		
	if(wel==0)
	{
		glClearColor (0.0, 0.0, 0.0, 1.0); 
		glClear(GL_COLOR_BUFFER_BIT);
		coverpage();	
		rband(0);
	}
        if(wel==1)
	{
		para=1;
		glutMouseFunc(NULL);
		glutPassiveMotionFunc(NULL);
		glClearColor (0.0, 0.0, 0.0, 1.0); 
		glClear(GL_COLOR_BUFFER_BIT);
		instrn();
	}
	if(wel==3)
	{	
		 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		 glClearColor(0.1f, 0.0f, 0.0f,1.0f);
		 glutKeyboardFunc(keyPressed);
		 glutIdleFunc(balloon); 
	}
	if(wel==2)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		rband(3);
	}
}

void process(int id)
{
switch(id)
{
case 1:if(wel==0)
	wel=1;
	else if(wel==1) 
	wel=3;
	else if(wel==2)
	wel=1;
	
	display();
	break;

case 2: wel=2;
	display();
	break;

case 3:exit(0);
	break;

}
} 


void Init()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-200,400,-200,400);
//gluPerspective(120,1.0,1.0,400);
//gluLookAt(-70.0,40.0,60.0,0.0,0.0,0.0,30.0,15.0,40.0);
}

GLvoid reshape( GLsizei width, GLsizei height )
{
    GLdouble    aspect, left, right, bottom, top;
    glViewport( 0, 0, width, height );
  aspect = (GLdouble) width / (GLdouble) height;
    if ( aspect < 1.0 ) {
         left = -2.0;
         right = 2.0;
         bottom = -2.0 * ( 1.0 / aspect );
         top = 2.0 * ( 1.0 / aspect );
    } else {
         left = -2.0 * aspect;
         right = 2.0 * aspect;
         bottom = -2.0;
         top = 2.0;
    }
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glOrtho( left*100, right*200, bottom*100, top*200, -1.0, 1.0 );
    glMatrixMode( GL_MODELVIEW );
}


GLvoid initgfx( GLvoid )
{
    glClearColor( 0.0, 0.0, 1.0, 1.0 );
    glShadeModel( GL_FLAT );
}


int main(int argc,char** argv)
{
int menu;
 GLsizei width, height;
glutInit(&argc,argv); 

width = glutGet( GLUT_SCREEN_WIDTH ); 
height = glutGet( GLUT_SCREEN_HEIGHT );
glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(width/(2+.3),2*height/3);
glutInitWindowPosition(width/13,height/7);
glutCreateWindow("Balloon Shooting");
glutCreateMenu(process);                
glutAddMenuEntry("Continue",1);
glutAddMenuEntry("Clip",2);
glutAddMenuEntry("Quit",3);

glutAttachMenu(GLUT_RIGHT_BUTTON);    	
//Init();
initgfx();
   glutReshapeFunc( reshape );

glutDisplayFunc(display);
glutMainLoop();
}
