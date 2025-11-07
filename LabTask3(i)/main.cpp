#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.0f, 0.2f, 0.4f, 1.0f); // Set background color to black and opaque
	gluOrtho2D(-10.0, 4.0, -2.0, 8.0);
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.0);

	glBegin(GL_QUADS);
	glColor3ub(249.0f, 235.0f, 234.0f);
	glVertex2f(-6,-0.3);
	glVertex2f(-0.5,-0.3);
	glVertex2f(-0.5,5);
	glVertex2f(-6,5);
	glEnd();

	//building door
	glBegin(GL_QUADS);
	glColor3ub(161.0f, 136.0f, 127.0f);
	glVertex2f(-4,-0.3);
	glVertex2f(-2.5,-0.3);
	glVertex2f(-2.5,0.7);
	glVertex2f(-4,0.7);
	glEnd();

	//building windows
	glBegin(GL_QUADS);

	glVertex2f(-5.4,1.4);
	glVertex2f(-5,1.4);
	glVertex2f(-5,1.7);
	glVertex2f(-5.4,1.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-5.4,2.7);
	glVertex2f(-5,2.7);
	glVertex2f(-5,2.4);
	glVertex2f(-5.4,2.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-5.4,3.7);
	glVertex2f(-5.4,3.4);
	glVertex2f(-5,3.4);
	glVertex2f(-5,3.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-5.4,4.7);
	glVertex2f(-5,4.7);
	glVertex2f(-5,4.4);
	glVertex2f(-5.4,4.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-4.4,1.4);
	glVertex2f(-4,1.4);
	glVertex2f(-4,1.7);
	glVertex2f(-4.4,1.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-4.4,2.4);
	glVertex2f(-4,2.4);
	glVertex2f(-4,2.7);
	glVertex2f(-4.4,2.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-4.4,3.4);
	glVertex2f(-4,3.4);
	glVertex2f(-4,3.4);
	glVertex2f(-4,3.7);
	glVertex2f(-4,3.7);
	glVertex2f(-4.4,3.7);
	glVertex2f(-4.4,3.7);
	glVertex2f(-4.4,3.4);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-4.4,4.4);
	glVertex2f(-4,4.4);
	glVertex2f(-4,4.4);
	glVertex2f(-4,4.7);
	glVertex2f(-4,4.7);
	glVertex2f(-4.4,4.7);
	glVertex2f(-4.4,4.7);
	glVertex2f(-4.4,4.4);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-2.5,1.4);
	glVertex2f(-2.1,1.4);
	glVertex2f(-2.1,1.7);
	glVertex2f(-2.5,1.7);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-2.5,2.4);
	glVertex2f(-2.1,2.4);
	glVertex2f(-2.1,2.7);
	glVertex2f(-2.5,2.7);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-2.5,3.4);
	glVertex2f(-2.1,3.4);
	glVertex2f(-2.1,3.7);
	glVertex2f(-2.5,3.7);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-2.5,4.4);
	glVertex2f(-2.1,4.4);
	glVertex2f(-2.1,4.7);
	glVertex2f(-2.5,4.7);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-1.5,1.4);
	glVertex2f(-1.1,1.4);
	glVertex2f(-1.1,1.7);
	glVertex2f(-1.5,1.7);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-1.5,2.4);
	glVertex2f(-1.1,2.4);
	glVertex2f(-1.1,2.7);
	glVertex2f(-1.5,2.7);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-1.5,3.4);
	glVertex2f(-1.1,3.4);
	glVertex2f(-1.1,3.7);
	glVertex2f(-1.5,3.7);
	glEnd();

	glBegin(GL_QUADS);
    glVertex2f(-1.5,4.4);
	glVertex2f(-1.1,4.4);
	glVertex2f(-1.1,4.7);
	glVertex2f(-1.5,4.7);
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(23.0f, 32.0f, 42.0f);
	glVertex2f(-6,-0.3);//building border
	glVertex2f(-0.5,-0.3);
	glVertex2f(-0.5,-0.3);
	glVertex2f(-0.5,5);
	glVertex2f(-0.5,5);
	glVertex2f(-6,5);
	glVertex2f(-6,5);
	glVertex2f(-6,-0.3);//building border

	glVertex2f(-6,1);//building floor border
	glVertex2f(-0.5,1);
	glVertex2f(-0.5,2);
	glVertex2f(-6,2);
	glVertex2f(-6,3);
	glVertex2f(-0.5,3);
	glVertex2f(-0.5,4);
	glVertex2f(-6,4);//building floor border

	glVertex2f(-4,-0.3);//building door border
	glVertex2f(-2.5,-0.3);
	glVertex2f(-2.5,-0.3);
	glVertex2f(-2.5,0.7);
	glVertex2f(-2.5,0.7);
	glVertex2f(-4,0.7);
	glVertex2f(-4,0.7);
	glVertex2f(-4,-0.3);//building door border

	glVertex2f(-5.4,1.4);//building window
	glVertex2f(-5,1.4);
	glVertex2f(-5,1.4);
	glVertex2f(-5,1.7);
	glVertex2f(-5,1.7);
	glVertex2f(-5.4,1.7);
	glVertex2f(-5.4,1.7);
	glVertex2f(-5.4,1.4);

	glVertex2f(-5.4,2.7);
	glVertex2f(-5,2.7);
	glVertex2f(-5,2.7);
	glVertex2f(-5,2.4);
	glVertex2f(-5,2.4);
	glVertex2f(-5.4,2.4);
	glVertex2f(-5.4,2.4);
	glVertex2f(-5.4,2.7);

	glVertex2f(-5.4,3.7);
	glVertex2f(-5.4,3.4);
	glVertex2f(-5.4,3.4);
	glVertex2f(-5,3.4);
	glVertex2f(-5,3.4);
	glVertex2f(-5,3.7);
	glVertex2f(-5,3.7);
	glVertex2f(-5.4,3.7);

	glVertex2f(-5.4,4.7);
	glVertex2f(-5,4.7);
	glVertex2f(-5,4.7);
	glVertex2f(-5,4.4);
	glVertex2f(-5,4.4);
	glVertex2f(-5.4,4.4);
	glVertex2f(-5.4,4.4);
	glVertex2f(-5.4,4.7);

    glVertex2f(-4.4,1.4);
	glVertex2f(-4,1.4);
	glVertex2f(-4,1.4);
	glVertex2f(-4,1.7);
	glVertex2f(-4,1.7);
	glVertex2f(-4.4,1.7);
	glVertex2f(-4.4,1.7);
	glVertex2f(-4.4,1.4);

	glVertex2f(-4.4,2.4);
	glVertex2f(-4,2.4);
	glVertex2f(-4,2.4);
	glVertex2f(-4,2.7);
	glVertex2f(-4,2.7);
	glVertex2f(-4.4,2.7);
	glVertex2f(-4.4,2.7);
	glVertex2f(-4.4,2.4);

	glVertex2f(-4.4,3.4);
	glVertex2f(-4,3.4);
	glVertex2f(-4,3.4);
	glVertex2f(-4,3.7);
	glVertex2f(-4,3.7);
	glVertex2f(-4.4,3.7);
	glVertex2f(-4.4,3.7);
	glVertex2f(-4.4,3.4);

	glVertex2f(-4.4,4.4);
	glVertex2f(-4,4.4);
	glVertex2f(-4,4.4);
	glVertex2f(-4,4.7);
	glVertex2f(-4,4.7);
	glVertex2f(-4.4,4.7);
	glVertex2f(-4.4,4.7);
	glVertex2f(-4.4,4.4);

    glVertex2f(-2.5,1.4);
	glVertex2f(-2.1,1.4);
	glVertex2f(-2.1,1.4);
	glVertex2f(-2.1,1.7);
	glVertex2f(-2.1,1.7);
	glVertex2f(-2.5,1.7);
	glVertex2f(-2.5,1.7);
	glVertex2f(-2.5,1.4);

	glVertex2f(-2.5,2.4);
	glVertex2f(-2.1,2.4);
	glVertex2f(-2.1,2.4);
	glVertex2f(-2.1,2.7);
	glVertex2f(-2.1,2.7);
	glVertex2f(-2.5,2.7);
	glVertex2f(-2.5,2.7);
	glVertex2f(-2.5,2.4);

	glVertex2f(-2.5,3.4);
	glVertex2f(-2.1,3.4);
	glVertex2f(-2.1,3.4);
	glVertex2f(-2.1,3.7);
	glVertex2f(-2.1,3.7);
	glVertex2f(-2.5,3.7);
	glVertex2f(-2.5,3.7);
	glVertex2f(-2.5,3.4);

	glVertex2f(-2.5,4.4);
	glVertex2f(-2.1,4.4);
	glVertex2f(-2.1,4.4);
	glVertex2f(-2.1,4.7);
	glVertex2f(-2.1,4.7);
	glVertex2f(-2.5,4.7);
	glVertex2f(-2.5,4.7);
	glVertex2f(-2.5,4.4);

	glVertex2f(-1.5,1.4);
	glVertex2f(-1.1,1.4);
	glVertex2f(-1.1,1.4);
	glVertex2f(-1.1,1.7);
	glVertex2f(-1.1,1.7);
	glVertex2f(-1.5,1.7);
	glVertex2f(-1.5,1.7);
	glVertex2f(-1.5,1.4);

	glVertex2f(-1.5,2.4);
	glVertex2f(-1.1,2.4);
	glVertex2f(-1.1,2.4);
	glVertex2f(-1.1,2.7);
	glVertex2f(-1.1,2.7);
	glVertex2f(-1.5,2.7);
	glVertex2f(-1.5,2.7);
	glVertex2f(-1.5,2.4);

	glVertex2f(-1.5,3.4);
	glVertex2f(-1.1,3.4);
	glVertex2f(-1.1,3.4);
	glVertex2f(-1.1,3.7);
	glVertex2f(-1.1,3.7);
	glVertex2f(-1.5,3.7);
	glVertex2f(-1.5,3.7);
	glVertex2f(-1.5,3.4);

	glVertex2f(-1.5,4.4);
	glVertex2f(-1.1,4.4);
	glVertex2f(-1.1,4.4);
	glVertex2f(-1.1,4.7);
	glVertex2f(-1.1,4.7);
	glVertex2f(-1.5,4.7);
	glVertex2f(-1.5,4.7);
	glVertex2f(-1.5,4.4);

	glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Building");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}




