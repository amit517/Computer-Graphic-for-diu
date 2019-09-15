#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

// Triangle starts
glColor3f (0.0, 1.0, 0.0);//0.0 1.0 0.0
glBegin(GL_TRIANGLES);
glVertex2d (50, 90);
glVertex2d (25, 75);
glVertex2d (75, 75);

glEnd();


//Ractengle


glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d (25, 25);
glVertex2d (75, 25);
glVertex2d (75, 75);
glVertex2d (25, 75);

glEnd();

// Middle blue door
glColor3f (0.0,0.0,1.0);
glBegin(GL_POLYGON);
glVertex2d (42, 25);
glVertex2d (58, 25);
glVertex2d (58, 62);
glVertex2d (42, 62);

glEnd();





//Inner Left sqare
glColor3f (1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2d (27, 47);
glVertex2d (40, 47);
glVertex2d (40, 60);
glVertex2d (27, 60);


glEnd();

//Inner right sqare
glColor3f (1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2d (60, 47);
glVertex2d (73, 47);
glVertex2d (73, 60);
glVertex2d (60, 60);

glEnd();


/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,100,0,100);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
