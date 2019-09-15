#include <GL/gl.h>
#include <GL/glut.h>
int R = 50;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

int x,y,pk;

x= 0;
y=R;
pk = 1-R;

while(x<=y){
    glColor3f (1.0, 0.25, 1.0);
    glBegin(GL_POINTS);

    glVertex2d (100+y,150+x);
    glVertex2d (100-x,150+y);
    glVertex2d (100-y,150+x);
    glVertex2d (100+x,150-y);
    glVertex2d (100+y,150-x);
    glVertex2d (100-x,150-y);
    glVertex2d (100-y,150-x);
    glVertex2d (100+x,150+y);
    glEnd();
if(pk<0)
{

        x = x+1;
        pk = pk+(2*x)+1;
}

else
{

        x+=1;
        y-=1;
        pk = pk+(2*x)+1-(2*y);

}

//2nd Radious
int x,y,pk;

x= 0;
y=R;
pk = 1-R;

while(x<=y){
    glColor3f (1.0, 0.25, 1.0);
    glBegin(GL_POINTS);

    glVertex2d (350+y,150+x);
    glVertex2d (350-x,150+y);
    glVertex2d (350-y,150+x);
    glVertex2d (350+x,150-y);
    glVertex2d (350+y,150-x);
    glVertex2d (350-x,150-y);
    glVertex2d (350-y,150-x);
    glVertex2d (350+x,150+y);
    glEnd();
if(pk<0)
{

        x = x+1;
        pk = pk+(2*x)+1;
}

else
{

        x+=1;
        y-=1;
        pk = pk+(2*x)+1-(2*y);

}
}

//Dana 1
glColor3f(0.0 , 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(100,150);
glVertex2d(110,150);
glVertex2d(180,230);
glVertex2d(190,230);
glEnd();


//Dana 2

glColor3f(0.0 , 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(350,150);
glVertex2d(340,150);
glVertex2d(270,230);
glVertex2d(260,230);
glEnd();


//joint of dana
glColor3f(0.0 , 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(180,230);
glVertex2d(180,240);
glVertex2d(270,230);
glVertex2d(270,240);
glEnd();


//stick

glColor3f(0.0 , 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(180,230);
glVertex2d(190,230);
glVertex2d(180,300);
glVertex2d(190,300);
glEnd();

//stick 2


glColor3f(0.0 , 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(140,270);
glVertex2d(145 ,260);
glVertex2d(220,330);
glVertex2d(230,320);

glEnd();




/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}

}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
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
