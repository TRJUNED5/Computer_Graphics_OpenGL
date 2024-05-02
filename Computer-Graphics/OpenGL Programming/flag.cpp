#include <windows.h>
#include<Gl/glut.h>


void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glOrtho(-4, 4, -4, 4, -4, 4);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1, -1, -10);
    glVertex3f(1, -1, -10);
    glVertex3f(1, 1, -10);
    glVertex3f(-1, 1, -10);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Square");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}