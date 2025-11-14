#include <windows.h>
#include <GL/glut.h>
#include <math.h>

int objectIndex = 0;

void rectangle1()
{
    glColor3ub(231,76,60);  // Red
    glBegin(GL_QUADS);
    glVertex2f(-4,2);
    glVertex2f(-2,2);
    glVertex2f(-2,4);
    glVertex2f(-4,4);
    glEnd();
}

void rectangle2()
{
    glColor3ub(52, 152, 219);  // Blue
    glBegin(GL_QUADS);
    glVertex2f(2,2);
    glVertex2f(4,2);
    glVertex2f(4,4);
    glVertex2f(2,4);
    glEnd();
}

void rectangle3()
{
    glColor3ub(39, 174, 96);  // Green
    glBegin(GL_QUADS);
    glVertex2f(-4,-2);
    glVertex2f(-2,-2);
    glVertex2f(-2,-4);
    glVertex2f(-4,-4);
    glEnd();
}

void rectangle4()
{
    glColor3ub(241, 196, 15);  // Yellow
    glBegin(GL_QUADS);
    glVertex2f(2,-2);
    glVertex2f(4,-2);
    glVertex2f(4,-4);
    glVertex2f(2,-4);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    if (objectIndex == 0) {
        rectangle1();
    }
    else if (objectIndex == 1) {
        rectangle2();
    }
    else if (objectIndex == 2) {
        rectangle3();
    }
    else if (objectIndex == 3) {
        rectangle4();
    }

    glutSwapBuffers();
}

void update(int value) {
    objectIndex++;
    if (objectIndex < 4) {
        glutTimerFunc(20, update, 0);
    }
    glutPostRedisplay();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Four Objects Caling");
    gluOrtho2D(-6,6,-6,6);
    glutDisplayFunc(display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutTimerFunc(20, update, 0);
    glutMainLoop();
    return 0;
}

