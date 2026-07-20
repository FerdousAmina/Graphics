//AMINA FERDOUS
//ID: 22-47822-2

#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include<cstdio>
#define MAX_DROPS 90000000
using namespace std;

float _angle1= 0.0f;
float _angle2= 0.0f;
float _move1 = 0.0f;  //wave 1
float _move2 = 0.0f;  //wave 2
float _move3 = 0.0f;  //wave 3
float _move4 = 0.0f;  //wave 4
float _move5 = 0.0f;  //wave 5
float _move6 = 0.0f;  //wave 6
float _move7 = 0.0f;  //wave 7
float _move8 = 0.0f;  //wave 8
float _move9 = 0.0f;  //boat3 moving
float _move10 = 0.0f; //boat1 and boat2 moving
float _move11 = 0.0f; //cloud1 moving
float _move12 = 0.0f; //cloud2 moving
float _move13 = 0.0f; //cloud3 moving
float _move14 = 0.0f; //tractor moving
float _move15 = 0.0f; //plane moving right
float _move16 = 0.0f; //plane moving up
float _move17 = 0.0f; //sun going down
float _move18 = 0.0f; //cloud4 moving
float _move19 = 0.0f; //cloud5 moving
float _move20 = 0.0f; //cloud6 moving
float _move21 = 0.0f; //moon moving
float _move22 = 0.0f; //tractor smoke moving

float dropX[MAX_DROPS];
float dropY[MAX_DROPS];
float dropSpeed[MAX_DROPS];
int dropCount = 0;
int elapsedMs = 0;

float boatSpeed = 0.15f;
bool sunStopped = false;
bool planeStopped = false;

void aDay();
void aNight();

//smalltree
void asmalltree()
{
    glBegin(GL_POLYGON);
    glColor3ub(67, 160, 71);
    glVertex2f(0,47);
    glVertex2f(0,52);
    glVertex2f(70,52);
    glVertex2f(70,47);
    glEnd();
}

void acircle1(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
    glColor3ub(r,g,b);
	for(int i=0;i<200;i++)
        {

            float pi =3.1416;
            float A =(i*2*pi)/200;
            float r = radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}

void acircle2()
{
	glLineWidth(2.0);
	acircle1(2.5,2.3,53.0,67, 160, 71);// small tree(light green)
    acircle1(1.4,6.0,52.5,67, 160, 71);// small tree(light green)
    acircle1(2.2,9.7,52.5,67, 160, 71);// small tree(light green)
    acircle1(2.2,13.0,52.0,67, 160, 71);// small tree(light green)
    acircle1(2.0,17.8,52.0,67, 160, 71);// small tree(light green)
    acircle1(2.4,22.5,52.5,67, 160, 71);// small tree(light green)
    acircle1(1.6,26.5,52.0,67, 160, 71);// small tree(light green)
    acircle1(1.9,30.0,52.5,67, 160, 71);// small tree(light green)
    acircle1(1.5,33.5,51.8,67, 160, 71);// small tree(light green)
    acircle1(1.7,36.5,51.9,67, 160, 71);// small tree(light green)
    acircle1(1.9,40.0,52.5,67, 160, 71);// small tree(light green)
    acircle1(1.5,43.4,51.8,67, 160, 71);// small tree(light green)
    acircle1(1.3,46.0,51.3,67, 160, 71);// small tree(light green)
    acircle1(2.2,49.0,52.5,67, 160, 71);// small tree(light green)
    acircle1(2.5,53.5,52.5,67, 160, 71);// small tree(light green)
    acircle1(1.9,58.0,52.0,67, 160, 71);// small tree(light green)
    acircle1(1.7,61.5,52.0,67, 160, 71);// small tree(light green)
    acircle1(1.5,64.8,51.5,67, 160, 71);// small tree(light green)
    acircle1(2.5,68.8,52.5,67, 160, 71);// small tree(light green)

    acircle1(2.3,3.5,48.1,25, 111, 61);// bigtree1 lower left circle (green)
    acircle1(2.3,6.2,47.9,25, 111, 61);// bigtree1 lower right circle (green)
    acircle1(2.5,5.0,50.8,25, 111, 61);// bigtree1 upper circle (green)

    acircle1(2.3,12.5,48.1,25, 111, 61);// bigtree2 lower left circle (green)
    acircle1(2.3,15.5,47.9,25, 111, 61);// bigtree2 lower right circle (green)
    acircle1(2.5,14.0,50.8,25, 111, 61);// bigtree1 upper circle (green)

    acircle1(2.3,64.5,48.1,25, 111, 61);// bigtree3 lower left circle (green)
    acircle1(2.3,67.2,47.9,25, 111, 61);// bigtree3 lower right circle (green)
    acircle1(2.5,66.0,50.8,25, 111, 61);// bigtree3 upper circle (green)
}
void acircle3()
{
    acircle1(1.0,59.0,49.0,0,0,0);//windmill black circle
    acircle1(0.8,59.0,49.0,169,169,169);//windmill grey circle
}

void acloud1()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move11, 0.0f, 0.0f);
    acircle1(2.0,3.5,70.0,236,240,241);// cloud1 middle circle
    acircle1(1.5,1.1,70.0,236,240,241);// cloud1 left circle
    acircle1(1.2,6.0,70.0,236,240,241);// cloud1 right circle
    glPopMatrix();
}

void acloud2()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move12, 0.0f, 0.0f);
    acircle1(2.0,36.0,73.0,236,240,241);// cloud2 middle circle
    acircle1(1.5,33.1,73.0,236,240,241);// cloud2 left circle
    acircle1(1.6,38.7,73.0,236,240,241);// cloud2 right circle
    glPopMatrix();
}

void acloud3()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move13, 0.0f, 0.0f);
    acircle1(2.0,62.0,69.0,236,240,241);// cloud3 middle circle
    acircle1(1.4,59.3,69.0,236,240,241);// cloud3 left circle
    acircle1(1.5,64.7,69.0,236,240,241);// cloud3 right circle
    glPopMatrix();
}

void acloud4()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move18, 0.0f, 0.0f);
    acircle1(2.0,26.0,69.0,236,240,241);// cloud3 middle circle
    acircle1(1.4,24.0,69.0,236,240,241);// cloud3 left circle
    acircle1(1.5,28.7,69.0,236,240,241);// cloud3 right circle
    glPopMatrix();
}

void acloud5()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move19, 0.0f, 0.0f);
    acircle1(2.0,50.5,76.0,236,240,241);// cloud1 middle circle
    acircle1(1.5,48.1,76.0,236,240,241);// cloud1 left circle
    acircle1(1.2,53.0,76.0,236,240,241);// cloud1 right circle
    glPopMatrix();
}

void acloud6()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move20, 0.0f, 0.0f);
    acircle1(2.0,15.5,78.0,236,240,241);// cloud1 middle circle
    acircle1(1.5,13.1,78.0,236,240,241);// cloud1 left circle
    acircle1(1.2,18.0,78.0,236,240,241);// cloud1 right circle
    glPopMatrix();
}

void asmoke()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move14, _move22, 0.0f);
    acircle1(0.4,32.1,36.4,236,240,241);
    acircle1(0.5,32.1,38.0,236,240,241);
    glPopMatrix();
}

//biggrass1
void abiggrass1()
{
    glBegin(GL_POLYGON);
    glColor3ub(124, 179, 66);
    glVertex2f(0,35);
    glVertex2f(0,50);
    glVertex2f(70,50);
    glVertex2f(70,35);
    glEnd();
}

//biggrass2
void abiggrass2()
{
    glBegin(GL_POLYGON);
    glColor3ub(124, 179, 66);
    glVertex2f(0,20);
    glVertex2f(0,25);
    glVertex2f(70,25);
    glVertex2f(70,4.5);
    glEnd();
}

//river
void ariver()
{
//bottom river portion
    glBegin(GL_POLYGON);
    glColor3ub(2, 136, 209);
    glVertex2f(0,0);
    glVertex2f(0,11);
    glVertex2f(70,11);
    glVertex2f(70,0);
    glEnd();

//first angle
    glBegin(GL_POLYGON);
    glVertex2f(0,11);
    glVertex2f(0,20);
    glVertex2f(28,18);
    glVertex2f(25,16);
    glVertex2f(25,11);
    glEnd();

//second angle
    glBegin(GL_POLYGON);
    glVertex2f(25,8);
    glVertex2f(25,15);
    glVertex2f(63,14);
    glVertex2f(60,12);
    glVertex2f(60,8);
    glEnd();
}

//waves
void awave()
{
//wave 1
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move1, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glColor3ub(25, 118, 210);
    glVertex2f(4,15);
    glVertex2f(5,16);

    glVertex2f(5,16);
    glVertex2f(6,15);

    glVertex2f(6,15);
    glVertex2f(7,16);

    glVertex2f(7,16);
    glVertex2f(8,15);

    glVertex2f(8,15);
    glVertex2f(9,16);

    glVertex2f(9,16);
    glVertex2f(10,15);

    glVertex2f(10,15);
    glVertex2f(11,16);
    glEnd();
    glPopMatrix();

//wave 2
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2f(1,7);
    glVertex2f(2,8);

    glVertex2f(2,8);
    glVertex2f(3,7);

    glVertex2f(3,7);
    glVertex2f(4,8);

    glVertex2f(4,8);
    glVertex2f(5,7);

    glVertex2f(5,7);
    glVertex2f(6,8);

    glVertex2f(6,8);
    glVertex2f(7,7);

    glVertex2f(7,7);
    glVertex2f(8,8);
    glEnd();
    glPopMatrix();

//wave 3
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2f(19,12);
    glVertex2f(20,13);

    glVertex2f(20,13);
    glVertex2f(21,12);

    glVertex2f(21,12);
    glVertex2f(22,13);

    glVertex2f(22,13);
    glVertex2f(23,12);

    glVertex2f(23,12);
    glVertex2f(24,13);

    glVertex2f(24,13);
    glVertex2f(25,12);

    glVertex2f(25,12);
    glVertex2f(26,13);
    glEnd();
    glPopMatrix();

//wave 4
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move4, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2f(23,5);
    glVertex2f(24,6);

    glVertex2f(24,6);
    glVertex2f(25,5);

    glVertex2f(25,5);
    glVertex2f(26,6);

    glVertex2f(26,6);
    glVertex2f(27,5);

    glVertex2f(27,5);
    glVertex2f(28,6);

    glVertex2f(28,6);
    glVertex2f(29,5);

    glVertex2f(29,5);
    glVertex2f(30,6);
    glEnd();
    glPopMatrix();

//wave 5
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move5, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2f(33,2);
    glVertex2f(34,3);

    glVertex2f(34,3);
    glVertex2f(35,2);

    glVertex2f(35,2);
    glVertex2f(36,3);

    glVertex2f(36,3);
    glVertex2f(37,2);

    glVertex2f(37,2);
    glVertex2f(38,3);

    glVertex2f(38,3);
    glVertex2f(39,2);

    glVertex2f(39,2);
    glVertex2f(40,3);
    glEnd();
    glPopMatrix();

//wave 6
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2f(43,6);
    glVertex2f(44,7);

    glVertex2f(44,7);
    glVertex2f(45,6);

    glVertex2f(45,6);
    glVertex2f(46,7);

    glVertex2f(46,7);
    glVertex2f(47,6);

    glVertex2f(47,6);
    glVertex2f(48,7);

    glVertex2f(48,7);
    glVertex2f(49,6);

    glVertex2f(49,6);
    glVertex2f(50,7);
    glEnd();
    glPopMatrix();

//wave 7
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2f(54,8);
    glVertex2f(55,9);

    glVertex2f(55,9);
    glVertex2f(56,8);

    glVertex2f(56,8);
    glVertex2f(57,9);

    glVertex2f(57,9);
    glVertex2f(58,8);

    glVertex2f(58,8);
    glVertex2f(59,9);

    glVertex2f(59,9);
    glVertex2f(60,8);

    glVertex2f(60,8);
    glVertex2f(61,9);
    glEnd();
    glPopMatrix();

//wave 8
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move6, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2f(62,3);
    glVertex2f(63,4);

    glVertex2f(63,4);
    glVertex2f(64,3);

    glVertex2f(64,3);
    glVertex2f(65,4);

    glVertex2f(65,4);
    glVertex2f(66,3);

    glVertex2f(66,3);
    glVertex2f(67,4);

    glVertex2f(67,4);
    glVertex2f(68,3);

    glVertex2f(68,3);
    glVertex2f(69,4);
    glEnd();
    glPopMatrix();
}

//stick1
void astick1()
{
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(135, 54, 0);
    glVertex2f(35,15);
    glVertex2f(35,20);
    glEnd();
}

//stick2
void astick2()
{
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(135, 54, 0);
    glVertex2f(48,14);
    glVertex2f(48,19);
    glEnd();
}

//boat1
void aboat1()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move10, 0.0f, 0.0f);

//lower middle part
    glBegin(GL_POLYGON);
    glColor3ub(78, 52, 46);//dark brown
    glVertex2f(35,13.5);
    glVertex2f(35,15);
    glVertex2f(43,15);
    glVertex2f(43,13.5);
    glEnd();

//lower left part
    glBegin(GL_POLYGON);
    glVertex2f(35,13.5);
    glVertex2f(33,16);
    glVertex2f(36,15);
    glEnd();

//lower right part
    glBegin(GL_POLYGON);
    glVertex2f(43,13.5);
    glVertex2f(45,16);
    glVertex2f(42,15);
    glEnd();

//upper left part
    glBegin(GL_POLYGON);
    glColor3ub(229, 152, 102);
    glVertex2f(36,15);
    glVertex2f(37,17.2);
    glVertex2f(38,15);
    glEnd();

//upper right part
    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex2f(38,15);
    glVertex2f(37,17.2);
    glVertex2f(41,17.2);
    glVertex2f(42,15);
    glEnd();
    glPopMatrix();
}

//boat2
void aboat2()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move10, 0.0f, 0.0f);

//lower middle part
    glBegin(GL_POLYGON);
    glColor3ub(78, 52, 46);//dark brown
    glVertex2f(48,12.5);
    glVertex2f(48,14);
    glVertex2f(56,14);
    glVertex2f(56,12.5);
    glEnd();

//lower left part
    glBegin(GL_POLYGON);
    glVertex2f(48,12.5);
    glVertex2f(46,15);
    glVertex2f(49,14);
    glEnd();

//lower right part
    glBegin(GL_POLYGON);
    glVertex2f(56,12.5);
    glVertex2f(58,15);
    glVertex2f(55,14);
    glEnd();

//upper left part
    glBegin(GL_POLYGON);
    glColor3ub(230, 126, 34);
    glVertex2f(49,14);
    glVertex2f(50,16.2);
    glVertex2f(51,14);
    glEnd();

//upper right part
    glBegin(GL_POLYGON);
    glColor3ub(165, 42, 42);
    glVertex2f(51,14);
    glVertex2f(50,16.2);
    glVertex2f(54,16.2);
    glVertex2f(55,14);
    glEnd();
}

//boat3
void aboat3()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move9, 0.0f, 0.0f);

//lower middle part
    glBegin(GL_POLYGON);
    glColor3ub(78, 52, 46);//dark brown
    glVertex2f(6.5,2);
    glVertex2f(7,4);
    glVertex2f(16,4);
    glVertex2f(16,2);
    glEnd();

//lower left part
    glBegin(GL_POLYGON);
    glVertex2f(6.5,2);
    glVertex2f(4,5);
    glVertex2f(7,4);
    glEnd();

//lower right part
    glBegin(GL_POLYGON);
    glVertex2f(16,2);
    glVertex2f(19,5);
    glVertex2f(16,4);
    glEnd();

//upper left part
    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(7,4);
    glVertex2f(8.5,7);
    glVertex2f(10,4);
    glEnd();

//upper right part
    glBegin(GL_POLYGON);
    glColor3ub(204, 0, 0);
    glVertex2f(10,4);
    glVertex2f(8.5,7);
    glVertex2f(15,7);
    glVertex2f(16,4);
    glEnd();

//stick
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(135, 54, 0);
    glVertex2f(12,7);
    glVertex2f(12,14.5);
    glEnd();

//sailing cloth
    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex2f(10.8,8);
    glVertex2f(10.8,13);
    glVertex2f(13.2,13);
    glVertex2f(13.2,8);
    glEnd();
    glPopMatrix();
}
//tractor
void atractor()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move14, 0.0f, 0.0f);

//upper red part
    glBegin(GL_POLYGON);
    glColor3ub(204, 0, 0);
    glVertex2f(33.5,37.5);
    glVertex2f(33.5,38);
    glVertex2f(40.8,38);
    glVertex2f(40.8,37.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(33.5,37.5);
    glVertex2f(33.5,38);

    glVertex2f(33.5,38);
    glVertex2f(40.8,38);

    glVertex2f(40.8,38);
    glVertex2f(40.8,37.5);

    glVertex2f(40.8,37.5);
    glVertex2f(40.8,37.5);
    glEnd();

//lower red part
    glBegin(GL_POLYGON);
    glColor3ub(204, 0, 0);
    glVertex2f(31.2,34.0);
    glVertex2f(40.5,34.0);
    glVertex2f(40.5,28.0);
    glVertex2f(31.2,28.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(31.2,34.0);
    glVertex2f(40.5,34.0);

    glVertex2f(40.5,34.0);
    glVertex2f(40.5,28.0);

    glVertex2f(40.5,28.0);
    glVertex2f(31.2,28.0);

    glVertex2f(31.2,28.0);
    glVertex2f(31.2,34.0);
    glEnd();

//window
    glBegin(GL_POLYGON);
    glColor3ub(167, 199, 231);
    glVertex2f(40.5,37.5);
    glVertex2f(40.5,34.0);
    glVertex2f(33.0,34.0);
    glVertex2f(34.0,37.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(40.5,37.5);
    glVertex2f(40.5,34.0);

    glVertex2f(40.5,34.0);
    glVertex2f(33.0,34.0);

    glVertex2f(33.0,34.0);
    glVertex2f(34.0,37.5);

    glVertex2f(34.0,37.5);
    glVertex2f(40.5,37.5);

    glVertex2f(36.0,34.0);
    glVertex2f(36.0,37.5);
    glEnd();

//yellow part
    glBegin(GL_POLYGON);
    glColor3ub(255, 192, 0);
    glVertex2f(31.2,32.5);
    glVertex2f(32.0,32.5);
    glVertex2f(32.0,31.5);
    glVertex2f(31.2,31.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(31.2,32.5);
    glVertex2f(32.0,32.5);

    glVertex2f(32.0,32.5);
    glVertex2f(32.0,31.5);

    glVertex2f(32.0,31.5);
    glVertex2f(31.2,31.5);

    glVertex2f(31.2,31.5);
    glVertex2f(31.2,32.5);
    glEnd();

//exhaust pipe lower
    glBegin(GL_POLYGON);
    glColor3ub(129, 133, 137);
    glVertex2f(31.8,34.0);
    glVertex2f(31.8,34.7);
    glVertex2f(32.3,34.7);
    glVertex2f(32.3,34.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(31.8,34.0);
    glVertex2f(31.8,34.7);

    glVertex2f(31.8,34.7);
    glVertex2f(32.3,34.7);

    glVertex2f(32.3,34.7);
    glVertex2f(32.3,34.0);

    glVertex2f(32.3,34.0);
    glVertex2f(31.8,34.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(129, 133, 137);
    glVertex2f(31.6,34.7);
    glVertex2f(31.6,35.4);
    glVertex2f(32.5,35.4);
    glVertex2f(32.5,34.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(31.6,34.7);
    glVertex2f(31.6,35.4);

    glVertex2f(31.6,35.4);
    glVertex2f(32.5,35.4);

    glVertex2f(32.5,35.4);
    glVertex2f(32.5,34.7);

    glVertex2f(32.5,34.7);
    glVertex2f(31.6,34.7);
    glEnd();
    glPopMatrix();

//WHEEL1
    glPushMatrix();
    glTranslatef(_move14, 0.0f, 0.0f);
    glTranslatef(32.7,28,0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.4;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

//inside circle of WHEEL1
    glPushMatrix();
    glTranslatef(_move14, 0.0f, 0.0f);
    glTranslatef(32.7,28,0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3ub(151,154,154);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.0;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

//WHEEL2
    glPushMatrix();
    glTranslatef(_move14, 0.0f, 0.0f);
    glTranslatef(38.5,28.3,0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glLineWidth(6.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3f(1.0,1.0,0.0);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.8;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

//inside circle of WHEEL2
    glPushMatrix();
    glTranslatef(_move14, 0.0f , 0.0f);
    glTranslatef(38.5,28.3,0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glLineWidth(9.0);
    glBegin(GL_LINES);
    for(int i=0;i<200;i++)
    {
    glColor3ub(151,154,154);
    float pi=3.1416;
    float A=(i*2*pi)/200;
    float r=1.2;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
}

//plane
    void aplane()
    {
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move15,_move16, 0.0f);

//right part
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(21.0,69.0);
    glVertex2f(21.0,70.0);
    glVertex2f(19.5,71.5);
    glVertex2f(18.5,68.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(21.0,69.0);
    glVertex2f(21.0,70.0);

    glVertex2f(21.0,70.0);
    glVertex2f(19.5,71.5);

    glVertex2f(21.0,69.0);
    glVertex2f(18.5,68.0);
    glEnd();

//left part
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(12.5,68.5);
    glVertex2f(14.5,71.0);
    glVertex2f(19.5,71.5);
    glVertex2f(18.5,68.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(14.5,71.0);
    glVertex2f(19.5,71.5);

    glVertex2f(18.5,68.0);
    glVertex2f(12.5,68.5);
    glEnd();

//lower red part
//left part
    glBegin(GL_POLYGON);
    glColor3ub(220, 20, 60);
    glVertex2f(12.5,68.5);
    glVertex2f(14.5,71.0);
    glVertex2f(9.0,69.5);
    glVertex2f(9.0,69.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(12.5,68.5);
    glVertex2f(14.5,71.0);

    glVertex2f(14.5,71.0);
    glVertex2f(9.0,69.5);

    glVertex2f(12.5,68.5);
    glVertex2f(9.0,69.0);
    glEnd();

//upper red part
    glBegin(GL_POLYGON);
    glColor3ub(220, 20, 60);
    glVertex2f(13.0,73.5);
    glVertex2f(14.5,71.0);
    glVertex2f(12.5,70.5);
    glVertex2f(12.0,73.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(13.0,73.5);
    glVertex2f(14.5,71.0);

    glVertex2f(14.5,71.0);
    glVertex2f(12.5,70.5);

    glVertex2f(12.5,70.5);
    glVertex2f(12.0,73.5);

    glVertex2f(12.0,73.5);
    glVertex2f(13.0,73.5);
    glEnd();

//lower red part
    glBegin(GL_POLYGON);
    glColor3ub(220, 20, 60);
    glVertex2f(13.5,69.0);
    glVertex2f(14.5,69.0);
    glVertex2f(15.5,67.0);
    glVertex2f(14.0,67.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(13.5,69.0);
    glVertex2f(14.5,69.0);

    glVertex2f(14.5,69.0);
    glVertex2f(15.5,67.0);

    glVertex2f(15.5,67.0);
    glVertex2f(14.0,67.0);

    glVertex2f(14.0,67.0);
    glVertex2f(13.5,69.0);
    glEnd();

//lower white part
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(14.7,68.5);
    glVertex2f(17.7,68.5);
    glVertex2f(17.0,67.0);
    glVertex2f(15.5,67.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(17.7,68.3);
    glVertex2f(17.0,67.0);

    glVertex2f(17.0,67.0);
    glVertex2f(15.5,67.0);

    glVertex2f(15.5,67.0);
    glVertex2f(14.7,68.5);
    glEnd();

//upper white part
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(17.8,68.5);
    glVertex2f(18.2,68.5);
    glVertex2f(17.8,67.5);
    glVertex2f(17.3,67.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(15.5,68.6);
    glVertex2f(18.3,68.7);

    glVertex2f(18.3,68.7);
    glVertex2f(17.8,67.5);

    glVertex2f(17.8,67.5);
    glVertex2f(17.3,67.5);
    glEnd();

//main window
    glBegin(GL_POLYGON);
    glColor3ub(41, 128, 185);
    glVertex2f(21.0,69.1);
    glVertex2f(21.0,70.0);
    glVertex2f(20.2,70.0);
    glVertex2f(20.2,69.1);
    glEnd();

    acircle1(0.3,14.9,69.5, 41, 128, 185);// plane circle1
    acircle1(0.3,15.7,69.5, 41, 128, 185);// plane circle2
    acircle1(0.3,16.4,69.5, 41, 128, 185);// plane circle3
    acircle1(0.3,17.2,69.5, 41, 128, 185);// plane circle4
    acircle1(0.3,18.0,69.5, 41, 128, 185);// plane circle5
    glPopMatrix();
}

void abladerotation()
{
    glPushMatrix();
    glTranslatef(59.0f, 49.0f, 0.0f);  // Move to center of rotation
    glRotatef(_angle2, 0.0f, 0.0f, 1.0f);  // Rotate blades
    glTranslatef(-59.0f, -49.0f, 0.0f); // Move back to original position

// Blade 1
    glBegin(GL_POLYGON);
    glColor3ub(70, 130, 180);
    glVertex2f(57,47);
    glVertex2f(57.5,46.5);
    glVertex2f(61,51);
    glVertex2f(60.5,51.5);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(57.5,46.5);
    glVertex2f(61,51);

    glVertex2f(60.5,51.5);
    glVertex2f(57,47);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(58,46);
    glVertex2f(53.5,40.5);
    glVertex2f(51.5,43.5);
    glVertex2f(56,48);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(58,46);
    glVertex2f(53.5,40.5);

    glVertex2f(53.5,40.5);
    glVertex2f(51.5,43.5);

    glVertex2f(51.5,43.5);
    glVertex2f(56,48);

    glVertex2f(56,48);
    glVertex2f(58,46);

    glVertex2f(57.5,46.5);
    glVertex2f(53.1,41.3);

    glVertex2f(56.6,47.2);
    glVertex2f(52.2,42.6);

    glVertex2f(55,42.2);
    glVertex2f(53,45);

    glVertex2f(56.5,44.2);
    glVertex2f(54.5,46.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(61.5,50.5);
    glVertex2f(65.6,56);
    glVertex2f(63.7,59);
    glVertex2f(59.5,52.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(61.5,50.5);
    glVertex2f(65.6,56);

    glVertex2f(65.6,56);
    glVertex2f(63.7,59);

    glVertex2f(63.7,59);
    glVertex2f(59.5,52.5);

    glVertex2f(59.5,52.5);
    glVertex2f(61.5,50.5);

    glVertex2f(60.2,51.9);
    glVertex2f(64.4,58);

    glVertex2f(60.2,49.9);
    glVertex2f(65.2,56.8);

    glVertex2f(62.3,56.9);
    glVertex2f(64.2,53.9);

    glVertex2f(61.2,54.9);
    glVertex2f(63,52.3);
    glEnd();

//Blade 2
    glBegin(GL_POLYGON);
    glColor3ub(70, 130, 180);
    glVertex2f(57,51);
    glVertex2f(57.5,51.5);
    glVertex2f(61,47);
    glVertex2f(60.5,46.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(57.5,51.5);
    glVertex2f(61,47);

    glVertex2f(60.5,46.5);
    glVertex2f(57,51);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(56.5,50.5);
    glVertex2f(52,56);
    glVertex2f(54.2,59);
    glVertex2f(58.5,52.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(56.5,50.5);
    glVertex2f(52,56);

    glVertex2f(52,56);
    glVertex2f(54.2,59);

    glVertex2f(54.2,59);
    glVertex2f(58.5,52.5);

    glVertex2f(58.5,52.5);
    glVertex2f(56.5,50.5);

    glVertex2f(57,51);
    glVertex2f(52.7,57);

    glVertex2f(57.9,51.7);
    glVertex2f(53.4,58.2);

    glVertex2f(53.3,54.2);
    glVertex2f(55.3,57);

    glVertex2f(55,52.2);
    glVertex2f(57.1,54.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(60,46);
    glVertex2f(64.5,40.5);
    glVertex2f(66.5,42.5);
    glVertex2f(62,49);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(60,46);
    glVertex2f(64.5,40.5);

    glVertex2f(64.5,40.5);
    glVertex2f(66.5,42.5);

    glVertex2f(66.5,42.5);
    glVertex2f(62,49);

    glVertex2f(62,49);
    glVertex2f(60,46);

    glVertex2f(61.3,48);
    glVertex2f(65.8,41.8);

    glVertex2f(60.6,47);
    glVertex2f(65.1,41);

    glVertex2f(63.1,47.3);
    glVertex2f(61.1,44.4);

    glVertex2f(65.1,44.7);
    glVertex2f(63.1,42.4);
    glEnd();
    glPopMatrix();
}

void update1(int value) {

    _move1 += 0.20f;  //wave 1 moves right
    _move2 += 0.20f;  //wave 2 moves right
    _move3 += 0.20f;  //wave 3 moves right
    _move4 += 0.20f;  //wave 4 moves right
    _move5 += 0.20f;  //wave 5 moves right
    _move6 += 0.20f;  //wave 6 moves right
    _move7 += 0.20f;  //wave 7 moves right
    _move8 += 0.20f;  //wave 8 moves right
    _move9 += boatSpeed;  //boat3 moves
    _move10 += 0.003; //boat1 and boat2 moves right
    _move11 += 0.01f; //cloud1 moves right
    _move12 -= 0.01f; //cloud2 moves left
    _move13 -= 0.01f; //cloud3 moves left
    _move14 -= 0.09f; //tractor moves left
    _move18 -= 0.01f; //cloud4 moves left
    _move19 += 0.01f; //cloud5 moves right
    _move20 += 0.01f; //cloud6 moves right
    _move21 += 0.014f; //moon goes up
    _move22 += 0.09f; //smoke goes up

    if (_move1 > 14.0f) _move1 = -15.5f;
    if (_move2 > 69.0f) _move2 = -10.5f;
    if (_move3 > 35.0f) _move3 = -20.5f;
    if (_move4 > 45.0f) _move4 = -30.5f;
    if (_move5 > 40.0f) _move5 = -40.5f;
    if (_move6 > 30.0f) _move6 = -50.5f;
    if (_move7 > 20.0f) _move7 = -60.5f;
    if (_move8 > 10.0f) _move8 = -65.5f;
    if (_move9 > 65.0f) _move9 = -75.5f;
    if (_move9 < -75.5f) _move9 = 65.0f;
    if (_move10 > 0.3f) _move10 = 0.0f;
    if (_move11 > 73.0f) _move11 = -10.0f;
    if (_move12 < -42.0f) _move12 = 42.0f;
    if (_move13 < -66.0f) _move13 = 23.0f;
    if (_move14 < -45.0f) _move14 = 50.0f;
    if (_move18 < -30.0f) _move18 = 60.0f;
    if (_move19 > 30.0f) _move19 = -70.0f;
    if (_move20 > 65.0f) _move20 = -15.0f;
    if (_move21 > 20.0f) _move21 = 20.0f;
    if (_move22 > 2.0f) _move22 = -2.0f;

    if (!planeStopped) {
    _move15 += 0.1f;
    _move16 += 0.009f;
    }
   if (!sunStopped) {
    _move17 -= 0.014f;
    }

    glutPostRedisplay();
    glutTimerFunc(1, update1, 0);
}

void update2(int value) {
    _angle1 += 1.0f;  //wheel
    if (_angle1 > 360) _angle1 -= 360;

     _angle2 += 2.0f; //windmill
    if (_angle2 > 360) _angle2 -= 360;

    glutPostRedisplay();
    glutTimerFunc(20, update2, 0);
}

void handleMouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_RIGHT_BUTTON) {
            if (boatSpeed < 0.0f) {
                boatSpeed = 0.05f;
            } else {
                boatSpeed += 0.05f;
            }
            sunStopped = true;
        } else if (button == GLUT_LEFT_BUTTON) {
            if (boatSpeed > 0.0f) {
                boatSpeed = -0.05f;
            } else {
                boatSpeed -= 0.05f;
            }
            planeStopped = true;
        }
    }
}

//road
void aroad()
{
    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(0,25);
    glVertex2f(0,35);
    glVertex2f(70,35);
    glVertex2f(70,25);
    glEnd();
}

//house1
void ahouse1()
{
//ceiling left part
    glBegin(GL_POLYGON);
    glColor3ub(192, 57, 43);
    glVertex2f(17,42);
    glVertex2f(20,46);
    glVertex2f(20.5,45);
    glVertex2f(18,42);
    glEnd();

//ceiling right part
    glBegin(GL_POLYGON);

    glVertex2f(20,46);
    glVertex2f(28,46);
    glVertex2f(30,42);
    glVertex2f(22,42);
    glEnd();

//middle left part
    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(18,38.5);
    glVertex2f(18,42);
    glVertex2f(20.5,45);
    glVertex2f(22,42);
    glVertex2f(22,38.5);
    glEnd();

//middle right part
    glBegin(GL_POLYGON);
    glColor3ub(245, 176, 65);
    glVertex2f(22,38.5);
    glVertex2f(22,42);
    glVertex2f(29,42);
    glVertex2f(29,38.5);
    glEnd();

//lower left part
    glBegin(GL_POLYGON);
    glColor3ub(192, 57, 43);
    glVertex2f(17,37.5);
    glVertex2f(18,38.5);
    glVertex2f(22,38.5);
    glVertex2f(23,37.5);
    glEnd();

//lower right part
    glBegin(GL_POLYGON);
    glColor3ub(192, 57, 43);
    glVertex2f(23,37.5);
    glVertex2f(22,38.5);
    glVertex2f(29,38.5);
    glVertex2f(30,37.5);
    glEnd();

//door
    glBegin(GL_POLYGON);
    glColor3ub(110, 44, 0);
    glVertex2f(24.5,38.5);
    glVertex2f(24.5,41);
    glVertex2f(26.5,41);
    glVertex2f(26.5,38.5);
    glEnd();
}

//house2
void ahouse2()
{
//ceiling left part
    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex2f(31,43);
    glVertex2f(34,47);
    glVertex2f(34.5,46);
    glVertex2f(32,43);
    glEnd();

//ceiling right part
    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex2f(34,47);
    glVertex2f(42,47);
    glVertex2f(44,43);
    glVertex2f(36,43);
    glEnd();

//middle left part
    glBegin(GL_POLYGON);
    glColor3ub(245, 222, 179);
    glVertex2f(32,39.5);
    glVertex2f(32,43);
    glVertex2f(34.5,46);
    glVertex2f(36,43);
    glVertex2f(36,39.5);
    glEnd();

//middle right part
    glBegin(GL_POLYGON);
    glColor3ub(248, 196, 113);
    glVertex2f(36,39.5);
    glVertex2f(36,43);
    glVertex2f(43,43);
    glVertex2f(43,39.5);
    glEnd();

//lower left part
    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex2f(31,38.5);
    glVertex2f(32,39.5);
    glVertex2f(36,39.5);
    glVertex2f(37,38.5);
    glEnd();

//lower right part
    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex2f(37,38.5);
    glVertex2f(36,39.5);
    glVertex2f(43,39.5);
    glVertex2f(44,38.5);
    glEnd();

//door
    glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19);
    glVertex2f(38.5,39.5);
    glVertex2f(38.5,42);
    glVertex2f(40.5,42);
    glVertex2f(40.5,39.5);
    glEnd();
}

//haystock1
void ahaystock1()
{
    glBegin(GL_POLYGON);
    glColor3ub(244, 187, 68);
    glVertex2f(45,41);
    glVertex2f(45.2,44);
    glVertex2f(46.5,45);
    glVertex2f(47.8,44);
    glVertex2f(48,41);
    glEnd();
}

//haystock2
void ahaystock2()
{
    glBegin(GL_POLYGON);
    glColor3ub(244, 187, 68);
    glVertex2f(50,39);
    glVertex2f(50.2,42);
    glVertex2f(51.5,43);
    glVertex2f(52.8,42);
    glVertex2f(52.8,39);
    glEnd();
}

void abigtree1()
{
//upper left part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(3,47);
    glVertex2f(3.5,48);
    glVertex2f(5,45);
    glVertex2f(4,44.3);
    glEnd();

//upper right part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(7,47);
    glVertex2f(6,47.7);
    glVertex2f(5,45);
    glVertex2f(6,44.5);
    glEnd();

//middle part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(4,37);
    glVertex2f(4,45);
    glVertex2f(6,45);
    glVertex2f(6,37);
    glEnd();

//lower left part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(2,36.5);
    glVertex2f(5,37.5);
    glVertex2f(4,36.5);
    glVertex2f(2,36.5);
    glEnd();

//lower middle part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(5,37.5);
    glVertex2f(5.5,36);
    glVertex2f(3.8,36.8);
    glEnd();

//lower right part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(6,37.5);
    glVertex2f(7.5,36);
    glVertex2f(4.8,36.7);
    glEnd();
}

void abigtree2()
{
//upper left part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(12,47);
    glVertex2f(12.5,48);
    glVertex2f(14,45);
    glVertex2f(13,44.3);
    glEnd();

//upper right part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(16,47);
    glVertex2f(15,47.7);
    glVertex2f(14,45);
    glVertex2f(15,44.5);
    glEnd();

//middle part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(13,37);
    glVertex2f(13,45);
    glVertex2f(15,45);
    glVertex2f(15,37);
    glEnd();

//lower left part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(11,36.5);
    glVertex2f(14,37.5);
    glVertex2f(13,36.5);
    glVertex2f(11,36.5);
    glEnd();

//lower middle part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(14,37.5);
    glVertex2f(14.5,36);
    glVertex2f(12.8,36.8);
    glEnd();

//lower right part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(15,37.5);
    glVertex2f(16.5,36);
    glVertex2f(13.8,36.7);
    glEnd();
}

void abigtree3()
{
    //upper left part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(64,47);
    glVertex2f(64.5,48);
    glVertex2f(66,45);
    glVertex2f(65,44.3);
    glEnd();

//upper right part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(68,47);
    glVertex2f(67,47.7);
    glVertex2f(66,45);
    glVertex2f(67,44.5);
    glEnd();

//middle part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(65,37);
    glVertex2f(65,45);
    glVertex2f(67,45);
    glVertex2f(67,37);
    glEnd();

//lower left part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(63,36.5);
    glVertex2f(66,37.5);
    glVertex2f(65,36.5);
    glVertex2f(63,36.5);
    glEnd();

//lower middle part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(66,37.5);
    glVertex2f(66.5,36);
    glVertex2f(64.8,36.8);
    glEnd();

//lower right part
    glBegin(GL_POLYGON);
    glColor3ub(93, 64, 55);
    glVertex2f(67,37.5);
    glVertex2f(68.5,36);
    glVertex2f(65.8,36.7);
    glEnd();
}

void awindmil()
{
    glBegin(GL_POLYGON);
    glColor3ub(165, 42, 42); //lower red part
    glVertex2f(55,21);
    glVertex2f(54.8,19.5);
    glVertex2f(57.8,19);
    glVertex2f(60.2,19);
    glVertex2f(63.2,19.5);
    glVertex2f(63,21);
    glEnd();

    glLineWidth(1.7);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(55,21);
    glVertex2f(54.8,19.5);

    glVertex2f(54.8,19.5);
    glVertex2f(57.8,19);

    glVertex2f(57.8,19);
    glVertex2f(60.2,19);

    glVertex2f(60.2,19);
    glVertex2f(63.2,19.5);

    glVertex2f(63.2,19.5);
    glVertex2f(63,21);

    glVertex2f(57.8,20.5);
    glVertex2f(57.6,19);

    glVertex2f(60.2,20.5);
    glVertex2f(60.4,19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(205, 133, 63); //orange part
    glVertex2f(55,21);
    glVertex2f(58,20.5);
    glVertex2f(60,20.5);
    glVertex2f(63,21);
    glVertex2f(61.5,43);
    glVertex2f(56.5,43);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(55,21);
    glVertex2f(58,20.5);

    glVertex2f(58,20.5);
    glVertex2f(60,20.5);

    glVertex2f(60,20.5);
    glVertex2f(63,21);

    glVertex2f(63,21);
    glVertex2f(61.5,43);

    glVertex2f(56.5,43);
    glVertex2f(55,21);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(165, 42, 42); //middle red part
    glVertex2f(56.5,43);
    glVertex2f(61.5,43);
    glVertex2f(61.8,45.5);
    glVertex2f(56.2,45.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(56.5,43);
    glVertex2f(61.5,43);

    glVertex2f(61.5,43);
    glVertex2f(61.8,45.5);

    glVertex2f(56.2,45.5);
    glVertex2f(56.5,43);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(165, 42, 42); //upper red part
    glVertex2f(55,45.5);
    glVertex2f(63,45.5);
    glVertex2f(59,56);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(55,45.5);
    glVertex2f(63,45.5);

    glVertex2f(63,45.5);
    glVertex2f(59,56);

    glVertex2f(59,56);
    glVertex2f(55,45.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(160, 64, 0); //door
    glVertex2f(58,21.5);
    glVertex2f(60,21.5);
    glVertex2f(60,28.5);
    glVertex2f(58,28.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(58,21.5);
    glVertex2f(60,21.5);

    glVertex2f(60,21.5);
    glVertex2f(60,28.5);

    glVertex2f(60,28.5);
    glVertex2f(58,28.5);

    glVertex2f(58,28.5);
    glVertex2f(58,21.5);
    glEnd();

//windmill window
    glBegin(GL_POLYGON);
    glColor3ub(93, 173, 216);
    glVertex2f(58.2,35.5);
    glVertex2f(59.8,35.5);
    glVertex2f(59.8,39.5);
    glVertex2f(58.2,39.5);
    glEnd();

//windmill window lines
    glLineWidth(1.7);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(58.2,35.5);
    glVertex2f(59.8,35.5);

    glVertex2f(59.8,35.5);
    glVertex2f(59.8,39.5);

    glVertex2f(59.8,39.5);
    glVertex2f(58.2,39.5);

    glVertex2f(58.2,39.5);
    glVertex2f(58.2,35.5);
    glEnd();
}

void arain() {
    glColor3f(0.2f, 0.4f, 1.0f);
    for (int i = 0; i < dropCount; ++i) {
        glBegin(GL_LINES);
        glVertex2f(dropX[i], dropY[i]);
        glVertex2f(dropX[i], dropY[i] - 0.8f);
        glEnd();
    }
}

void update3(int value) {
    elapsedMs += 16; //for smooth transition

    if (elapsedMs >= 5000 && elapsedMs <= 20000) {
        if (dropCount < MAX_DROPS) {
            dropX[dropCount] = rand() % 70;
            dropY[dropCount] = 75;
            dropSpeed[dropCount] = 1.5f + (rand() % 10) / 20.0f; //speed between 1.5 and 1.95
            dropCount++;
        }

        for (int i = 0; i < dropCount;) {
            dropY[i] -= dropSpeed[i];
            if (dropY[i] <= -2.0f) {
                dropX[i] = dropX[--dropCount];
                dropY[i] = dropY[dropCount];
                dropSpeed[i] = dropSpeed[dropCount];
            } else {
                ++i;
            }
        }
    }
    if (elapsedMs > 20000) dropCount = 0;

    glutPostRedisplay();
    glutTimerFunc(16, update3, 0);
}

bool isDay = true;

void aCommonObjects()
{
    asmalltree();
    abiggrass1();
    abiggrass2();
    ariver();
    awave();
    astick1();
    astick2();
    aboat1();
    aboat2();
    aboat3();
    aroad();
    abigtree3();
    ahouse1();
    ahouse2();
    ahaystock1();
    ahaystock2();
    abigtree1();
    abigtree2();
    acircle2();
    acloud4();
    aplane();
    acloud1();
    acloud2();
    acloud3();
    acloud5();
    acloud6();
    asmoke();
    atractor();
    awindmil();
    abladerotation();
    acircle3();
    arain();
}

void asun() {
    glPushMatrix();
    glTranslatef(0.0f, _move17, 0.0f);
    acircle1(2.0, 47.0, 68.0, 255, 209, 72);
    glPopMatrix();
}

void amoon() {
    glPushMatrix();
    glTranslatef(0.0f, _move21, 0.0f);
    acircle1(2.0, 47.0, 52.0, 254, 252, 215);
    glPopMatrix();
}

void astar()
{
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(2.0, 71.5);
    glVertex2f(2.0, 72.5);
    glVertex2f(1.7, 72);
    glVertex2f(2.3, 72);

    glVertex2f(7.0, 76.5);
    glVertex2f(7.0, 77.5);
    glVertex2f(6.7, 77);
    glVertex2f(7.3, 77);

    glVertex2f(11.0, 71.5);
    glVertex2f(11.0, 72.5);
    glVertex2f(10.7, 72);
    glVertex2f(11.3, 72);

    glVertex2f(17.0, 73.5);
    glVertex2f(17.0, 74.5);
    glVertex2f(16.7, 74);
    glVertex2f(17.3, 74);

    glVertex2f(23.0, 70.5);
    glVertex2f(23.0, 71.5);
    glVertex2f(22.7, 71);
    glVertex2f(23.3, 71);

    glVertex2f(29.0, 76.5);
    glVertex2f(29.0, 77.5);
    glVertex2f(28.7, 77);
    glVertex2f(29.3, 77);

    glVertex2f(35.0, 73.5);
    glVertex2f(35.0, 74.5);
    glVertex2f(34.7, 74);
    glVertex2f(35.3, 74);

    glVertex2f(41.0, 70.5);
    glVertex2f(41.0, 71.5);
    glVertex2f(40.7, 71);
    glVertex2f(41.3, 71);

    glVertex2f(48.0, 77.5);
    glVertex2f(48.0, 78.5);
    glVertex2f(47.7, 78);
    glVertex2f(48.3, 78);

    glVertex2f(54.0, 73.5);
    glVertex2f(54.0, 72.5);
    glVertex2f(53.7, 73);
    glVertex2f(54.3, 73);

    glVertex2f(61.0, 76.5);
    glVertex2f(61.0, 77.5);
    glVertex2f(60.7, 77);
    glVertex2f(61.3, 77);

    glVertex2f(67.0, 71.5);
    glVertex2f(67.0, 72.5);
    glVertex2f(66.7, 72);
    glVertex2f(67.3, 72);
    glEnd();
}

void aDay() {
    glClearColor(0.6f, 0.8f, 1.0f, 1.0f);  // Sky blue
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    asun();
    aCommonObjects();

//house1 window
    glBegin(GL_POLYGON);
    glColor3ub(135, 45, 0);
    glVertex2f(19.2,40);
    glVertex2f(19.2,42);
    glVertex2f(20.7,42);
    glVertex2f(20.7,40);
    glEnd();

//house2 window
    glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19);
    glVertex2f(33.2,41);
    glVertex2f(33.2,43);
    glVertex2f(34.8,43);
    glVertex2f(34.8,41);
    glEnd();
    glutSwapBuffers();
}

void aNight() {
    glClearColor(0.05f, 0.05f, 0.2f, 1.0f);  // Dark blue
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    amoon();
    astar();
    aCommonObjects();

//house1 window
    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(19.2,40);
    glVertex2f(19.2,42);
    glVertex2f(20.7,42);
    glVertex2f(20.7,40);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(128, 100, 0);
    glVertex2f(19.2,40);
    glVertex2f(19.2,42);

    glVertex2f(19.2,42);
    glVertex2f(20.7,42);

    glVertex2f(20.7,42);
    glVertex2f(20.7,40);

    glVertex2f(20.7,40);
    glVertex2f(19.2,40);
    glEnd();

//house2 window
    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(33.2,41);
    glVertex2f(33.2,43);
    glVertex2f(34.8,43);
    glVertex2f(34.8,41);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(128, 100, 0);
    glVertex2f(33.2,41);
    glVertex2f(33.2,43);

    glVertex2f(33.2,43);
    glVertex2f(34.8,43);

    glVertex2f(34.8,43);
    glVertex2f(34.8,41);

    glVertex2f(34.8,41);
    glVertex2f(33.2,41);
    glEnd();

//darkening effet
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.0f, 0.0f, 0.0f, 0.3f);  // Black with 3% opacity
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(70.0f, 0.0f);
    glVertex2f(70.0f, 80.0f);
    glVertex2f(0.0f, 80.0f);
    glEnd();
    glDisable(GL_BLEND);
    glutSwapBuffers();
}

void display() {
    if (isDay)
        aDay();
    else
        aNight();
}

void handleKey(unsigned char key, int x, int y) {
    switch (key) {
        case 'D':
        case 'd':
            isDay = true;
            _move17 = 0.0f;  // Reset sun
            glutPostRedisplay();
            break;
        case 'N':
        case 'n':
            isDay = false;
            _move21 = 0.0f;  //reset moon
            glutPostRedisplay();
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1400, 800);
    glutCreateWindow("SUMMER");
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 70.0, 0.0, 80.0);
    glMatrixMode(GL_MODELVIEW);
    srand((unsigned int)time(0));
    glutDisplayFunc(display);
    glutMouseFunc(handleMouse);
    glutKeyboardFunc(handleKey);
    glutTimerFunc(3, update1, 0);
    glutTimerFunc(40, update2, 0);
    glutTimerFunc(0, update3, 0);
    glutMainLoop();
    return 0;
}
