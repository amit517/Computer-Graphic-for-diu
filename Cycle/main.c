#include <GL/gl.h>
#include <GL/glut.h>

int r,x0,y0,x,y,p0,p;

void display(void)
{
x=0;
y=r;
p=1-r;
while(x<=y){
    if(p<0){
        x=x+1;
        y=y;
        p=p+(2*x)+1;
    }else{
        x=x+1;
        y=y-1;
        p=p+(2*x)+1-(2*y);
    }
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2d (125+y,125+x);
    glVertex2d (125-x,125+y);
    glVertex2d (125-y,125+x);
    glVertex2d (125+x,125-y);
    glVertex2d (125+y,125-x);
    glVertex2d (125-x,125-y);
    glVertex2d (125-y,125-x);
    glVertex2d (125+x,125+y);
glEnd();
}
x=0;
y=r;
p=1-r;
while(x<=y){
    if(p<0){
        x=x+1;
        y=y;
        p=p+(2*x)+1;
    }else{
        x=x+1;
        y=y-1;
        p=p+(2*x)+1-(2*y);
    }
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2d (300+y,125+x);
    glVertex2d (300-x,125+y);
    glVertex2d (300-y,125+x);
    glVertex2d (300+x,125-y);
    glVertex2d (300+y,125-x);
    glVertex2d (300-x,125-y);
    glVertex2d (300-y,125-x);
    glVertex2d (300+x,125+y);
}
glEnd();
//danda 1
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(125,125);
glVertex2d(135,125);
glVertex2d(175,180);
glVertex2d(165,180);
glEnd();

//danda 2
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(300,125);
glVertex2d(290,125);
glVertex2d(250,180);
glVertex2d(260,180);
glEnd();

//horizontal danda
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(165,180);
glVertex2d(260,180);
glVertex2d(260,190);
glVertex2d(165,190);
glEnd();

//handle danda
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(165,180);
glVertex2d(175,180);
glVertex2d(175,220);
glVertex2d(165,220);
glEnd();

//handle
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(140,200);
glVertex2d(145,190);
glVertex2d(190,250);
glVertex2d(200,240);
glEnd();

//paddle danda
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(220,125);
glVertex2d(300,125);
glVertex2d(300,130);
glVertex2d(220,130);
glEnd();

//paddle vertical danda
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d(220,125);
glVertex2d(225,125);
glVertex2d(225,180);
glVertex2d(220,180);
glEnd();
glFlush ();
}

void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,480,0,480);
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
r=40;
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
