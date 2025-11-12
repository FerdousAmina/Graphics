#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;

float _move1 = 0.0f;  // RedBox 1
float _move2 = 0.0f;  // BlueBox 2

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.8f, 0.2f);
        glVertex2f(-0.4f, 0.2f);
        glVertex2f(-0.4f, 0.5f);
        glVertex2f(-0.8f, 0.5f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(0.4f, -0.5f);
        glVertex2f(0.8f, -0.5f);
        glVertex2f(0.8f, -0.2f);
        glVertex2f(0.4f, -0.2f);
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}

void update(int value) {
    _move1 += 0.01f;  // Red box moves right
    _move2 -= 0.01f;  // Blue box moves left

    if (_move1 > 2.0f) _move1 = -0.6f;
    if (_move2 < -2.0f) _move2 = 0.6f;

    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Two Opposite Boxes");

    gluOrtho2D(-2, 2, -2, 2);

    glutDisplayFunc(drawScene);
    glutTimerFunc(60, update, 0);

    glutMainLoop();
    return 0;
}
