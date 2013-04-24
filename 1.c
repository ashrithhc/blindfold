/* aspect.c - draw a grid, using glutReshapeFunc() to handle
 *     window resizes (taking into account the aspect ratio).
 *
 *     Escape Key      - exit program
 */

#include <GL/glut.h>    /* includes gl.h, glu.h */

#include <stdio.h>

/*  Function Prototypes  */

GLvoid  initgfx( GLvoid );
GLvoid  keyboard( GLubyte, GLint, GLint );
GLvoid  drawScene( GLvoid );
GLvoid  reshape( GLsizei, GLsizei );

void printHelp( char * );

/* Global Definitions */

#define KEY_ESC     27      /* ascii value for the escape key */

GLvoid
main( int argc, char *argv[] )
{
    GLsizei width, height;

    glutInit( &argc, argv );

    width = glutGet( GLUT_SCREEN_WIDTH ); 
    height = glutGet( GLUT_SCREEN_HEIGHT );
    glutInitWindowPosition( width / 4, height / 4 );
    glutInitWindowSize( width / 2, height / 2 );
    glutInitDisplayMode( GLUT_RGBA );
    glutCreateWindow( argv[0] );

    initgfx();

    glutReshapeFunc( reshape );
    glutKeyboardFunc( keyboard );
    glutDisplayFunc( drawScene ); 

    printHelp( argv[0] );

    glutMainLoop();
}

void
printHelp( char *progname )
{
    fprintf(stdout, "\n%s - demonstrates one way to make the aspect "
            "ratio of the viewport\nand the viewing volume match\n\n"
            "Escape Key   - exit the program\n\n",
            progname);
}

GLvoid
initgfx( GLvoid )
{
    glClearColor( 0.0, 0.0, 1.0, 1.0 );
    glShadeModel( GL_FLAT );
}

GLvoid
reshape( GLsizei width, GLsizei height )
{
    GLdouble    aspect, left, right, bottom, top;

    glViewport( 0, 0, width, height );

    /* compute aspect ratio */
    aspect = (GLdouble) width / (GLdouble) height;

    /* make sure the window goes from [-2.0, 2.0] in the
       smallest dimension */
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
    /* Reset world coordinates first ... */
    glLoadIdentity();

    /* Then set them to what we want based on the new aspect ratio */
    glOrtho( left, right, bottom, top, -1.0, 1.0 );
    glMatrixMode( GL_MODELVIEW );
}

GLvoid 
keyboard( GLubyte key, GLint x, GLint y )
{
    switch (key) {
    case KEY_ESC:   /* Exit when the Escape key is pressed */
         exit(0);
    }
}

GLvoid
drawScene( GLvoid )
{
    GLfloat     x, y;
    static GLfloat    whiteColor[] = { 1.0, 1.0, 1.0 };

    glClear( GL_COLOR_BUFFER_BIT );

    glColor3fv( whiteColor );    

    glBegin( GL_LINES );
    for ( x = -1.0; x < 1.1; x += 0.1 ) {
         glVertex2f( x, -1.0 );
         glVertex2f( x, 1.0 );
    }
    for ( y = -1.0; y < 1.1; y += 0.1 ) {
         glVertex2f( -1.0, y );
         glVertex2f( 1.0, y );
    }
    glEnd();

    glFlush();
}

