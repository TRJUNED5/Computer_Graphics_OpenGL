#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500, 500, -500, 500);
}

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.2, 0.5);
    glBegin(GL_POLYGON);

    glVertex2i(-280, -0);
    glVertex2i(300, 0);
    glVertex2i(300, 0);
    glVertex2i(300, -10);
    glVertex2i(300, -10);
    glVertex2i(-280, -10);
    glVertex2i(-280, -10);
    glVertex2i(-280, 0);
    glEnd();

    glColor3f(0.2, 0.5, 0.2);
    glBegin(GL_POLYGON);

    glVertex2i(-300, -10);
    glVertex2i(290, -10);
    glVertex2i(290, -10);
    glVertex2i(290, -20);
    glVertex2i(290, -20);
    glVertex2i(-300, -20);
    glVertex2i(-300, -20);
    glVertex2i(-300, -10);
    glEnd();

    // 1 number pilar
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.2, 0.2);
    glVertex2d(-190, 270);
    glVertex2d(-160, 270);
    glVertex2d(-160, 0);
    glVertex2d(-190, 0);
    glEnd();

    //pilar of var
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.5);
    glVertex2d(-160, 270);
    glVertex2d(-120, 270);
    glVertex2d(-120, 240);
    glVertex2d(-160, 240);
    glEnd();

    // 2 number pilar
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.5, 0.2);
    glVertex2d(-120, 270);
    glVertex2d(-90, 270);
    glVertex2d(-90, 0);
    glVertex2d(-120, 0);
    glEnd();

    int m = 0;
    int n = 180;
    int r = 90;
    float x = m;
    float y = r;
    float p = 1 - r;

    while (x <= y)
    {
        glColor3f(0.5, 0.2, 0.2);
        glBegin(GL_POLYGON);
        if (p < 0)
        {
            x++;
            p = p + (2 * x) + 1;
        }
        else if (p >= 0)
        {
            x++;
            y--;
            p = p + (2 * x) - (2 * y) + 1;
        }

        glVertex2d(m + x, n + y);
        glVertex2d(m + y, n + x);
        glVertex2d(m - y, n + x);
        glVertex2d(m - x, n + y);
        glVertex2d(m - x, n - y);
        glVertex2d(m - y, n - x);
        glVertex2d(m + x, n - y);
        glVertex2d(m + y, n - x);
        glEnd();
    }

    //drawing \ /
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.5);
    glVertex2d(-100, 370);
    glVertex2d(100, 370);
    glVertex2d(60, 300);
    glVertex2d(-60, 300);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2d(-60, 360);
    glVertex2d(60, 360);
    glVertex2d(40, 310);
    glVertex2d(-40, 310);
    glEnd();


    // drawing \|
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.5, 0.2);
    glVertex2d(-60, 300);
    glVertex2d(-30, 300);
    glVertex2d(-30, 0);
    glVertex2d(-60, 0);
    glEnd();


    //drawing |/
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.5);
    glVertex2d(60, 300);
    glVertex2d(30, 300);
    glVertex2d(30, 0);
    glVertex2d(60, 0);
    glEnd();


    // pilar number 5 of 1
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.5);
    glVertex2d(120, 270);
    glVertex2d(90, 270);
    glVertex2d(90, 0);
    glVertex2d(120, 0);
    glEnd();

    // 5 number pilar of upper line
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.5, 0.2);
    glVertex2d(160, 270);
    glVertex2d(120, 270);
    glVertex2d(120, 240);
    glVertex2d(160, 240);
    glEnd();


    // pilar number 5 of 2
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.2, 0.2);
    glVertex2d(190, 270);
    glVertex2d(160, 270);
    glVertex2d(160, 0);
    glVertex2d(190, 0);
    glEnd();


    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(10, 10);
    glutInitWindowSize(800, 700);
    glutCreateWindow("Shahid Minar 193-15-13441");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}