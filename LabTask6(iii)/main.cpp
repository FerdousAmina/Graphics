#include <windows.h>
#include <GL/glut.h>

float _move1 = 0.0f;  // Red box (left)
float _move2 = 0.0f;  // Blue box (right)
float _move3 = 0.0f;  // Green box (up)
float _move4 = 0.0f;  // Yellow box (down)

void rectangles()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);
    glColor3ub(231, 76, 60);  // Red
    glBegin(GL_QUADS);
    glVertex2f(6, 2);
    glVertex2f(8, 2);
    glVertex2f(8, 4);
    glVertex2f(6, 4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    glColor3ub(52, 152, 219);  // Blue
    glBegin(GL_QUADS);
    glVertex2f(-8, -2);
    glVertex2f(-6, -2);
    glVertex2f(-6, 0);
    glVertex2f(-8, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, _move3, 0.0f);
    glColor3ub(39, 174, 96);  // Green
    glBegin(GL_QUADS);
    glVertex2f(-2, -8);
    glVertex2f(0, -8);
    glVertex2f(0, -6);
    glVertex2f(-2, -6);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, _move4, 0.0f);
    glColor3ub(241, 196, 15);  // Yellow
    glBegin(GL_QUADS);
    glVertex2f(2, 6);
    glVertex2f(4, 6);
    glVertex2f(4, 8);
    glVertex2f(2, 8);
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}

void update(int value)
{
    _move1 -= 0.02f;  // Red: left
    _move2 += 0.02f;  // Blue: right
    _move3 += 0.02f;  // Green: up
    _move4 -= 0.02f;  // Yellow: down

    if (_move1 < -20.0f) _move1 = 12.0f;
    if (_move2 > 20.0f) _move2 = -12.0f;
    if (_move3 > 20.0f) _move3 = -12.0f;
    if (_move4 < -20.0f) _move4 = 12.0f;

    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Objects Moving In Loop");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-11, 12, -13, 13);
    glMatrixMode(GL_MODELVIEW);

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutDisplayFunc(rectangles);
    glutTimerFunc(20, update, 0);
    glutMainLoop();
    return 0;
}
