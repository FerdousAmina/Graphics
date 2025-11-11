#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);

	//ALL LINES
	glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(2,1.34);
	glVertex2f(3.28,1.34);

	glVertex2f(3.28,1.34);
	glVertex2f(4.06,1.67);

	glVertex2f(4.06,1.67);
	glVertex2f(4.437,1.83);

	glVertex2f(4.437,1.83);
	glVertex2f(4.808,1.919);

	glVertex2f(4.808,1.919);
	glVertex2f(4.99,1.93);

	glVertex2f(4.99,1.93);
	glVertex2f(5.203,1.919);

	glVertex2f(5.203,1.919);
	glVertex2f(5.567,1.83);

	glVertex2f(5.567,1.83);
	glVertex2f(5.78,1.67);

	glVertex2f(5.78,1.67);
    glVertex2f(6.57,1.34);

    glVertex2f(6.57,1.34);
    glVertex2f(8,1.34);

    glVertex2f(8,1.34);
    glVertex2f(8,1.34);

    glVertex2f(4.808,1.919);
	glVertex2f(5.146,1.919);

	glVertex2f(5.146,1.919);
	glVertex2f(5.094,3.127);

	glVertex2f(5.094,3.127);
    glVertex2f(4.857,3.127);

    glVertex2f(4.857,3.127);
    glVertex2f(4.808,1.919);

    glVertex2f(4.831,3.127);
    glVertex2f(5.121,3.127);

    glVertex2f(5.121,3.127);
    glVertex2f(5.151,3.33);

    glVertex2f(5.151,3.33);
    glVertex2f(4.80,3.33);

    glVertex2f(4.80,3.33);
    glVertex2f(4.831,3.127);

    glVertex2f(5.138,3.24);
    glVertex2f(4.812,3.24);

    glVertex2f(5.129,3.19);
    glVertex2f(4.8226,3.19);

    glVertex2f(4.87,3.33);
    glVertex2f(4.87,3.48);

    glVertex2f(4.924,3.33);
    glVertex2f(4.924,3.48);

    glVertex2f(5.039,3.33);
    glVertex2f(5.039,3.48);

    glVertex2f(5.093,3.33);
    glVertex2f(5.093,3.48);

    glVertex2f(4.924,3.42);
    glVertex2f(5.039,3.42);

    glVertex2f(4.83,3.48);
    glVertex2f(5.13,3.48);

    glVertex2f(4.83,3.48);
    glVertex2f(4.949,3.585);

    glVertex2f(5.13,3.48);
    glVertex2f(5.015,3.585);

    glVertex2f(4.95,2.23);
    glVertex2f(5.024,2.23);

    glVertex2f(5.024,2.23);
    glVertex2f(5.024,2.34);

    glVertex2f(5.024,2.34);
    glVertex2f(4.95,2.34);

    glVertex2f(4.95,2.34);
    glVertex2f(4.95,2.23);

    glVertex2f(4.95,2.95);
    glVertex2f(5.024,2.95);

    glVertex2f(5.024,2.95);
    glVertex2f(5.024,3.08);

    glVertex2f(5.024,3.08);
    glVertex2f(4.95,3.08);

    glVertex2f(4.95,3.08);
    glVertex2f(4.95,2.95);

    glVertex2f(4.73,3.44);
    glVertex2f(3.44,3.68);

    glVertex2f(4.69,3.34);
    glVertex2f(3.17,3.358);

    glVertex2f(4.7,3.228);
    glVertex2f(3.43,2.974);

    glVertex2f(5.29,3.43);
    glVertex2f(6.568,3.67);

    glVertex2f(5.332,3.349);
    glVertex2f(6.84,3.36);

    glVertex2f(5.32,3.24);
    glVertex2f(6.6,3);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(4.949,3.585);
	glVertex2f(5.015,3.585);
	glVertex2f(4.985,3.69);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Tower"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(0.0, 10.0, -1.0,8.0);// Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

