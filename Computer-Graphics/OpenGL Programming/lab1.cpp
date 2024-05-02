#include<GL/gl.h> 
#include<GL/glut.h> 
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glColor3ub(255, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2d(100, 300);
    glVertex2d(100, 100);
    glVertex2d(300, 100);
    glVertex2d(300, 300);
    //glColor3f(0, 250, 154);
    glEnd();
    glColor3ub(0, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2d(200, 400);
    glVertex2d(100, 300);
    glVertex2d(300, 300);
    //glColor3f(0, 0, 205);
    glEnd();

    glColor3ub(30, 144, 255);
    glBegin(GL_POLYGON);
    glVertex2d(120, 250);
    glVertex2d(120, 200);
    glVertex2d(170, 200);
    glVertex2d(170, 250);
    glEnd();

    glColor3ub(30, 144, 255);
    glBegin(GL_POLYGON);
    glVertex2d(230, 250);
    glVertex2d(230, 200);
    glVertex2d(280, 200);
    glVertex2d(280, 250);
    glEnd();

    glColor3ub(72, 61, 139);
    glBegin(GL_POLYGON);
    glVertex2d(180, 250);
    glVertex2d(180, 100);
    glVertex2d(220, 100);
    glVertex2d(220, 250);
    glEnd();

    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
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
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("192-15-13057");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}