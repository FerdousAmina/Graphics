#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	gluOrtho2D(-15.0, 15.0, -15.0, 15.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);

	glBegin(GL_POLYGON);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-11.7809201274182,5.003969709714);
	glVertex2f(-5.5544245201784,5.003969709714);
    glVertex2f(-5.6557995859183,10.2515584828607);
    glVertex2f(-11.7218532153821,10.2515584828607);
	glEnd();

	glBegin(GL_POLYGON);

	glColor3ub(34.0f, 153.0f, 84.0f);

	glVertex2f(2.2997039578354,6.8102762564084);
	glVertex2f(4.3724846895465,6.7201553550296);
    glVertex2f(4.3724846895465,5.8640067919316);
    glVertex2f(2.2997039578354,5.8640067919316);
	glEnd();

	glBegin(GL_POLYGON);

	glColor3ub(34.0f, 153.0f, 84.0f);

	glVertex2f(4.3724846895465,5.3908720596932);
	glVertex2f(4.3499544642018,7.2834109886468);
    glVertex2f(5.3187541540233,6.33714152417);
	glEnd();

	glBegin(GL_POLYGON);

	glColor3ub(125.0f, 60.0f, 152.0f);

	glVertex2f(-5.8614285225103,-7.6792847879612);
	glVertex2f(-5.9931513803292,-2.4312040925944);
	glVertex2f(-10.1753905055963,-5.0334862149828);
    glEnd();

    glBegin(GL_POLYGON);

	glColor3ub(255.0f, 225.0f, 112.0f);

	glVertex2f(3.4401213133287,-6.7528511887037);
	glVertex2f(8.202287360644,-6.6785472609154);
	glVertex2f(5.8350205932244,-3.5557698230427);
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
