#include <Gl/gl.h>
#include <GL/glut.h>
void display(void)
{
    /*CLEAR ALL PIXELS*/
    glClear(GL_COLOR_BUFFER_BIT);
    /*COLORS*/
    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_QUADS);

    glBegin(GL_QUADS);/*Begin quad*/

    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.35f, 0.05f, 0.0f);
    glVertex3f(0.40f, 0.35f, 0.0f);
    glVertex3f(0.00f, 0.35f, 0.0f);

    glEnd(); /*End quad*/

    glBegin(GL_TRIANGLES);/*Begin triangle*/


    /*Pentagon*/
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(0.5f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.05f, 0.0f);
    glVertex3f(0.5f, 0.35f, 0.0f);

    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.5f, 0.35f, 0.0f);
    glVertex3f(0.75f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.35f, 0.0f);

    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.5f, 0.35f, 0.0f);
    glVertex3f(0.75f, 0.35f, 0.0f);
    glVertex3f(0.63f, 0.50f, 0.0f);

    /*Triangle*/

    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.30f, 0.65f, 0.0f);
    glVertex3f(0.60f, 0.65f, 0.0f);
    glVertex3f(0.45f, 0.85f, 0.0f);


    glEnd(); /*End quad*/

    glFlush();/*start processing*/
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);/*Clearing background colour*/
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
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