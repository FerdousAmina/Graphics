#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
using namespace std;

float _angle = 0.0f;

void grass()
{
    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(-8.0,-4.5);
    glVertex2f(8.0,-4.5);
    glVertex2f(8,-15);
    glVertex2f(-8.0,-15.0);
    glEnd();
}

void blades() {
    glPushMatrix();
    glTranslatef(0.0f, 12.0f, 0.0f);  // Move to center of rotation
    glRotatef(_angle, 0.0f, 0.0f, 1.0f);  // Rotate blades
    glTranslatef(0.0f, -12.0f, 0.0f); // Move back to original position

glColor3ub(193, 154, 107);  // CAMEL COLOR blades
// Blade 1
glBegin(GL_POLYGON);
glVertex2f(5.91f, 10.96f);
glVertex2f(5.91f, 13.04f);
glVertex2f(0.0f, 12.0f);
glEnd();

// Blade 3
glBegin(GL_POLYGON);
glVertex2f(1.04f, 17.91f);
glVertex2f(-1.04f, 17.91f);
glVertex2f(0.0f, 12.0f);
glEnd();

// Blade 5
glBegin(GL_POLYGON);
glVertex2f(-5.91f, 13.04f);
glVertex2f(-5.91f, 10.96f);
glVertex2f(0.0f, 12.0f);
glEnd();

// Blade 7
glBegin(GL_POLYGON);
glVertex2f(-1.04f, 6.09f);
glVertex2f(1.04f, 6.09f);
glVertex2f(0.0f, 12.0f);
glEnd();

glColor3ub(194, 178, 128);  // ECRU COLOR blades
// Blade 2
glBegin(GL_POLYGON);
glVertex2f(4.91f, 15.44f);
glVertex2f(3.44f, 16.91f);
glVertex2f(0.0f, 12.0f);
glEnd();

// Blade 4
glBegin(GL_POLYGON);
glVertex2f(-3.44f, 16.91f);
glVertex2f(-4.91f, 15.44f);
glVertex2f(0.0f, 12.0f);
glEnd();

// Blade 6
glBegin(GL_POLYGON);
glVertex2f(-4.91f, 8.56f);
glVertex2f(-3.44f, 7.09f);
glVertex2f(0.0f, 12.0f);
glEnd();

// Blade 8
glBegin(GL_POLYGON);
glVertex2f(3.44f, 7.09f);
glVertex2f(4.91f, 8.56f);
glVertex2f(0.0f, 12.0f);
glEnd();

glPopMatrix();
}

void piller() {
    // Left side of the piller
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(-1.5f, -9.0f);
    glVertex2f(-1.15f, -9.0f);
    glVertex2f(0.0f, 11.65f);
    glVertex2f(0.0f, 12.0f);
    glEnd();

    // Right side of the piller
    glBegin(GL_POLYGON);
    glVertex2f(1.5f, -9.0f);
    glVertex2f(1.15f, -9.0f);
    glVertex2f(0.0f, 11.65f);
    glVertex2f(0.0f, 12.0f);
    glEnd();

    //MIDDLE LINE OF PILLER
    glBegin(GL_POLYGON);
    glVertex2f(-0.06f, 11.0f);
    glVertex2f(0.06f, 11.0f);
    glVertex2f(0.06f, -8.2f);
    glVertex2f(-0.06f, -8.2f);
    glEnd();

    //MIDDLE DESIGNS
    glBegin(GL_POLYGON);
    glVertex2f(-1.17f, -5.0f);
    glVertex2f(1.19f, -5.0f);
    glVertex2f(1.19f, -5.5f);
    glVertex2f(-1.17f, -5.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-1.17f, -5.0f);
    glVertex2f(0.0f, -9.0f);
    glVertex2f(0.0f, -8.2f);
    glVertex2f(-0.9f, -5.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.17f, -5.0f);
    glVertex2f(0.0f, -9.0f);
    glVertex2f(0.0f, -8.2f);
    glVertex2f(0.9f, -5.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.83f, -1.0f);
    glVertex2f(0.83f, -1.0f);
    glVertex2f(0.83f, -1.5f);
    glVertex2f(-0.83f, -1.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.83f, -1.0f);
    glVertex2f(-0.0f, -4.5f);
    glVertex2f(-0.0f, -5.5f);
    glVertex2f(-0.83f, -2.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.83f, -1.0f);
    glVertex2f(0.0f, -4.5f);
    glVertex2f(0.0f, -5.5f);
    glVertex2f(0.83f, -2.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.58f, 2.5f);
    glVertex2f(-0.58f, 3.0f);
    glVertex2f(0.58f, 3.0f);
    glVertex2f(0.58f, 2.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.58f, 3.0f);
    glVertex2f(-0.58f, 2.0f);
    glVertex2f(-0.06f, -1.0f);
    glVertex2f(-0.06f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.58f, 3.0f);
    glVertex2f(0.58f, 2.0f);
    glVertex2f(0.06f, -1.0f);
    glVertex2f(0.06f, 0.0f);
    glEnd();

    //HEXAGON
    glBegin(GL_POLYGON);
    glColor3ub(204, 119, 34);
    glVertex2f(-0.5,13.15);
    glVertex2f(0.5,13.15);
    glVertex2f(0.8,12);
    glVertex2f(0.5,10.84);
    glVertex2f(-0.5,10.84);
    glVertex2f(-0.8,12);
    glEnd();
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    grass();
    blades();
    piller();
    glutSwapBuffers();
}

void update(int value) {
    _angle += 2.0f;
    if (_angle > 360) _angle -= 360;
    glutPostRedisplay();
    glutTimerFunc(40, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Windmill");
    glClearColor(0.678f, 0.847f, 0.902f, 1.0f);  // Light sky blue background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-8.0, 8.0, -15.0, 30.0);
    glMatrixMode(GL_MODELVIEW);
    glutDisplayFunc(drawScene);
    glutTimerFunc(20, update, 0);
    glutMainLoop();
    return 0;
}
