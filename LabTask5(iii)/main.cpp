#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
float _angle1=0.0f;
float _move=0.0f;
void wheel()
{
//first wheel
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glTranslatef(-0.4,0,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glLineWidth(5.0);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,0.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.8;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();

//second wheel
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glTranslatef(4.6,0,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
glColor3f(1.0,1.0,0.0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.8;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();

//inside circle of first wheel
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glTranslatef(-0.4,0,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glLineWidth(10.0);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
glColor3ub(151,154,154);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();

//inside circle of second wheel
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glTranslatef(4.6,0,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glLineWidth(10.0);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
glColor3ub(151,154,154);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.3;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
}


void drawScene() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3ub(205,97,85);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);

//car body
//red
glBegin(GL_QUADS);
glVertex2f(-3.0f, 0.0f);
glVertex2f(-3.0f, 4.0f);
glVertex2f(4.6f, 4.0f);
glVertex2f(4.6f, 0.0);
glEnd();

//light red down
glBegin(GL_QUADS);
glColor3ub(217,136,128);
glVertex2f(9.0f, 0.0f);
glVertex2f(9.0f, 2.0f);
glVertex2f(4.6f, 2.0f);
glVertex2f(4.6f, 0.0);
glEnd();

//light red up
glBegin(GL_QUADS);
glVertex2f(6.0f, 4.0f);
glVertex2f(7.2f, 2.0f);
glVertex2f(4.6f, 2.0f);
glVertex2f(4.6f, 4.0);
glEnd();

//window
glBegin(GL_QUADS);
glColor3ub(214,234,248);
glVertex2f(5.0f, 2.0f);
glVertex2f(5.0f, 3.5f);
glVertex2f(5.8f, 3.5f);
glVertex2f(6.6f, 2.0);
glEnd();

glBegin(GL_QUADS);
glVertex2f(4.0f, 2.0f);
glVertex2f(-2.0f, 2.0f);
glVertex2f(-2.0f, 3.5f);
glVertex2f(4.0f, 3.5);
glEnd();
wheel();
glPopMatrix();
glutSwapBuffers();
}

void update1(int value) {
_move += .02;
if(_move > 15.5)
{
_move = -14.0;
}
glutPostRedisplay();
glutTimerFunc(10, update1, 0);
}

void update2(int value) {

_angle1+=2.0f;
if(_angle1 > 360.0)
{
_angle1-=360;
}
glutPostRedisplay(); //Notify GLUT that the display has changed
glutTimerFunc(10, update2, 0); //Notify GLUT to call update again in 25 milliseconds
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800,800);
glutCreateWindow("Rotating Wheel");
glutDisplayFunc(drawScene);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-6, 12, -3, 7);
glMatrixMode(GL_MODELVIEW); // Switch back to modelview
glutTimerFunc(10, update1, 0); //Add a timer
glutTimerFunc(10, update1, 0);
glutMainLoop();
return 0;
}
