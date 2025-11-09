#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	gluOrtho2D(-10.0, 15.0, -2.0, 6.0);
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
	glColor3ub(166.0f, 172.0f, 175.0f);
	glVertex2f(-11,-0.29);
	glVertex2f(-11,-3);
	glVertex2f(15,-3);
	glVertex2f(15,-0.29);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255.0f, 255.0f, 255.0f);
	glVertex2f(-11,-1.01);
	glVertex2f(15,-1.01);
	glVertex2f(15,-1.03);
	glVertex2f(-11,-1.03);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-11,-1.10);
	glVertex2f(15,-1.10);
	glVertex2f(15,-1.12);
	glVertex2f(-11,-1.12);
	glEnd();



	//lamp post
	glBegin(GL_POLYGON);
	glColor3ub(128.0f, 139.0f, 150.0f);
	glVertex2f(3.2,-0.29);
	glVertex2f(2,-0.29);
	glVertex2f(2,-0.2);
	glVertex2f(3.2,-0.2);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(2.3,2.2);
	glVertex2f(2.3,-0.26);
    glVertex2f(2.7,-0.26);
	glVertex2f(2.7,2.2);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(2.7,2);
	glVertex2f(2.7,1.92);
	glVertex2f(3.22,1.92);
    glVertex2f(3.22,2);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(3.22,2.06);
	glVertex2f(3.22,1.8);
	glVertex2f(4.65,1.8);
    glVertex2f(4.65,2.06);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(253.0f, 254.0f, 254.0f);
	glVertex2f(3.4,1.84);
	glVertex2f(3.4,2.02);
	glVertex2f(4.5,2.02);
	glVertex2f(4.5,1.84);
	glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lamp Post");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}





