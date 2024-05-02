#include<windows.h>
#include<iostream>
#include<stdlib.h>

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include<GL/glut.h>
#endif

using namespace std;

//called when a key is pressed(akhn drkar nai)
void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 27://escape key
        exit(0);
    }
}

//initializing 3d rendering

void initRendering() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);//ENABLE COLOUR
    glClearColor(0.7f, 0.9f, 1.0f, 1.0f);//change the backgroud colour to sky blue

}
//called when the windows resize(akhn drkar nai)
void handleResize(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 30.0f;
float _cameraangle = 0.0f;

//Draw the 3D scene
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentityI();
    glRotatef(_cameraangle, 0.0f, 1.0f, 0.0f);
    glTranslatef(0.0f, 0.0f, -5.0f);

    glPushMatrix();
    glTranslatef(0.0f, -1.0f, 0.0f);//shape kon obosthan y thakbe
    glRotatef(_angle, 0.0f, 0.0f, -1.0f);

    glBegin(GL_QUADS);

    //Trapezoid
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.7f, -0.5f, 0.0f);
    glVertex3f(0.7f, -0.5f, 0.0f);
    glVertex3f(0.7f, 0.5f, 0.0f);
    glVertex3f(-0.7f, 0.5f, 0.0f);

    glEnd();
}