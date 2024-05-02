#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
using namespace std;

int Xc, Yc, r, X1, Y2;

void plot(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x + Xc, y + Yc);
    glEnd();
}
void drawcircle(int Xc, int Yc, int X1, int Y2)
{

}


void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(1.0f, 0.0f, .0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
}

void breaenham()
{
    int x = 0;
    int y = r;
    int d = (3 - (2 * r));

    drawcircle(Xc, Yc, X1, Y2);

    while (x <= y)
    {
        if (d <= 0)
        {
            d = d + (4 * x) + 6;
        }
        else
        {
            d = d + (4 * x) - (4 * y) + 10;
            y = y - 1;
        }
        x = x + 1;
        drawcircle(Xc, Yc, X1, Y2);
    }



}


void midPointCircleAlgo()
{
    int x = 0;
    int y = r;
    float decision = 5 / 4 - r;
    plot(x, y);

    while (y > x)
    {
        if (decision < 0)
        {
            x++;
            decision += 2 * x + 1;
        }
        else
        {
            y--;
            x++;
            decision += 2 * (x - y) + 1;
        }
        plot(x, y);
        plot(x, -y);
        plot(-x, y);
        plot(-x, -y);
        plot(y, x);
        plot(-y, x);
        plot(y, -x);
        plot(-y, -x);
    }

}

void Display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(1.0);

    midPointCircleAlgo();

    glFlush();
}

int main(int argc, char** argv)
{

    Xc = 0;
    Yc = 0;
    r = 50;


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 640);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("193-15-13418");
    glutDisplayFunc(Display);
    init();
    glutMainLoop();

}