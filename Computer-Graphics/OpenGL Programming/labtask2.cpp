#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);



    draw_object();

    glFlush();
}
void draw_object()
{
    land();
    //hill();
    //tree();
    //river();
    //house();

}

void house()
{

    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

    glBegin(GL_POLYGON);

    glVertex3i(220, 350, 0);
    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(220, 450, 0);


    glEnd();




}

void land()
{
    glColor3f(0.5, 1.0, 0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


    glEnd();

}
void tree()
{
    glColor3f(0.6156863, 0, 0);

    glBegin(GL_POLYGON);

    glVertex3i(50, 350, 0);
    glVertex3i(70, 350, 0);


    glVertex3i(70, 500, 0);
    glVertex3i(50, 500, 0);

    glEnd();
}
void init(void)
{
    glClearColor(0.6196078431372549, 0.9333333333333333, 0.996078431372549, 1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0, 1200.0);

}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("193-15-13441");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}