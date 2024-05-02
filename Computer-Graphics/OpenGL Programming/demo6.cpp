#include<cstdio>
#include <windows.h>
#include<math.h>
#include <cstdlib>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>


void PointLight(const float x, const float y, const float z, const float amb, const float diff, const float spec)
{
    glEnable(GL_LIGHTING);  //glEnable — enable or disable server-side GL capabilities
    //GL_LIGHTING- use the current lighting parameters to compute the vertex color
    GLfloat light_ambient[] = { amb,amb,amb, 1.0 };
    GLfloat light_position[] = { -0.9,.9,0, 0.0 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);  //set light source parameters//
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glEnable(GL_LIGHT0); //enable the light after setting the properties
}

GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;
void birdd(int value) {
    if (position22 > 1.0)
        position22 = -1.0f;
    position22 += speed22;
    glutPostRedisplay(); //glutPostRedisplay marks the current window as needing to be redisplayed.
    glutTimerFunc(100, birdd, 0);  //glutTimerFunc registers a timer callback to be triggered in a specified number of milliseconds.
}
GLfloat position4 = 0.0f;
GLfloat speed4 = -0.01f;
void sunn(int value)
{
    if (position4 > 1.0)
        position4 = 0.0f;

    position4 += speed4;

    glutPostRedisplay();



    glutTimerFunc(100, sunn, 0);
}
GLfloat position3 = 0.0f;
GLfloat speed3 = -0.5f;
void rain(int value) {
    if (position3 < -1.0)
        position3 = 1.0f;
    position3 += speed3;
    glutPostRedisplay();
    glutTimerFunc(100, rain, 0);
}
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;
void cloud(int value) {
    if (position2 > 1.0)
        position2 = -1.0f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, cloud, 0);
}
GLfloat position1 = 1.0f;
GLfloat speed1 = -0.005f;
void boat(int value)
{
    if (position1 < -1.0)
        position1 = 1.0f;

    position1 += speed1;

    glutPostRedisplay();



    glutTimerFunc(100, boat, 0);
}
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.005f;
void wave(int value)
{
    if (position5 > 0.1f)
        position5 = -0.0f;

    position5 += speed5;

    glutPostRedisplay();



    glutTimerFunc(100, wave, 0);
}
void cloud1()
{
    int i;

    GLfloat x = .5f; GLfloat y = .86f; GLfloat radius = .05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a = .55f; GLfloat b = .83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a + (radius * cos(i * twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c = .45f; GLfloat d = .83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            c + (radius * cos(i * twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e = .52f; GLfloat f = .8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius * cos(i * twicePi / triangleAmount)),
            f + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = .6f; GLfloat h = .82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius * cos(i * twicePi / triangleAmount)),
            h + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


}

void cloud2()
{
    // glLoadIdentity();
    int i;

    GLfloat x = -.5f; GLfloat y = .86f; GLfloat radius = .05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a = -.55f; GLfloat b = .83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a + (radius * cos(i * twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c = -.45f; GLfloat d = .83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            c + (radius * cos(i * twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e = -.52f; GLfloat f = .8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius * cos(i * twicePi / triangleAmount)),
            f + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = -.6f; GLfloat h = .82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius * cos(i * twicePi / triangleAmount)),
            h + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void cloud3()
{
    // glLoadIdentity();
    int i;

    GLfloat x = 0.0f; GLfloat y = .86f; GLfloat radius = .05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a = .05f; GLfloat b = .83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a + (radius * cos(i * twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c = -0.05f; GLfloat d = .83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            c + (radius * cos(i * twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e = .02f; GLfloat f = .8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius * cos(i * twicePi / triangleAmount)),
            f + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = .1f; GLfloat h = .82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius * cos(i * twicePi / triangleAmount)),
            h + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


}
void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void sky2()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void backgroundtree()
{
    //pamtrees body
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.52f, 0.45f);
    glVertex2f(-0.48f, 0.45f);
    glVertex2f(-0.48f, 0.62f);
    glVertex2f(-0.5f, 0.64f);
    glVertex2f(-0.52f, 0.62f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(-0.5f, 0.64f);
    glVertex2f(-0.52f, 0.62f);
    glVertex2f(-0.58f, 0.6f);
    glVertex2f(-0.55f, 0.63f);
    glVertex2f(-0.58f, 0.66f);
    glVertex2f(-0.52f, 0.66f);
    glVertex2f(-0.52f, 0.72f);
    glVertex2f(-0.5f, 0.69f);     //palm tree leaves
    glVertex2f(-0.48f, 0.72f);
    glVertex2f(-0.48f, 0.66f);
    glVertex2f(-0.42f, 0.66f);
    glVertex2f(-0.45f, 0.63f);
    glVertex2f(-0.42f, 0.6f);
    glVertex2f(-0.48f, 0.62f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.52f, 0.45f);
    glVertex2f(0.48f, 0.45f);
    glVertex2f(0.48f, 0.62f);
    glVertex2f(0.5f, 0.64f);
    glVertex2f(0.52f, 0.62f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(0.5f, 0.64f);
    glVertex2f(0.52f, 0.62f);
    glVertex2f(0.58f, 0.6f);
    glVertex2f(0.55f, 0.63f);
    glVertex2f(0.58f, 0.66f);
    glVertex2f(0.52f, 0.66f);
    glVertex2f(0.52f, 0.72f);
    glVertex2f(0.5f, 0.69f);///
    glVertex2f(0.48f, 0.72f);
    glVertex2f(0.48f, 0.66f);
    glVertex2f(0.42f, 0.66f);
    glVertex2f(0.45f, 0.63f);
    glVertex2f(0.42f, 0.6f);
    glVertex2f(0.48f, 0.62f);
    glEnd();  //palm tree end

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.93f, 0.56);
    glVertex2f(-0.9f, 0.6f);
    glVertex2f(-0.82f, 0.64);
    glVertex2f(-0.75f, 0.67); //hill 1
    glVertex2f(-0.68f, 0.64);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.57f, 0.56);
    glVertex2f(-0.52f, 0.5f);
    glVertex2f(-0.5f, 0.45f);
    glVertex2f(-1.0f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(1.0f, 0.45f);
    glVertex2f(0.98f, 0.5f);
    glVertex2f(0.93f, 0.56);
    glVertex2f(0.9f, 0.6f);
    glVertex2f(0.82f, 0.64);
    glVertex2f(0.75f, 0.67); //hill 2
    glVertex2f(0.68f, 0.64);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.57f, 0.56);
    glVertex2f(0.52f, 0.5f);
    glVertex2f(0.5f, 0.45f);
    glVertex2f(1.0f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(-0.5f, 0.45f);
    glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.45f, 0.56);
    glVertex2f(-0.42f, 0.6f);
    glVertex2f(-0.37f, 0.62); //hill 3
    glVertex2f(-0.32f, 0.6);
    glVertex2f(-0.29f, 0.56f);
    glVertex2f(-0.27f, 0.5f);
    glVertex2f(-0.25f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(0.5f, 0.45f);
    glVertex2f(0.48f, 0.5f);
    glVertex2f(0.45f, 0.56);
    glVertex2f(0.42f, 0.6f);
    glVertex2f(0.37f, 0.62);// hill 4
    glVertex2f(0.32f, 0.6);
    glVertex2f(0.29f, 0.56f);
    glVertex2f(0.27f, 0.5f);
    glVertex2f(0.25f, 0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(-.25f, 0.45f);
    glVertex2f(-0.23f, 0.5f);
    glVertex2f(-0.18f, 0.56);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.07f, 0.64);
    glVertex2f(-0.00f, 0.67); //hill 5
    glVertex2f(0.07f, 0.64);
    glVertex2f(0.15f, 0.6f);
    glVertex2f(0.18f, 0.56);
    glVertex2f(0.23f, 0.5f);
    glVertex2f(.25f, 0.45f);
    glEnd();

}
void bird()
{
    int i;

    GLfloat mm = 0.182f; GLfloat nn = .801f; GLfloat radiusmm = .01f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mm, nn); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            mm + (radiusmm * cos(i * twicePi / triangleAmount)),
            nn + (radiusmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208);  //birds downside
    glVertex2f(0.1f, 0.8f);
    glVertex2f(0.11f, 0.79f);
    glVertex2f(0.12f, 0.78f);
    glVertex2f(0.16f, 0.77f);
    glVertex2f(0.19f, 0.79f);
    glVertex2f(0.201f, 0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f, 0.8f);
    glVertex2f(0.15f, 0.8f); // white wings
    glVertex2f(0.14f, 0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242);
    glVertex2f(0.175f, 0.8f);  //shadow wings
    glVertex2f(0.144f, 0.8f);
    glVertex2f(0.12f, 0.83f);
    glEnd();
    /////2nd bird////
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208);
    glVertex2f(-0.02f, 0.8f);
    glVertex2f(-0.01f, 0.79f);
    glVertex2f(0.0f, 0.78f);
    glVertex2f(0.04f, 0.77f);
    glVertex2f(0.07f, 0.79f);
    glVertex2f(0.081f, 0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f, 0.8f);
    glVertex2f(0.03f, 0.8f);
    glVertex2f(0.02f, 0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242);
    glVertex2f(0.055f, 0.8f);
    glVertex2f(0.024f, 0.8f);
    glVertex2f(0.0f, 0.83f);
    glEnd();

    GLfloat mmm = 0.062f; GLfloat nnn = .801f; GLfloat radiusmmm = .01f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmm, nnn); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            mmm + (radiusmmm * cos(i * twicePi / triangleAmount)),
            nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    /////3rd bird/////
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208);
    glVertex2f(-0.72f, 0.8f);
    glVertex2f(-0.71f, 0.79f);
    glVertex2f(-0.7f, 0.78f);
    glVertex2f(-0.66f, 0.77f);
    glVertex2f(-0.63f, 0.79f);
    glVertex2f(-0.619f, 0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.645f, 0.8f);
    glVertex2f(-0.67f, 0.8f);
    glVertex2f(-0.68f, 0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242);
    glVertex2f(-0.645f, 0.8f);
    glVertex2f(-0.676f, 0.8f);
    glVertex2f(-0.7f, 0.83f);
    glEnd();

    GLfloat mmmm = -0.638f; GLfloat nnnn = .801f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmmm, nnnn); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            mmmm + (radiusmmm * cos(i * twicePi / triangleAmount)),
            nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    ////4th bird////
    GLfloat mmmmm = -0.518f; GLfloat nnnnn = .801f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmmmm, nnnnn); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            mmmmm + (radiusmm * cos(i * twicePi / triangleAmount)),
            nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.59f, 0.79f);
    glVertex2f(-0.58f, 0.78f);
    glVertex2f(-0.54f, 0.77f);
    glVertex2f(-0.51f, 0.79f);
    glVertex2f(-0.499f, 0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.525f, 0.8f);
    glVertex2f(-0.55f, 0.8f);
    glVertex2f(-0.56f, 0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242);
    glVertex2f(-0.525f, 0.8f);
    glVertex2f(-0.556f, 0.8f);
    glVertex2f(-0.58f, 0.83f);
    glEnd();


}
void stars()
{
    glPointSize(2.5);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f, 0.95f);
    glVertex2f(0.9f, 0.9f);
    glVertex2f(0.95f, 0.7f);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(0.7f, 0.9f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.5f, 0.75f);
    glVertex2f(0.4f, 0.9f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.25f, 0.9f);
    glVertex2f(0.25f, 0.7f);
    glVertex2f(0.1f, 0.9f);
    glVertex2f(0.15f, 0.75f);
    glVertex2f(0.0f, 0.8f);
    glVertex2f(-0.7f, 0.9f);
    glVertex2f(-0.8f, 0.95f);
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.8f, 0.95f);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-0.95f, 0.7f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.7f, 0.9f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.5f, 0.75f);
    glVertex2f(-0.4f, 0.9f);
    glVertex2f(-0.3f, 0.7f);
    glVertex2f(-0.25f, 0.9f);
    glVertex2f(-0.25f, 0.7f);
    glVertex2f(-0.15f, 0.75f);
    glVertex2f(-0.1f, 0.9f);
    glEnd();

}
void sun()
{
    int i;

    GLfloat x = .0f; GLfloat y = .9f; GLfloat radius = .06f; //set the initial position of the sun and set the radius  to draw circle.
    int triangleAmount = 20; //this value is for round shape after each iteration .if we change it than it will make the radius like triangle shape
    GLfloat twicePi = 2.0f * PI; //this is for calculate the value of pi twice.

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 204, 0);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {  //this will run the inside logic till the number of triangle initialize in the upper variable
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void moon()
{
    int i;

    GLfloat xx = -.5f; GLfloat yx = .93f; GLfloat radiusx = .06f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 51, 204);
    glVertex2f(xx, yx); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            xx + (radiusx * cos(i * twicePi / triangleAmount)),
            yx + (radiusx * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat x = -.5f; GLfloat y = .9f; GLfloat radius = .06f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

}

void ground()
{
    glBegin(GL_POLYGON);
    glColor3ub(102, 255, 51);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.03);
    glVertex2f(0.2f, -0.07);
    glVertex2f(0.3f, -0.1);//6
    glVertex2f(0.2f, -0.13);
    glVertex2f(0.1f, -0.17);
    glVertex2f(0.2f, -0.2);
    glVertex2f(0.35f, -0.23);
    glVertex2f(0.25f, -0.25);
    glVertex2f(0.18f, -0.28);//12
    glVertex2f(0.3f, -0.32);
    glVertex2f(0.2f, -0.35);
    glVertex2f(0.4f, -0.4);
    glVertex2f(0.4f, -0.6);
    glVertex2f(0.2f, -0.65);
    glVertex2f(0.3f, -0.7);
    glVertex2f(0.2f, -0.75);
    glVertex2f(0.4f, -0.8);
    glVertex2f(0.2f, -0.85);
    glVertex2f(0.35f, -0.9);
    glVertex2f(0.25f, -0.95);
    glVertex2f(0.4f, -1.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.17f, -0.19);
    glVertex2f(0.19f, -0.2f);
    glVertex2f(0.3f, -0.12f);
    glVertex2f(0.3f, -0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.23f, -0.295);
    glVertex2f(0.25f, -0.305f);
    glVertex2f(0.35f, -0.25f);
    glVertex2f(0.35f, -0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.3f, -0.32);
    glVertex2f(0.3f, -0.34);
    glVertex2f(0.25f, -0.365f);
    glVertex2f(0.2f, -0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.205f, -0.655);
    glVertex2f(0.4f, -0.6);
    glVertex2f(0.4f, -0.625);
    glVertex2f(0.25f, -0.675);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.3f, -0.7);
    glVertex2f(0.3f, -0.72);
    glVertex2f(0.24f, -0.7595);
    glVertex2f(0.2f, -0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.4f, -0.8);
    glVertex2f(0.4f, -0.825);
    glVertex2f(0.24f, -0.865);
    glVertex2f(0.2f, -0.85);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(0.35f, -0.9);
    glVertex2f(0.35f, -0.925);
    glVertex2f(0.27f, -0.958);
    glVertex2f(0.25f, -0.948);
    glEnd();
}
void river()
{
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    //glColor3ub(0,122,204);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}
void hut()
{
    glBegin(GL_POLYGON);
    glColor3ub(102, 0, 51);
    glVertex2f(-0.55f, 0.35f);
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.25f, 0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 51, 0);
    glVertex2f(-0.57f, 0.1f);
    glVertex2f(-0.23f, 0.1f);
    glVertex2f(-0.23f, -0.2f);
    glVertex2f(-0.57f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 51);
    glVertex2f(-0.42f, -0.05f);
    glVertex2f(-0.33f, -0.05f);    //main door
    glVertex2f(-0.33f, -0.2f);
    glVertex2f(-0.42f, -0.2f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.42f, -0.05f);
    glVertex2f(-0.33f, -0.05f);    //main door
    glEnd();

    glVertex2f(-0.33f, -0.05f);    //main door
    glVertex2f(-0.33f, -0.2f);
    glEnd();

    glVertex2f(-0.33f, -0.2f);
    glVertex2f(-0.42f, -0.2f);
    glEnd();

    glVertex2f(-0.42f, -0.2f);
    glVertex2f(-0.42f, -0.05f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 153);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.45f, 0.05f); //left window
    glVertex2f(-0.45f, -0.05f);
    glVertex2f(-0.55f, -0.05f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 102);
    glVertex2f(-0.30f, 0.05f); //2nd window
    glVertex2f(-0.25f, 0.05f);
    glVertex2f(-0.25f, -0.05f);
    glVertex2f(-0.30f, -0.05f);
    glEnd();
}

void hut1()
{
    glBegin(GL_POLYGON);
    glColor3ub(204, 0, 102);
    glVertex2f(-0.23f, 0.40f);
    glVertex2f(-0.30f, 0.20f);
    glVertex2f(0.20f, 0.20f);
    glVertex2f(0.17f, 0.40f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 204, 0);
    glVertex2f(-0.28f, 0.20f);
    glVertex2f(-0.28f, -0.15f);
    glVertex2f(0.16f, -0.15f);
    glVertex2f(0.16f, 0.20f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 153);
    glVertex2f(-0.25f, 0.10f);
    glVertex2f(-0.10f, 0.10f);
    glVertex2f(-0.10f, -0.05f);
    glVertex2f(-0.25f, -0.05f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 153);
    glVertex2f(-0.08f, 0.10f);
    glVertex2f(0.03f, 0.10f);
    glVertex2f(0.03f, -0.15f);
    glVertex2f(-0.08f, -0.15f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 70, 153);
    glVertex2f(-0.08f, 0.10f);
    glVertex2f(0.03f, 0.10f);
    glVertex2f(0.03f, -0.15f);
    glVertex2f(-0.08f, -0.15f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 70, 153);
    glVertex2f(0.05f, 0.10f);
    glVertex2f(0.15f, 0.10f);
    glVertex2f(0.15f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glEnd();



}


void tree()
{
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.72f, -0.15f);
    glVertex2f(-0.65f, -0.2f);
    glVertex2f(-0.735f, -0.17f);
    glVertex2f(-0.74f, -0.25f);
    glVertex2f(-0.775f, -0.17f); //root of the tree
    glVertex2f(-0.85f, -0.2f);
    glVertex2f(-0.78f, -0.15f);
    //glVertex2f(-0.7f,-0.25f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f, -0.15f);
    glVertex2f(-0.78f, 0.23f); //middle part of the tree
    glVertex2f(-0.72f, 0.23f);
    glVertex2f(-0.72f, -0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.76f, 0.23f);
    glVertex2f(-0.76f, 0.3f);  //upper part of tree
    glVertex2f(-0.74f, 0.3f);
    glVertex2f(-0.74f, 0.23f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 204, 0);
    glVertex2f(-0.76f, 0.23f);
    glVertex2f(-0.76f, 0.3f);  //upper part of tree
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.74f, 0.23f);
    glVertex2f(-0.71f, 0.29f);
    glVertex2f(-0.7f, 0.28f);
    glVertex2f(-0.72f, 0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f, 0.23f);
    glVertex2f(-0.8f, 0.28f);
    glVertex2f(-0.79f, 0.29f);
    glVertex2f(-0.76f, 0.23f);
    glEnd();

    int i;

    GLfloat x = -.75f; GLfloat y = .33f; GLfloat radius = .06f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),  //drawing leaves
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a = -.68f; GLfloat b = .31f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(a, b); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a + (radius * cos(i * twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c = -.81f; GLfloat d = .31f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(c, d); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            c + (radius * cos(i * twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e = -.87f; GLfloat f = .35f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius * cos(i * twicePi / triangleAmount)),
            f + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = -.61f; GLfloat h = .35f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius * cos(i * twicePi / triangleAmount)),
            h + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1 = -.61f; GLfloat b1 = .4f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(a1, b1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a1 + (radius * cos(i * twicePi / triangleAmount)),
            b1 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c1 = -.88f; GLfloat d1 = .4f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(c, d); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            c1 + (radius * cos(i * twicePi / triangleAmount)),
            d1 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e1 = -.87f; GLfloat f1 = .44f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e1, f1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e1 + (radius * cos(i * twicePi / triangleAmount)),
            f1 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g1 = -.61f; GLfloat h1 = .4f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g1 + (radius * cos(i * twicePi / triangleAmount)),
            h1 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat e11 = -.64f; GLfloat f11 = .44f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e11, f11); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e11 + (radius * cos(i * twicePi / triangleAmount)),
            f11 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e12 = -.75f; GLfloat f12 = .44f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e12, f12); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e12 + (radius * cos(i * twicePi / triangleAmount)),
            f12 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.85f, 0.33f);
    glVertex2f(-0.85f, 0.44f);
    glVertex2f(-0.65f, 0.44f);
    glVertex2f(-0.65f, 0.33f);
    glEnd();

    GLfloat e123 = -.8f; GLfloat f123 = .5f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e123, f123); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e123 + (radius * cos(i * twicePi / triangleAmount)),
            f123 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat e1232 = -.7f; GLfloat f1232 = .5f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e1232, f1232); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e1232 + (radius * cos(i * twicePi / triangleAmount)),
            f1232 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void boat()
{
    glBegin(GL_POLYGON);
    glColor3ub(179, 218, 255);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.15f, 0.35f);
    glVertex2f(0.15f, 0.35f);
    glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 0, 77);
    glVertex2f(-0.05f, 0.6f);
    glVertex2f(-0.15f, 0.4f);
    glVertex2f(-0.05f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 102, 0);
    glVertex2f(0.05f, 0.4f);
    glVertex2f(0.05f, 0.52f);
    glVertex2f(0.06f, 0.52f);
    glVertex2f(0.06f, 0.4f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(136, 204, 0);
    glVertex2f(0.10f, 0.4f);
    glVertex2f(0.10f, 0.52f);
    glVertex2f(0.11f, 0.52f);
    glVertex2f(0.11f, 0.4f);
    glEnd();
}
void boat2()
{

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.63f, -0.53f);
    glVertex2f(0.53f, -0.53f);
    glVertex2f(0.43f, -0.5f);
    glVertex2f(0.53f, -0.6f);
    glVertex2f(0.78f, -0.6f);
    glVertex2f(0.88f, -0.5f);
    glVertex2f(0.78f, -0.53f);
    glVertex2f(0.73f, -0.53f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(122, 122, 82);
    glVertex2f(0.43f, -0.5f);
    glVertex2f(0.53f, -0.53f);
    glVertex2f(0.63f, -0.53f);
    glVertex2f(0.73f, -0.53f);
    glVertex2f(0.78f, -0.53f);
    glVertex2f(0.88f, -0.5f);////
    glVertex2f(0.78f, -0.48f);
    glVertex2f(0.73f, -0.48f);
    glVertex2f(0.63f, -0.48f);
    glVertex2f(0.53f, -0.48f);
    glVertex2f(0.43f, -0.5f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.88f, -0.5f);////
    glVertex2f(0.78f, -0.48f);
    glVertex2f(0.78f, -0.48f);
    glVertex2f(0.73f, -0.48f);
    glVertex2f(0.73f, -0.48f);
    glVertex2f(0.63f, -0.48f);
    glVertex2f(0.63f, -0.48f);
    glVertex2f(0.53f, -0.48f);
    glVertex2f(0.53f, -0.48f);
    glVertex2f(0.43f, -0.5f);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.53f, -0.48f);
    glVertex2f(0.53f, -0.535f);
    glVertex2f(0.63f, -0.48f);
    glVertex2f(0.63f, -0.535f);
    glVertex2f(0.73f, -0.48f);
    glVertex2f(0.73f, -0.535f);
    glVertex2f(0.81f, -0.48f);
    glVertex2f(0.81f, -0.535f);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 0);
    glVertex2f(0.38f, -0.38f);
    glVertex2f(0.4f, -0.53f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.38f, -0.42f);
    glVertex2f(0.43f, -0.5f);
    glEnd();
}
void boat3()
{
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.88f, -0.5f);////
    glVertex2f(0.78f, -0.48f);
    glVertex2f(0.78f, -0.48f);
    glVertex2f(0.73f, -0.48f);
    glVertex2f(0.73f, -0.48f);
    glVertex2f(0.63f, -0.48f);
    glVertex2f(0.63f, -0.48f);
    glVertex2f(0.53f, -0.48f);
    glVertex2f(0.53f, -0.48f);
    glVertex2f(0.43f, -0.5f);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.53f, -0.48f);
    glVertex2f(0.53f, -0.535f);
    glVertex2f(0.63f, -0.48f);
    glVertex2f(0.63f, -0.535f);
    glVertex2f(0.73f, -0.48f);
    glVertex2f(0.73f, -0.535f);
    glVertex2f(0.81f, -0.48f);
    glVertex2f(0.81f, -0.535f);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 0);
    glVertex2f(0.38f, -0.38f);
    glVertex2f(0.4f, -0.53f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.38f, -0.42f);
    glVertex2f(0.43f, -0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.63f, -0.53f);
    glVertex2f(0.53f, -0.53f);
    glVertex2f(0.43f, -0.5f);
    glVertex2f(0.53f, -0.6f);
    glVertex2f(0.78f, -0.6f);
    glVertex2f(0.88f, -0.5f);
    glVertex2f(0.78f, -0.53f);
    glVertex2f(0.73f, -0.53f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(122, 122, 82);
    glVertex2f(0.43f, -0.5f);
    glVertex2f(0.53f, -0.53f);
    glVertex2f(0.63f, -0.53f);
    glVertex2f(0.73f, -0.53f);
    glVertex2f(0.78f, -0.53f);
    glVertex2f(0.88f, -0.5f);////
    glVertex2f(0.78f, -0.48f);
    glVertex2f(0.73f, -0.48f);
    glVertex2f(0.63f, -0.48f);
    glVertex2f(0.53f, -0.48f);
    glVertex2f(0.43f, -0.5f);
    glEnd();

}

void boat4()
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.3f, -0.25f);
    glVertex2f(0.35f, -0.3f);
    glVertex2f(0.65f, -0.3f);
    glVertex2f(0.7f, -0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2f(0.37f, -0.25f);
    glVertex2f(0.39f, -0.17f);
    glVertex2f(0.412f, -0.13f);
    glVertex2f(0.63f, -0.13f);
    glVertex2f(0.64f, -0.16f);
    glVertex2f(0.65f, -0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 25, 25);
    glVertex2f(0.462f, -0.08f);
    glVertex2f(0.462f, 0.08f);
    glVertex2f(0.465f, 0.1f);
    glVertex2f(0.564f, 0.08f);
    glVertex2f(0.565f, 0.06f);
    glVertex2f(0.565f, -0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(136, 204, 0);
    glVertex2f(0.5f, -0.13f);
    glVertex2f(0.5f, 0.14f);
    glVertex2f(0.51f, 0.14f);
    glVertex2f(0.51f, -0.13f);
    glEnd();
}
void way()
{
    /*glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.22f,-0.5f);
    glVertex2f(-0.43f,-0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-0.43f,-0.5f);
    glVertex2f(-0.75f,-1.0f);
    glVertex2f(-0.56f,-1.0f);
    glVertex2f(-0.22f,-0.5f);
    glEnd();*/


}
void grass1()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(-.05f, -0.35f);
    glVertex2f(-0.0f, -0.4f);//
    glVertex2f(0.05f, -0.35f);
    glVertex2f(0.0f, -0.4f);//
    glVertex2f(0.027f, -0.33f);
    glVertex2f(0.0f, -0.4f);//
    glVertex2f(-0.027f, -0.33f);
    glVertex2f(0.0f, -0.4f);//
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.0f, -0.4f);//
    glVertex2f(-0.075f, -0.37f);
    glVertex2f(-0.0f, -0.4f);//
    glVertex2f(0.0745f, -0.37f);
    glVertex2f(-0.0f, -0.4f);//
    glEnd();
    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;


    GLfloat e = -.05f; GLfloat f = -.35f; GLfloat radius11 = .02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = 0.05f; GLfloat h = -0.35f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1 = 0.0f; GLfloat b1 = -0.3f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(a1, b1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void grass2()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(-.05f, -0.65f);
    glVertex2f(-0.0f, -0.7f);
    glVertex2f(0.05f, -0.65f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.027f, -0.62f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(-0.027f, -0.62f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(-0.0f, -0.6f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(-0.075f, -0.67f);
    glVertex2f(-0.0f, -0.7f);
    glVertex2f(0.075f, -0.67f);
    glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    GLfloat e = -.05f; GLfloat f = -.65f; GLfloat radius11 = .02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = 0.05f; GLfloat h = -0.65f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1 = 0.0f; GLfloat b1 = -0.6f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(a1, b1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void grass3()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(-.85f, -0.75f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.75f, -0.75f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.827f, -0.72f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.773f, -0.72f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.725f, -0.77f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.875f, -0.77f);
    glVertex2f(-0.8f, -0.8f);
    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    GLfloat e = -.85f; GLfloat f = -.75f; GLfloat radius11 = .02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = -0.75f; GLfloat h = -0.75f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1 = -0.8f; GLfloat b1 = -0.7f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(a1, b1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void fence()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(-0.6f, -0.1f);

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.05f);
    glVertex2f(-0.6f, -0.05f);

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, 0.05f);
    glVertex2f(-0.6f, 0.05f);

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-0.6f, 0.1f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.95f, 0.13f);
    glVertex2f(-0.95f, -0.12f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.9f, 0.13f);
    glVertex2f(-0.9f, -0.12f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.85f, 0.13f);
    glVertex2f(-0.85f, -0.12f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.8f, 0.13f);
    glVertex2f(-0.8f, -0.12f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.75f, 0.13f);
    glVertex2f(-0.75f, -0.12f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f, 0.13f);
    glVertex2f(-0.7f, -0.12f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.13f);
    glVertex2f(-0.65f, -0.12f);

    glEnd();
}
void grass4()
{
    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;


    GLfloat e = -.05f; GLfloat f = -.35f; GLfloat radius11 = .02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = 0.05f; GLfloat h = -0.35f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1 = 0.0f; GLfloat b1 = -0.3f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(a1, b1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(-.05f, -0.35f);
    glVertex2f(-0.0f, -0.4f);//
    glVertex2f(0.05f, -0.35f);
    glVertex2f(0.0f, -0.4f);//
    glVertex2f(0.027f, -0.33f);
    glVertex2f(0.0f, -0.4f);//
    glVertex2f(-0.027f, -0.33f);
    glVertex2f(0.0f, -0.4f);//
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.0f, -0.4f);//
    glVertex2f(-0.075f, -0.37f);
    glVertex2f(-0.0f, -0.4f);//
    glVertex2f(0.0745f, -0.37f);
    glVertex2f(-0.0f, -0.4f);//
    glEnd();
}
void grass5()
{

    /*int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
    GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

    glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 0);
        glVertex2f(e, f); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    e + (radius11 * cos(i *  twicePi / triangleAmount)),
                f+ (radius11 * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 51, 0);
        glVertex2f(g, h); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    g + (radius11 * cos(i *  twicePi / triangleAmount)),
                h+ (radius11 * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

    glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 102, 0);
        glVertex2f(a1, b1); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
                b1 + (radius11 * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
     glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(-.05f, -0.65f);
    glVertex2f(-0.0f, -0.7f);
    glVertex2f(0.05f, -0.65f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.027f, -0.62f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(-0.027f, -0.62f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(-0.0f, -0.6f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(-0.075f, -0.67f);
    glVertex2f(-0.0f, -0.7f);
    glVertex2f(0.075f, -0.67f);
    glVertex2f(-0.0f, -0.7f);
    glEnd();*/
}
void grass6()
{

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;
    GLfloat e = -.85f; GLfloat f = -.75f; GLfloat radius11 = .02f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0);
    glVertex2f(e, f); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g = -0.75f; GLfloat h = -0.75f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0);
    glVertex2f(g, h); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    GLfloat a1 = -0.8f; GLfloat b1 = -0.7f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 102, 0);
    glVertex2f(a1, b1); // center of circle
    for (i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
    glVertex2f(-.85f, -0.75f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.75f, -0.75f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.827f, -0.72f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.773f, -0.72f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.725f, -0.77f);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.875f, -0.77f);
    glVertex2f(-0.8f, -0.8f);
    glEnd();
}

void man()
{

    int i;

    GLfloat x = 0.2f; GLfloat y = -0.3f; GLfloat radius = -.06f; //set the initial position of the sun and set the radius  to draw circle.
    int triangleAmount = 20; //this value is for round shape after each iteration .if we change it than it will make the radius like triangle shape
    GLfloat twicePi = 2.0f * PI; //this is for calculate the value of pi twice.

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount;i++) {  //this will run the inside logic till the number of triangle initialize in the upper variable
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 51);
    glVertex2f(0.20f, -0.35f);
    glVertex2f(0.10f, -0.45f);
    glVertex2f(0.30f, -0.45f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(153, 0, 51);
    glVertex2f(0.10f, -0.45f);
    glVertex2f(0.30f, -0.45f);
    glVertex2f(0.30f, -0.55f);
    glVertex2f(0.10f, -0.55f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(153, 100, 51);
    glVertex2f(0.15f, -0.55f);
    glVertex2f(0.17f, -0.55f);
    glVertex2f(0.17f, -0.65f);
    glVertex2f(0.15f, -0.65f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 100, 51);
    glVertex2f(0.23f, -0.55f);
    glVertex2f(0.25f, -0.55f);
    glVertex2f(0.25f, -0.65f);
    glVertex2f(0.23f, -0.65f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 51, 0);
    glVertex2f(0.25f, -0.45f);
    glVertex2f(0.35f, -0.40f);
    glVertex2f(0.35f, -0.40f);
    glVertex2f(0.20f, -0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 51, 0);
    glVertex2f(0.30f, -0.40f);
    glVertex2f(0.20f, -0.35f);
    glVertex2f(0.20f, -0.35f);
    glVertex2f(0.33f, -0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.30f, -0.4f);
    glVertex2f(0.51f, 0.6f);
    glVertex2f(0.50f, 0.6f);
    glVertex2f(0.31f, -0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2f(0.505f, 0.6f);
    glVertex2f(0.55f, 0.7f);
    glVertex2f(0.45f, 0.7f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 80, 80);
    glVertex2f(0.55f, 0.7f);
    glVertex2f(0.45f, 0.7f);
    glVertex2f(0.505f, 0.8f);
    glEnd();

}

void well1()
{

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(204, 51, 0);
    glVertex2f(-0.9f, -0.35f);
    glVertex2f(-0.85f, -0.33f);//
    glVertex2f(-0.85f, -0.33f);
    glVertex2f(-0.8f, -0.325f);//
    glVertex2f(-0.8f, -0.325f);
    glVertex2f(-0.7f, -0.325f);//
    glVertex2f(-0.7f, -0.325f);
    glVertex2f(-0.65f, -0.33f);//
    glVertex2f(-0.65f, -0.33f);
    glVertex2f(-0.6f, -0.35f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(194, 194, 163);
    glVertex2f(-0.59f, -0.43f);
    glVertex2f(-0.57f, -0.39f);//
    glVertex2f(-0.57f, -0.39f);
    glVertex2f(-0.55f, -0.39f);//
    glVertex2f(-0.55f, -0.39f);
    glVertex2f(-0.52f, -0.39f);//
    glVertex2f(-0.52f, -0.39f);
    glVertex2f(-0.5f, -0.43f);//
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(230, 172, 0);
    glVertex2f(-0.545f, -0.385f);
    glVertex2f(-0.57f, -0.45f);//
    glVertex2f(-0.57f, -0.45f);
    glVertex2f(-0.575f, -0.5f);//
    glVertex2f(-0.575f, -0.5f);
    glVertex2f(-0.58f, -0.53f);//
    glVertex2f(-0.58f, -0.53f);
    glVertex2f(-0.57f, -0.55f);//
    glVertex2f(-0.57f, -0.55f);
    glVertex2f(-0.48f, -0.53f);//
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(38, 154, 214);
    glVertex2f(-0.585f, -0.43f);
    glVertex2f(-0.568f, -0.44f);
    glVertex2f(-0.528f, -0.44f);
    glVertex2f(-0.505f, -0.43f);
    glVertex2f(-0.528f, -0.425f);
    glVertex2f(-0.57f, -0.425f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2f(-0.9f, -0.35f);
    glVertex2f(-0.9f, -0.55f);
    glVertex2f(-0.85f, -0.575f);
    glVertex2f(-0.8f, -0.59f);
    glVertex2f(-0.7f, -0.59f);
    glVertex2f(-0.65f, -0.575f);
    glVertex2f(-0.6f, -0.55f);
    glVertex2f(-0.6f, -0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 51);
    glVertex2f(-0.9f, -0.35f);
    glVertex2f(-0.85f, -0.375f);
    glVertex2f(-0.8f, -0.38f);
    glVertex2f(-0.7f, -0.38f);
    glVertex2f(-0.65f, -0.375f);
    glVertex2f(-0.6f, -0.35f);
    glVertex2f(-0.65f, -0.33f);
    glVertex2f(-0.7f, -0.325f);
    glVertex2f(-0.8f, -0.325f);
    glVertex2f(-0.85f, -0.33f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(194, 194, 163);
    glVertex2f(-0.59f, -0.43f);
    glVertex2f(-0.57f, -0.5f);
    glVertex2f(-0.52f, -0.5f);
    glVertex2f(-0.5f, -0.43f);
    glVertex2f(-0.52f, -0.42f);
    glVertex2f(-0.57f, -0.42f);
    glEnd();
}

void boat6()
{

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(0.3f, -0.25f);
    glVertex2f(0.35f, -0.35f);
    glVertex2f(0.65f, -0.35f);
    glVertex2f(0.7f, -0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 120);
    glVertex2f(0.37f, -0.25f);
    glVertex2f(0.39f, -0.17f);
    glVertex2f(0.412f, -0.13f);
    glVertex2f(0.63f, -0.13f);
    glVertex2f(0.64f, -0.16f);
    glVertex2f(0.65f, -0.25f);
    glEnd();

}

void waves()
{

    glColor3ub(179, 217, 255);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.05);
    glVertex2f(-1.02, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.10);
    glVertex2f(-1.02, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.15);
    glVertex2f(-1.02, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.20);
    glVertex2f(-1.02, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.25);
    glVertex2f(-1.02, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.30);
    glVertex2f(-1.02, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.35);
    glVertex2f(-1.02, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.40);
    glVertex2f(-1.02, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.05, 0.45);
    glVertex2f(-1.02, 0.45);
    glEnd();

    //wave1
    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.05);
    glVertex2f(-0.97, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1., 0.10);
    glVertex2f(-0.97, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.15);
    glVertex2f(-0.97, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.20);
    glVertex2f(-0.97, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.25);
    glVertex2f(-0.97, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.30);
    glVertex2f(-0.97, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.35);
    glVertex2f(-0.97, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.40);
    glVertex2f(-0.97, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.45);
    glVertex2f(-0.97, 0.45);
    glEnd();

    //wave2
    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.05);
    glVertex2f(-0.92, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.10);
    glVertex2f(-0.92, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.15);
    glVertex2f(-0.92, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.20);
    glVertex2f(-0.92, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.25);
    glVertex2f(-0.92, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.30);
    glVertex2f(-0.92, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.35);
    glVertex2f(-0.92, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.40);
    glVertex2f(-0.92, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.95, 0.45);
    glVertex2f(-0.92, 0.45);
    glEnd();

    //wave3
    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.05);
    glVertex2f(-0.87, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.10);
    glVertex2f(-0.87, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.15);
    glVertex2f(-0.87, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.20);
    glVertex2f(-0.87, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.25);
    glVertex2f(-0.87, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.35);
    glVertex2f(-0.87, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.30);
    glVertex2f(-0.87, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.40);
    glVertex2f(-0.87, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.90, 0.45);
    glVertex2f(-0.87, 0.45);
    glEnd();



    //wave4
    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.05);
    glVertex2f(-0.82, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.10);
    glVertex2f(-0.82, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.15);
    glVertex2f(-0.82, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.20);
    glVertex2f(-0.82, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.25);
    glVertex2f(-0.82, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.30);
    glVertex2f(-0.82, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.35);
    glVertex2f(-0.82, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.40);
    glVertex2f(-0.82, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.85, 0.45);
    glVertex2f(-0.82, 0.45);
    glEnd();

    //wave5
    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.05);
    glVertex2f(-0.77, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.10);
    glVertex2f(-0.77, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.15);
    glVertex2f(-0.77, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.20);
    glVertex2f(-0.77, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.25);
    glVertex2f(-0.77, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.30);
    glVertex2f(-0.77, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.35);
    glVertex2f(-0.77, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.40);
    glVertex2f(-0.77, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.80, 0.45);
    glVertex2f(-0.77, 0.45);
    glEnd();

    //wave6
    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.05);
    glVertex2f(-0.72, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.10);
    glVertex2f(-0.72, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.15);
    glVertex2f(-0.72, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.20);
    glVertex2f(-0.72, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.25);
    glVertex2f(-0.72, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.30);
    glVertex2f(-0.72, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.35);
    glVertex2f(-0.72, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.40);
    glVertex2f(-0.72, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.75, 0.45);
    glVertex2f(-0.72, 0.45);
    glEnd();

    //wave7
    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.05);
    glVertex2f(-0.67, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.10);
    glVertex2f(-0.67, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.15);
    glVertex2f(-0.67, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.20);
    glVertex2f(-0.67, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.25);
    glVertex2f(-0.67, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.30);
    glVertex2f(-0.67, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.35);
    glVertex2f(-0.67, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.40);
    glVertex2f(-0.67, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.70, 0.45);
    glVertex2f(-0.67, 0.45);
    glEnd();

    //wave8

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.05);
    glVertex2f(-0.62, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.10);
    glVertex2f(-0.62, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.15);
    glVertex2f(-0.62, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.20);
    glVertex2f(-0.62, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.25);
    glVertex2f(-0.62, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.30);
    glVertex2f(-0.62, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.35);
    glVertex2f(-0.62, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.40);
    glVertex2f(-0.62, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65, 0.45);
    glVertex2f(-0.62, 0.45);
    glEnd();

    //wave9
    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.05);
    glVertex2f(-0.57, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.10);
    glVertex2f(-0.57, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.15);
    glVertex2f(-0.57, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.20);
    glVertex2f(-0.57, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.25);
    glVertex2f(-0.57, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.30);
    glVertex2f(-0.57, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.35);
    glVertex2f(-0.57, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.40);
    glVertex2f(-0.57, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60, 0.45);
    glVertex2f(-0.57, 0.45);
    glEnd();

    //wave10
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.05);
    glVertex2f(-0.52, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.10);
    glVertex2f(-0.52, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.15);
    glVertex2f(-0.52, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.20);
    glVertex2f(-0.52, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.25);
    glVertex2f(-0.52, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.30);
    glVertex2f(-0.52, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.35);
    glVertex2f(-0.52, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.40);
    glVertex2f(-0.52, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.45);
    glVertex2f(-0.52, 0.45);
    glEnd();

    //wave11
    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.05);
    glVertex2f(-0.47, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.10);
    glVertex2f(-0.47, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.15);
    glVertex2f(-0.47, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.20);
    glVertex2f(-0.47, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.25);
    glVertex2f(-0.47, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.30);
    glVertex2f(-0.47, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.35);
    glVertex2f(-0.47, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.40);
    glVertex2f(-0.47, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50, 0.45);
    glVertex2f(-0.47, 0.45);
    glEnd();

    //wave12
    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.05);
    glVertex2f(-0.42, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.10);
    glVertex2f(-0.42, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.15);
    glVertex2f(-0.42, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.20);
    glVertex2f(-0.42, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.25);
    glVertex2f(-0.42, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.30);
    glVertex2f(-0.42, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.35);
    glVertex2f(-0.42, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.40);
    glVertex2f(-0.42, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45, 0.45);
    glVertex2f(-0.42, 0.45);
    glEnd();

    //wave13
    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.05);
    glVertex2f(-0.37, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.10);
    glVertex2f(-0.37, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.15);
    glVertex2f(-0.37, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.20);
    glVertex2f(-0.37, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.25);
    glVertex2f(-0.37, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.30);
    glVertex2f(-0.37, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.35);
    glVertex2f(-0.37, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.40);
    glVertex2f(-0.37, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.40, 0.45);
    glVertex2f(-0.37, 0.45);
    glEnd();

    //wave14
    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.05);
    glVertex2f(-0.32, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.10);
    glVertex2f(-0.32, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.15);
    glVertex2f(-0.32, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.20);
    glVertex2f(-0.32, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.25);
    glVertex2f(-0.32, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.30);
    glVertex2f(-0.32, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.35);
    glVertex2f(-0.32, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.40);
    glVertex2f(-0.32, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35, 0.45);
    glVertex2f(-0.32, 0.45);
    glEnd();

    //wave15
    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.05);
    glVertex2f(-0.27, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.10);
    glVertex2f(-0.27, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.15);
    glVertex2f(-0.27, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.20);
    glVertex2f(-0.27, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.25);
    glVertex2f(-0.27, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.30);
    glVertex2f(-0.27, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.35);
    glVertex2f(-0.27, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.40);
    glVertex2f(-0.27, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30, 0.45);
    glVertex2f(-0.27, 0.45);
    glEnd();

    //wave16
    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.05);
    glVertex2f(-0.22, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.10);
    glVertex2f(-0.22, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.15);
    glVertex2f(-0.22, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.20);
    glVertex2f(-0.22, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.25);
    glVertex2f(-0.22, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.30);
    glVertex2f(-0.22, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.35);
    glVertex2f(-0.22, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.40);
    glVertex2f(-0.22, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.25, 0.45);
    glVertex2f(-0.22, 0.45);
    glEnd();

    //wave17
    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.05);
    glVertex2f(-0.17, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.10);
    glVertex2f(-0.17, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.15);
    glVertex2f(-0.17, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.20);
    glVertex2f(-0.17, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.25);
    glVertex2f(-0.17, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.30);
    glVertex2f(-0.17, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.35);
    glVertex2f(-0.17, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.40);
    glVertex2f(-0.17, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.20, 0.45);
    glVertex2f(-0.17, 0.45);
    glEnd();

    //wave18
    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.05);
    glVertex2f(-0.12, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.10);
    glVertex2f(-0.12, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.15);
    glVertex2f(-0.12, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.20);
    glVertex2f(-0.12, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.25);
    glVertex2f(-0.12, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.30);
    glVertex2f(-0.12, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.35);
    glVertex2f(-0.12, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.40);
    glVertex2f(-0.12, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.15, 0.45);
    glVertex2f(-0.12, 0.45);
    glEnd();

    //wave19
    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.05);
    glVertex2f(-0.07, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.10);
    glVertex2f(-0.07, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.15);
    glVertex2f(-0.07, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.20);
    glVertex2f(-0.07, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.25);
    glVertex2f(-0.07, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.30);
    glVertex2f(-0.07, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.35);
    glVertex2f(-0.07, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.40);
    glVertex2f(-0.07, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.10, 0.45);
    glVertex2f(-0.07, 0.45);
    glEnd();

    //wave20
    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.05);
    glVertex2f(-0.02, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.10);
    glVertex2f(-0.02, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.15);
    glVertex2f(-0.02, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.20);
    glVertex2f(-0.02, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.25);
    glVertex2f(-0.02, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.30);
    glVertex2f(-0.02, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.35);
    glVertex2f(-0.02, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.40);
    glVertex2f(-0.02, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.45);
    glVertex2f(-0.02, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.05, 0.0);
    glVertex2f(-0.02, 0.0);
    glEnd();

    //wave21
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.05);
    glVertex2f(0.03, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.10);
    glVertex2f(0.03, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.15);
    glVertex2f(0.03, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.20);
    glVertex2f(0.03, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.25);
    glVertex2f(0.03, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.30);
    glVertex2f(0.03, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.35);
    glVertex2f(0.03, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.40);
    glVertex2f(0.03, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.45);
    glVertex2f(0.03, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.03, 0.0);
    glEnd();

    //wave22
    glBegin(GL_LINES);
    glVertex2f(0.05, 0.05);
    glVertex2f(0.08, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.10);
    glVertex2f(0.08, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.15);
    glVertex2f(0.08, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.20);
    glVertex2f(0.08, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.25);
    glVertex2f(0.08, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.30);
    glVertex2f(0.08, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.35);
    glVertex2f(0.08, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.40);
    glVertex2f(0.08, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.45);
    glVertex2f(0.08, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, -0.05);
    glVertex2f(0.08, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.05, 0.0);
    glVertex2f(0.08, 0.0);
    glEnd();

    //wave23
    glBegin(GL_LINES);
    glVertex2f(0.10, 0.05);
    glVertex2f(0.13, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.10);
    glVertex2f(0.13, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.15);
    glVertex2f(0.13, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.20);
    glVertex2f(0.13, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.25);
    glVertex2f(0.13, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.30);
    glVertex2f(0.13, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.35);
    glVertex2f(0.13, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.40);
    glVertex2f(0.13, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.45);
    glVertex2f(0.13, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, -0.05);
    glVertex2f(0.13, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10, 0.0);
    glVertex2f(0.13, 0.0);
    glEnd();

    //wave24
    glBegin(GL_LINES);
    glVertex2f(0.15, 0.05);
    glVertex2f(0.18, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.10);
    glVertex2f(0.18, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.15);
    glVertex2f(0.18, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.20);
    glVertex2f(0.18, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.25);
    glVertex2f(0.18, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.30);
    glVertex2f(0.18, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.35);
    glVertex2f(0.18, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.40);
    glVertex2f(0.18, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.45);
    glVertex2f(0.18, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, 0.0);
    glVertex2f(0.18, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, -0.05);
    glVertex2f(0.18, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, -0.10);
    glVertex2f(0.18, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, -0.15);
    glVertex2f(0.18, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.15, -0.20);
    glVertex2f(0.18, -0.20);
    glEnd();


    //wave25
    glBegin(GL_LINES);
    glVertex2f(0.20, 0.05);
    glVertex2f(0.23, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.10);
    glVertex2f(0.23, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.15);
    glVertex2f(0.23, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.20);
    glVertex2f(0.23, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.25);
    glVertex2f(0.23, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.30);
    glVertex2f(0.23, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.35);
    glVertex2f(0.23, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.40);
    glVertex2f(0.23, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.45);
    glVertex2f(0.23, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, 0.0);
    glVertex2f(0.23, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, -0.05);
    glVertex2f(0.23, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, -0.10);
    glVertex2f(0.23, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, -0.15);
    glVertex2f(0.23, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20, -0.20);
    glVertex2f(0.23, -0.20);
    glEnd();

    //wave26
    glBegin(GL_LINES);
    glVertex2f(0.25, 0.05);
    glVertex2f(0.28, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.10);
    glVertex2f(0.28, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.15);
    glVertex2f(0.28, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.20);
    glVertex2f(0.28, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.25);
    glVertex2f(0.28, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.30);
    glVertex2f(0.28, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.35);
    glVertex2f(0.28, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.40);
    glVertex2f(0.28, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.45);
    glVertex2f(0.28, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, 0.0);
    glVertex2f(0.28, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, -0.05);
    glVertex2f(0.28, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, -0.10);
    glVertex2f(0.28, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, -0.15);
    glVertex2f(0.28, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, -0.20);
    glVertex2f(0.28, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.28, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, -0.30);
    glVertex2f(0.28, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, -0.35);
    glVertex2f(0.28, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.25, -0.40);
    glVertex2f(0.28, -0.40);
    glEnd();

    //wave27
    glBegin(GL_LINES);
    glVertex2f(0.30, 0.05);
    glVertex2f(0.33, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.10);
    glVertex2f(0.33, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.15);
    glVertex2f(0.33, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.20);
    glVertex2f(0.33, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.25);
    glVertex2f(0.33, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.30);
    glVertex2f(0.33, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.35);
    glVertex2f(0.33, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.40);
    glVertex2f(0.33, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.45);
    glVertex2f(0.33, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, 0.0);
    glVertex2f(0.33, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.05);
    glVertex2f(0.33, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.10);
    glVertex2f(0.33, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.15);
    glVertex2f(0.33, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.20);
    glVertex2f(0.33, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.25);
    glVertex2f(0.33, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.30);
    glVertex2f(0.33, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.35);
    glVertex2f(0.33, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.40);
    glVertex2f(0.33, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.45);
    glVertex2f(0.33, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.50);
    glVertex2f(0.33, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.55);
    glVertex2f(0.33, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.60);
    glVertex2f(0.33, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.65);
    glVertex2f(0.33, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.70);
    glVertex2f(0.33, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.75);
    glVertex2f(0.33, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.80);
    glVertex2f(0.33, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.85);
    glVertex2f(0.33, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.90);
    glVertex2f(0.33, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.95);
    glVertex2f(0.33, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30, -0.1);
    glVertex2f(0.33, -0.1);
    glEnd();


    //wave28
    glBegin(GL_LINES);
    glVertex2f(0.35, 0.05);
    glVertex2f(0.38, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.10);
    glVertex2f(0.38, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.15);
    glVertex2f(0.38, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.20);
    glVertex2f(0.38, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.25);
    glVertex2f(0.38, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.30);
    glVertex2f(0.38, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.35);
    glVertex2f(0.38, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.40);
    glVertex2f(0.38, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.45);
    glVertex2f(0.38, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, 0.0);
    glVertex2f(0.38, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.05);
    glVertex2f(0.38, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.10);
    glVertex2f(0.38, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.15);
    glVertex2f(0.38, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.20);
    glVertex2f(0.38, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.25);
    glVertex2f(0.38, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.30);
    glVertex2f(0.38, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.35);
    glVertex2f(0.38, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.40);
    glVertex2f(0.38, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.45);
    glVertex2f(0.38, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.50);
    glVertex2f(0.38, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.55);
    glVertex2f(0.38, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.60);
    glVertex2f(0.38, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.65);
    glVertex2f(0.38, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.70);
    glVertex2f(0.38, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.75);
    glVertex2f(0.38, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.80);
    glVertex2f(0.38, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.85);
    glVertex2f(0.38, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.90);
    glVertex2f(0.38, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.95);
    glVertex2f(0.38, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.35, -0.1);
    glVertex2f(0.38, -0.1);
    glEnd();


    //wave29
    glBegin(GL_LINES);
    glVertex2f(0.40, 0.05);
    glVertex2f(0.43, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.10);
    glVertex2f(0.43, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.15);
    glVertex2f(0.43, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.20);
    glVertex2f(0.43, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.25);
    glVertex2f(0.43, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.30);
    glVertex2f(0.43, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.35);
    glVertex2f(0.43, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.40);
    glVertex2f(0.43, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.45);
    glVertex2f(0.43, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, 0.0);
    glVertex2f(0.43, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.05);
    glVertex2f(0.43, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.10);
    glVertex2f(0.43, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.15);
    glVertex2f(0.43, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.20);
    glVertex2f(0.43, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.25);
    glVertex2f(0.43, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.30);
    glVertex2f(0.43, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.35);
    glVertex2f(0.43, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.40);
    glVertex2f(0.43, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.45);
    glVertex2f(0.43, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.50);
    glVertex2f(0.43, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.55);
    glVertex2f(0.43, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.60);
    glVertex2f(0.43, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.65);
    glVertex2f(0.43, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.70);
    glVertex2f(0.43, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.75);
    glVertex2f(0.43, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.80);
    glVertex2f(0.43, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.85);
    glVertex2f(0.43, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.90);
    glVertex2f(0.43, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.95);
    glVertex2f(0.43, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40, -0.1);
    glVertex2f(0.43, -0.1);
    glEnd();


    //wave30
    glBegin(GL_LINES);
    glVertex2f(0.45, 0.05);
    glVertex2f(0.48, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.10);
    glVertex2f(0.48, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.15);
    glVertex2f(0.48, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.20);
    glVertex2f(0.48, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.25);
    glVertex2f(0.48, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.30);
    glVertex2f(0.48, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.35);
    glVertex2f(0.48, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.40);
    glVertex2f(0.48, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.45);
    glVertex2f(0.48, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, 0.0);
    glVertex2f(0.48, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.05);
    glVertex2f(0.48, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.10);
    glVertex2f(0.48, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.15);
    glVertex2f(0.48, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.20);
    glVertex2f(0.48, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.25);
    glVertex2f(0.48, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.30);
    glVertex2f(0.48, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.35);
    glVertex2f(0.48, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.40);
    glVertex2f(0.48, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.45);
    glVertex2f(0.48, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.50);
    glVertex2f(0.48, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.55);
    glVertex2f(0.48, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.60);
    glVertex2f(0.48, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.65);
    glVertex2f(0.48, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.70);
    glVertex2f(0.48, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.75);
    glVertex2f(0.48, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.80);
    glVertex2f(0.48, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.85);
    glVertex2f(0.48, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.90);
    glVertex2f(0.48, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.95);
    glVertex2f(0.48, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.45, -0.1);
    glVertex2f(0.48, -0.1);
    glEnd();


    //wave31
    glBegin(GL_LINES);
    glVertex2f(0.50, 0.05);
    glVertex2f(0.53, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.10);
    glVertex2f(0.53, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.15);
    glVertex2f(0.53, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.20);
    glVertex2f(0.53, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.25);
    glVertex2f(0.53, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.30);
    glVertex2f(0.53, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.35);
    glVertex2f(0.53, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.40);
    glVertex2f(0.53, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.45);
    glVertex2f(0.53, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, 0.0);
    glVertex2f(0.53, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.05);
    glVertex2f(0.53, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.10);
    glVertex2f(0.53, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.15);
    glVertex2f(0.53, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.20);
    glVertex2f(0.53, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.25);
    glVertex2f(0.53, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.30);
    glVertex2f(0.53, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.35);
    glVertex2f(0.53, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.40);
    glVertex2f(0.53, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.45);
    glVertex2f(0.53, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.50);
    glVertex2f(0.53, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.55);
    glVertex2f(0.53, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.60);
    glVertex2f(0.53, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.65);
    glVertex2f(0.53, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.70);
    glVertex2f(0.53, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.75);
    glVertex2f(0.53, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.80);
    glVertex2f(0.53, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.85);
    glVertex2f(0.53, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.90);
    glVertex2f(0.53, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.95);
    glVertex2f(0.53, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50, -0.1);
    glVertex2f(0.53, -0.1);
    glEnd();


    //wave32
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.05);
    glVertex2f(0.58, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.10);
    glVertex2f(0.58, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.15);
    glVertex2f(0.58, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.20);
    glVertex2f(0.58, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.25);
    glVertex2f(0.58, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.30);
    glVertex2f(0.58, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.35);
    glVertex2f(0.58, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.40);
    glVertex2f(0.58, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.45);
    glVertex2f(0.58, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, 0.0);
    glVertex2f(0.58, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.05);
    glVertex2f(0.58, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.10);
    glVertex2f(0.58, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.15);
    glVertex2f(0.58, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.20);
    glVertex2f(0.58, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.25);
    glVertex2f(0.58, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.30);
    glVertex2f(0.58, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.35);
    glVertex2f(0.58, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.40);
    glVertex2f(0.58, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.45);
    glVertex2f(0.58, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.50);
    glVertex2f(0.58, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.55);
    glVertex2f(0.58, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.60);
    glVertex2f(0.58, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.65);
    glVertex2f(0.58, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.70);
    glVertex2f(0.58, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.75);
    glVertex2f(0.58, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.80);
    glVertex2f(0.58, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.85);
    glVertex2f(0.58, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.90);
    glVertex2f(0.58, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.95);
    glVertex2f(0.58, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.55, -0.1);
    glVertex2f(0.58, -0.1);
    glEnd();


    //wave33
    glBegin(GL_LINES);
    glVertex2f(0.60, 0.05);
    glVertex2f(0.63, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.10);
    glVertex2f(0.63, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.15);
    glVertex2f(0.63, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.20);
    glVertex2f(0.63, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.25);
    glVertex2f(0.63, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.30);
    glVertex2f(0.63, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.35);
    glVertex2f(0.63, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.40);
    glVertex2f(0.63, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.45);
    glVertex2f(0.63, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, 0.0);
    glVertex2f(0.63, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.05);
    glVertex2f(0.63, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.10);
    glVertex2f(0.63, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.15);
    glVertex2f(0.63, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.20);
    glVertex2f(0.63, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.25);
    glVertex2f(0.63, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.30);
    glVertex2f(0.63, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.35);
    glVertex2f(0.63, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.40);
    glVertex2f(0.63, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.45);
    glVertex2f(0.63, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.50);
    glVertex2f(0.63, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.55);
    glVertex2f(0.63, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.60);
    glVertex2f(0.63, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.65);
    glVertex2f(0.63, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.70);
    glVertex2f(0.63, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.75);
    glVertex2f(0.63, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.80);
    glVertex2f(0.63, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.85);
    glVertex2f(0.63, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.90);
    glVertex2f(0.63, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.95);
    glVertex2f(0.63, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60, -0.1);
    glVertex2f(0.63, -0.1);
    glEnd();




    //wave34
    glBegin(GL_LINES);
    glVertex2f(0.65, 0.05);
    glVertex2f(0.68, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.10);
    glVertex2f(0.68, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.15);
    glVertex2f(0.68, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.20);
    glVertex2f(0.68, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.25);
    glVertex2f(0.68, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.30);
    glVertex2f(0.68, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.35);
    glVertex2f(0.68, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.40);
    glVertex2f(0.68, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.45);
    glVertex2f(0.68, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, 0.0);
    glVertex2f(0.68, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.05);
    glVertex2f(0.68, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.10);
    glVertex2f(0.68, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.15);
    glVertex2f(0.68, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.20);
    glVertex2f(0.68, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.25);
    glVertex2f(0.68, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.30);
    glVertex2f(0.68, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.35);
    glVertex2f(0.68, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.40);
    glVertex2f(0.68, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.45);
    glVertex2f(0.68, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.50);
    glVertex2f(0.68, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.55);
    glVertex2f(0.68, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.60);
    glVertex2f(0.68, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.65);
    glVertex2f(0.68, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.70);
    glVertex2f(0.68, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.75);
    glVertex2f(0.68, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.80);
    glVertex2f(0.68, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.85);
    glVertex2f(0.68, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.90);
    glVertex2f(0.68, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.95);
    glVertex2f(0.68, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.65, -0.1);
    glVertex2f(0.68, -0.1);
    glEnd();


    //wave35
    glBegin(GL_LINES);
    glVertex2f(0.70, 0.05);
    glVertex2f(0.73, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.10);
    glVertex2f(0.73, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.15);
    glVertex2f(0.73, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.20);
    glVertex2f(0.73, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.25);
    glVertex2f(0.73, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.30);
    glVertex2f(0.73, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.35);
    glVertex2f(0.73, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.40);
    glVertex2f(0.73, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.45);
    glVertex2f(0.73, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, 0.0);
    glVertex2f(0.73, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.05);
    glVertex2f(0.73, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.10);
    glVertex2f(0.73, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.15);
    glVertex2f(0.73, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.20);
    glVertex2f(0.73, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.25);
    glVertex2f(0.73, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.30);
    glVertex2f(0.73, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.35);
    glVertex2f(0.73, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.40);
    glVertex2f(0.73, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.45);
    glVertex2f(0.73, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.50);
    glVertex2f(0.73, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.55);
    glVertex2f(0.73, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.60);
    glVertex2f(0.73, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.65);
    glVertex2f(0.73, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.70);
    glVertex2f(0.73, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.75);
    glVertex2f(0.73, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.80);
    glVertex2f(0.73, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.85);
    glVertex2f(0.73, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.90);
    glVertex2f(0.73, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.95);
    glVertex2f(0.73, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70, -0.1);
    glVertex2f(0.73, -0.1);
    glEnd();


    //wave36
    glBegin(GL_LINES);
    glVertex2f(0.75, 0.05);
    glVertex2f(0.78, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.10);
    glVertex2f(0.78, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.15);
    glVertex2f(0.78, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.20);
    glVertex2f(0.78, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.25);
    glVertex2f(0.78, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.30);
    glVertex2f(0.78, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.35);
    glVertex2f(0.78, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.40);
    glVertex2f(0.78, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.45);
    glVertex2f(0.78, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, 0.0);
    glVertex2f(0.78, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.05);
    glVertex2f(0.78, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.10);
    glVertex2f(0.78, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.15);
    glVertex2f(0.78, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.20);
    glVertex2f(0.78, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.25);
    glVertex2f(0.78, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.30);
    glVertex2f(0.78, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.35);
    glVertex2f(0.78, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.40);
    glVertex2f(0.78, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.45);
    glVertex2f(0.78, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.50);
    glVertex2f(0.78, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.55);
    glVertex2f(0.78, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.60);
    glVertex2f(0.78, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.65);
    glVertex2f(0.78, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.70);
    glVertex2f(0.78, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.75);
    glVertex2f(0.78, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.80);
    glVertex2f(0.78, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.85);
    glVertex2f(0.78, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.90);
    glVertex2f(0.78, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.95);
    glVertex2f(0.78, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.75, -0.1);
    glVertex2f(0.78, -0.1);
    glEnd();


    //wave37
    glBegin(GL_LINES);
    glVertex2f(0.80, 0.05);
    glVertex2f(0.83, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.10);
    glVertex2f(0.83, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.15);
    glVertex2f(0.83, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.20);
    glVertex2f(0.83, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.25);
    glVertex2f(0.83, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.30);
    glVertex2f(0.83, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.35);
    glVertex2f(0.83, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.40);
    glVertex2f(0.83, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.45);
    glVertex2f(0.83, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, 0.0);
    glVertex2f(0.83, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.05);
    glVertex2f(0.83, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.10);
    glVertex2f(0.83, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.15);
    glVertex2f(0.83, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.20);
    glVertex2f(0.83, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.25);
    glVertex2f(0.83, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.30);
    glVertex2f(0.83, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.35);
    glVertex2f(0.83, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.40);
    glVertex2f(0.83, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.45);
    glVertex2f(0.83, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.50);
    glVertex2f(0.83, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.55);
    glVertex2f(0.83, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.60);
    glVertex2f(0.83, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.65);
    glVertex2f(0.83, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.70);
    glVertex2f(0.83, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.75);
    glVertex2f(0.83, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.80);
    glVertex2f(0.83, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.85);
    glVertex2f(0.83, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.90);
    glVertex2f(0.83, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.95);
    glVertex2f(0.83, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80, -0.1);
    glVertex2f(0.83, -0.1);
    glEnd();


    //wave38
    glBegin(GL_LINES);
    glVertex2f(0.85, 0.05);
    glVertex2f(0.88, 0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.10);
    glVertex2f(0.88, 0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.15);
    glVertex2f(0.88, 0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.20);
    glVertex2f(0.88, 0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.25);
    glVertex2f(0.88, 0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.30);
    glVertex2f(0.88, 0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.35);
    glVertex2f(0.88, 0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.40);
    glVertex2f(0.88, 0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.45);
    glVertex2f(0.88, 0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, 0.0);
    glVertex2f(0.88, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.05);
    glVertex2f(0.88, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.10);
    glVertex2f(0.88, -0.10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.15);
    glVertex2f(0.88, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.20);
    glVertex2f(0.88, -0.20);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.25);
    glVertex2f(0.88, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.30);
    glVertex2f(0.88, -0.30);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.35);
    glVertex2f(0.88, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.40);
    glVertex2f(0.88, -0.40);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.45);
    glVertex2f(0.88, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.50);
    glVertex2f(0.88, -0.50);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.55);
    glVertex2f(0.88, -0.55);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.60);
    glVertex2f(0.88, -0.60);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.65);
    glVertex2f(0.88, -0.65);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.70);
    glVertex2f(0.88, -0.70);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.75);
    glVertex2f(0.88, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.80);
    glVertex2f(0.88, -0.80);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.85);
    glVertex2f(0.88, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.90);
    glVertex2f(0.88, -0.90);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.95);
    glVertex2f(0.88, -0.95);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.85, -0.1);
    glVertex2f(0.88, -0.1);
    glEnd();
}

void DrawSphere()
{

    glEnable(GL_COLOR_MATERIAL);  //calling this function defuse the color
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position2, 0.0f, 0.0f);
    cloud3();
    glPopMatrix();
    moon();
    boat4();
    boat3();
    hut();
    tree();
    backgroundtree();
    fence();
    grass4();
    grass5();
    grass6();
    way();
    well1();
    ground();
    glTranslatef(position5, 0.0f, 0.0f);
    waves();
    glPopMatrix();
    glPushMatrix();
    river();

    stars();
    sky2();
    glFlush();

}

void display2()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    PointLight(0, 0, 1, 0.2, 1, 1);
    DrawSphere();
    glLoadIdentity();
    glutSwapBuffers(); // glutSwapBuffers swaps the buffers of the current window if double buffered.

}



void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    sky();
    sun();

    glPushMatrix();
    glTranslatef(position2, 0.0f, 0.0f);
    cloud1();
    cloud2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position22, 0.0f, 0.0f);
    bird();
    glPopMatrix();
    backgroundtree();
    river();
    glPushMatrix();
    glTranslatef(position5, 0.0f, 0.0f);
    waves();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    boat();
    glPopMatrix();
    ground();
    grass1();
    grass2();
    grass3();
    way();
    boat2();
    boat6();
    fence();
    man();
    tree();
    man();
    hut1();
    hut();
    glFlush();
    glutSwapBuffers();
}

void Display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glFlush();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH); //glShadeModel — select flat or smooth shading
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHT0);

}
void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
    case  'd':
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 750);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
        glutCreateWindow("village scenario");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(display);
        break;

    case 'n':
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 750);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
        glutCreateWindow("village scenario");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(display2);
        glutPostRedisplay();
        break;
    case  'D':
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 750);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
        glutCreateWindow("village scenario");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(display);
        break;
        break;

    case 'N':
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 750);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
        glutCreateWindow("village scenario");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(display2);
        glutPostRedisplay();


    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1240, 750);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1240) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 750) / 2);
    glutCreateWindow("village scenario");
    init();
    glutDisplayFunc(Display);
    glutTimerFunc(100, cloud, 0);
    glutTimerFunc(100, sunn, 0);
    glutTimerFunc(100, boat, 0);
    glutTimerFunc(100, rain, 0);
    glutTimerFunc(100, birdd, 0);
    glutTimerFunc(100, wave, 0);
    glutKeyboardFunc(handleKeypress);
    init();
    glutMainLoop();  // glutMainLoop enters the GLUT event processing loop.

    return 0;
}

