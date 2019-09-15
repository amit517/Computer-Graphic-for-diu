#include <GL/gl.h>
#include <GL/glut.h>
int R = 35;
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

glColor3f (0.0,1.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2d(170 , 300);
    glVertex2d(170, 200);
    glVertex2d(350, 200);
    glVertex2d(350, 300);
    glEnd();


glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2d (x,y);
    glEnd();



pk = 1-R;

while(x<=y){
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);


    glVertex2d (250+y,250+x);
    glVertex2d (250-x,250+y);
    glVertex2d (250-y,250+x);
    glVertex2d (250+x,250-y);
    glVertex2d (250+y,250-x);
    glVertex2d (250-x,250-y);
    glVertex2d (250-y,250-x);
    glVertex2d (250+x,250+y);
    glEnd();
if(pk<0)
{
   pk = pk+(2*x)+1;
        x = x+1;
}

else
{
  pk = pk+(2*x)+1-(2*y);
        x+=1;
        y-=1;

}
printf("%d,%d \n",x,y);



}




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
