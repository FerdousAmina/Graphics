#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	gluOrtho2D(-5.0, 55.0, -5.0, 45.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(0.2);

	glBegin(GL_QUADS);
    glColor3ub(228.0f, 3.0f, 3.0f);

	glVertex2f(10,10);
	glVertex2f(42,10);
    glVertex2f(42,13);
    glVertex2f(10,13);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(255.0f, 237.0f, 0.0f);

	glVertex2f(10,13);
	glVertex2f(42,13);
    glVertex2f(42,16);
    glVertex2f(10,16);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(255.0f, 140.0f, 0.0f);

	glVertex2f(10,16);
	glVertex2f(42,16);
    glVertex2f(42,19);
    glVertex2f(10,19);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(65.0f, 191.0f, 57.0f);

	glVertex2f(10,19);
	glVertex2f(42,19);
    glVertex2f(42,22);
    glVertex2f(10,22);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(75.0f, 203.0f, 214.0f);

	glVertex2f(10,22);
	glVertex2f(42,22);
    glVertex2f(42,25);
    glVertex2f(10,25);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(85.0f, 148.0f, 195.0f);

	glVertex2f(10,25);
	glVertex2f(42,25);
    glVertex2f(42,28);
    glVertex2f(10,28);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(175.0f, 115.0f, 168.0f);

	glVertex2f(10,28);
	glVertex2f(42,28);
    glVertex2f(42,31);
    glVertex2f(10,31);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(23.0f, 32.0f, 42.0f);

	glVertex2f(10,10);
	glVertex2f(42,10);
    glVertex2f(42,13);
    glVertex2f(10,13);
    glVertex2f(10,13);
	glVertex2f(42,13);
    glVertex2f(42,16);
    glVertex2f(10,16);
    glVertex2f(10,16);
	glVertex2f(42,16);
    glVertex2f(42,19);
    glVertex2f(10,19);
    glVertex2f(10,19);
	glVertex2f(42,19);
    glVertex2f(42,22);
    glVertex2f(10,22);
    glVertex2f(10,22);
	glVertex2f(42,22);
    glVertex2f(42,25);
    glVertex2f(10,25);
    glVertex2f(10,25);
	glVertex2f(42,25);
    glVertex2f(42,28);
    glVertex2f(10,28);
    glVertex2f(10,28);
	glVertex2f(42,28);
    glVertex2f(42,31);
    glVertex2f(10,31);
    glVertex2f(10,10);
	glVertex2f(10,31);
    glVertex2f(42,31);
    glVertex2f(42,10);

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




