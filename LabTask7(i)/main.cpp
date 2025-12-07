#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

bool isDay = true; // Start with day scene
float timeOfDay = 0.0f; // Simulates time of day (0.0f to 1.0f)

// Function to render the day scene
void renderDayScene() {
    glClearColor(0.5f, 0.8f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
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

//building
	glBegin(GL_QUADS);
	glColor3ub(253.0f, 235.0f, 208.0f);
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

	glBegin(GL_LINES);
	glColor3ub(23.0f, 32.0f, 42.0f);
	glVertex2f(-0.5,-0.3);//building border
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

	glVertex2f(-2.5,-0.3);//building door border
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
    glFlush(); // Render the day scene
}

// Function to render the night scene
void renderNightScene() {
    glClearColor(0.0f, 0.0f, 0.2f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer (background)
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

//building
	glBegin(GL_QUADS);
	glColor3ub(253.0f, 235.0f, 208.0f);
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
	glColor3ub(247.0f, 220.0f, 111.0f);
	glVertex2f(3.4,1.84);
	glVertex2f(3.4,2.02);
	glVertex2f(4.5,2.02);
	glVertex2f(4.5,1.84);
	glEnd();

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

	glBegin(GL_LINES);
	glColor3ub(23.0f, 32.0f, 42.0f);
	glVertex2f(-0.5,-0.3);//building border
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

	glVertex2f(-2.5,-0.3);//building door border
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
    glFlush(); // Render the night scene
}

void timer(int value) {
    timeOfDay += 0.01f;
    if (timeOfDay >= 1.0f) {
        isDay = false;
    }

    if (isDay) {
        renderDayScene();
    } else {
        renderNightScene();
    }
    glutTimerFunc(50, timer, 0);
}

void init() {
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void display() {
    if (isDay) {
        renderDayScene();
    } else {
        renderNightScene();
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Automatic Day To Night Transition");
    gluOrtho2D(-10.0, 15.0, -2.0, 6.0);
    init();
    glutDisplayFunc(display);
    glutTimerFunc(50, timer, 0);
    glutMainLoop();
}
