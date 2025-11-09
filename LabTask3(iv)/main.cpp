#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.68f, 0.83f, 0.94f, 1.0f); // Set background color to black and opaque
	gluOrtho2D(-3.0, 15.0, -0.6, 3.0);
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.0);


	//bench border
	glBegin(GL_QUADS);
	glColor3ub(84.0f, 110.0f, 122.0f);
    glVertex2f(5.05,-0.2);
	glVertex2f(5.06,0.06);
	glVertex2f(5.20,0.06);
	glVertex2f(5.19,-0.2);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(7.06,-0.2);
	glVertex2f(7.06,0.06);
	glVertex2f(7.20,0.06);
	glVertex2f(7.19,-0.2);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(123.0f, 36.0f, 28.0f);
	glVertex2f(5.15,0.0382);
	glVertex2f(7.06,0.0382);
	glVertex2f(7.06,-0.01);
	glVertex2f(5.15,-0.01);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(5.06,0.06);
	glVertex2f(5.24,0.12);
	glVertex2f(7.34,0.12);
	glVertex2f(7.20,0.06);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(5.30,0.14);
	glVertex2f(7.40,0.14);
    glVertex2f(7.54,0.20);
	glVertex2f(5.44,0.20);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(5.44,0.20);
	glVertex2f(5.44,0.25);
    glVertex2f(7.54,0.25);
	glVertex2f(7.54,0.20);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(5.44,0.27);
	glVertex2f(7.54,0.27);
    glVertex2f(7.54,0.33);
	glVertex2f(5.44,0.33);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23.0f, 32.0f, 42.0f);
	glVertex2f(5.05,-0.2);//bench border
	glVertex2f(5.06,0.06);
	glVertex2f(5.06,0.06);
	glVertex2f(5.20,0.06);
	glVertex2f(5.20,0.06);
	glVertex2f(5.19,-0.2);
	glVertex2f(5.19,-0.2);
	glVertex2f(5.05,-0.2);

	glVertex2f(7.06,-0.2);
	glVertex2f(7.06,0.06);
	glVertex2f(7.06,0.06);
	glVertex2f(7.20,0.06);
	glVertex2f(7.20,0.06);
	glVertex2f(7.19,-0.2);
	glVertex2f(7.19,-0.2);
	glVertex2f(7.06,-0.2);

	glVertex2f(7.09,-0.01);
	glVertex2f(7.09,-0.01);
	glVertex2f(5.15,-0.01);
	glVertex2f(5.15,-0.01);

	glVertex2f(5.06,0.06);
	glVertex2f(5.44,0.20);

    glVertex2f(7.20,0.06);
	glVertex2f(7.54,0.20);

    glVertex2f(7.54,0.20);
	glVertex2f(5.44,0.2);

	glVertex2f(5.44,0.20);
	glVertex2f(5.44,0.33);

	glVertex2f(5.44,0.33);
	glVertex2f(7.54,0.33);

	glVertex2f(7.54,0.33);
	glVertex2f(7.54,0.20);

	glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Bench");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}




