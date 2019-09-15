#include <GL/gl.h>
#include <GL/glut.h>
int X1,Y1,X2,Y2;
//double M;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

float xi,yi,x,y,dx,dy,step,i;


dy = (Y2-Y1);
dx = (X2-X1);

if(dx>dy)
{
    step = dx;
    xi = 1;
    yi = (dy/dx);
}

else
{

    step = dy;
    xi = 1/(dy/dx);
    yi = 1;
}

x= X1,y=Y1;
for(i=0;i<step;i++)
{
    x= x+xi;
    y= y+yi;

    //printf("%f %f \n",x,y);

    glColor3f (1.0, 0.20, 1.0);
    glBegin(GL_POINTS);
    glVertex2d (x,y);
    glEnd();

}


//Points code start



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

    printf("value of X1 & Y1\n");
    scanf("%d%d",&X1,&Y1);
    printf("%d %d\n",X1,Y1);

    printf("Please enter that value of X2 & Y2\n");
    scanf("%d%d",&X2,&Y2);
     printf("%d  %d\n",X2,Y2);


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
