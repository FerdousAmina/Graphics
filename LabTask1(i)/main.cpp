#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(3);

	glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-4.0f, 3.0f);
	glVertex2f(5.0f, 3.0f);


	glVertex2f(5.0f, 3.0f);
	glVertex2f(5.0f, -3.0f);

	glVertex2f(5.0f, -3.0f);
	glVertex2f(-4.0f, -3.0f);

	glVertex2f(-4.0f, -3.0f);
    glVertex2f(-4.0f, 3.0f);
	glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Shapes");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
