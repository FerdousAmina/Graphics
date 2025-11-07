#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
	gluOrtho2D(-2.0, 5.0, -2.0, 5.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(0.2);

	glBegin(GL_QUADS);
    glColor3ub(253.0f, 254.0f, 254.0f);

	glVertex2f(0.5,0.5);
	glVertex2f(0.5,2.5);
    glVertex2f(2.5,2.5);
    glVertex2f(2.5,0.5);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(23.0f, 32.0f, 42.0f);

	glVertex2f(0.5,2.5);
	glVertex2f(1,2.5);
    glVertex2f(1,2);
    glVertex2f(0.5,2);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(1.5,2.5);
	glVertex2f(2,2.5);
    glVertex2f(2,2);
    glVertex2f(1.5,2);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(1,2);
	glVertex2f(1.5,2);
    glVertex2f(1.5,1.5);
    glVertex2f(1,1.5);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(2,2);
	glVertex2f(2.5,2);
    glVertex2f(2.5,1.5);
    glVertex2f(2,1.5);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(0.5,1.5);
	glVertex2f(1,1.5);
    glVertex2f(1,1);
    glVertex2f(0.5,1);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(1.5,1.5);
	glVertex2f(2,1.5);
    glVertex2f(2,1);
    glVertex2f(1.5,1);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(1,1);
	glVertex2f(1.5,1);
    glVertex2f(1.5,0.5);
    glVertex2f(1,0.5);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(2,1);
	glVertex2f(2.5,1);
    glVertex2f(2.5,0.5);
    glVertex2f(2,0.5);
	glEnd();


	glBegin(GL_LINES);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(0.5,0.5);
    glVertex2f(0.5,2.5);

    glVertex2f(0.5,2.5);
    glVertex2f(2.5,2.5);

	glVertex2f(2.5,2.5);
    glVertex2f(2.5,0.5);

	glVertex2f(2.5,0.5);
    glVertex2f(0.5,0.5);

	glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Rainbow Flag");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}




