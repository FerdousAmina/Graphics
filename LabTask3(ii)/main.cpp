#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.68f, 0.83f, 0.94f, 1.0f); // Set background color to black and opaque
	gluOrtho2D(2, 15.0, -2.0, 6.0);
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.0);

    //grass
	glBegin(GL_POLYGON);
	glColor3ub(39.0f, 174.0f, 96.0f);
	glVertex2f(-11,-0.29);
	glVertex2f(-11,1.2);
	glVertex2f(15,1.8);
	glVertex2f(15,-0.29);
	glEnd();

	//road
	glBegin(GL_POLYGON);
	glColor3ub(144.0f, 148.0f, 151.0f);
	glVertex2f(-11,-0.29);
	glVertex2f(-11,-3);
	glVertex2f(15,-3);
	glVertex2f(15,-0.29);
	glEnd();


    //tree
	glBegin(GL_QUADS);
	glColor3ub(99.0f, 56.0f, 52.0f);
	glVertex2f(9.5,-0.25);
	glVertex2f(9.5,0.9);
	glVertex2f(10.1,0.9);
	glVertex2f(10.1,-0.25);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(20.0f, 90.0f, 50.0f);
	glVertex2f(8,0.9);
	glVertex2f(11.6,0.9);
	glVertex2f(9.8,2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(25.0f, 111.0f, 61.0f);
	glVertex2f(8.3,1.15);
	glVertex2f(11.3,1.15);
	glVertex2f(9.8,2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(30.0f, 132.0f, 73.0f);
	glVertex2f(8.6,1.34);
	glVertex2f(11,1.34);
	glVertex2f(9.8,2);
	glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Tree");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}





