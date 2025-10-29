#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	gluOrtho2D(-8.0, 15.0, -8.0, 15.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);

	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(1.6377890799126,2.6308576889196);
	glVertex2f(13.0602975814317,2.6308576889196);
    glVertex2f(11.2566635356988,9.8618868284401);
    glVertex2f(3.4205083448068,9.8618868284401);
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

