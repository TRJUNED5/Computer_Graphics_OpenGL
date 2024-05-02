#include<stdio.h>
#include <Gl/gl.h>
#include <GL/glut.h>
void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);


    glBegin(GL_TRIANGLES);

    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.1f, 0.1f, 0.0f);
    glVertex3f(0.2f, 0.4f, 0.0f);
    glVertex3f(0.3f, 0.1f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex3f(0.3f, 0.1f, 0.0f);
    glVertex3f(0.3f, 0.4f, 0.0f);
    glVertex3f(0.6f, 0.4f, 0.0f);
    glVertex3f(0.6f, 0.1f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glVertex3f(0.6f, 0.2f, 0.0f);
    glVertex3f(0.6f, 0.3f, 0.0f);
    glVertex3f(0.7f, 0.3f, 0.0f);
    glVertex3f(0.7f, 0.2f, 0.0f);

    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex3f(0.7f, 0.15f, 0.0f);
    glVertex3f(0.7f, 0.35f, 0.0f);
    glVertex3f(0.75f, 0.25f, 0.0f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0.0, 0.65, 1.0);
    glVertex3f(0.8f, 0.1f, 0.0f);
    glVertex3f(0.85f, 0.25f, 0.0f);
    glVertex3f(0.9f, 0.25f, 0.0f);
    glVertex3f(0.85f, 0.1f, 0.0f);


    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f(0.85f, 0.25f, 0.0f);
    glVertex3f(0.8f, 0.4f, 0.0f);
    glVertex3f(0.85f, 0.4f, 0.0f);
    glVertex3f(0.9f, 0.25f, 0.0f);


    glEnd();

    glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
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