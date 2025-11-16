#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#define MAX_DROPS 1000

float dropX[MAX_DROPS];
float dropY[MAX_DROPS];
int totalDrops = 0;

float waterLevel = -24.0f;

void addDrop() {
    if (totalDrops < MAX_DROPS) {
        dropX[totalDrops] = -30.0f + static_cast<float>(rand()) / (RAND_MAX / 60.0f);
        dropY[totalDrops] = 70.0f;
        totalDrops++;
    }
}

void update(int value) {
    for (int i = 0; i < totalDrops; i++) {
        dropY[i] -= 1.0f;

        if (dropY[i] <= waterLevel + 1.5f) {
            if (waterLevel < -10.0f) {
                waterLevel += 0.02f;
            }

            for (int j = i; j < totalDrops - 1; j++) {
                dropX[j] = dropX[j + 1];
                dropY[j] = dropY[j + 1];
            }
            totalDrops--;
            i--;
        }
    }

    for (int i = 0; i < 5; i++) {
        addDrop();
    }

    glutPostRedisplay();
    glutTimerFunc(10, update, 0);
}

void drawRaindrops() {
    glColor3f(0.2f, 0.4f, 1.0f);
    glBegin(GL_LINES);
    for (int i = 0; i < totalDrops; i++) {
        glVertex2f(dropX[i], dropY[i]);
        glVertex2f(dropX[i], dropY[i] - 2.0f);
    }
    glEnd();
}

void drawWater()
{
    glColor3f(0.2f, 0.4f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-30.0f, waterLevel);
        glVertex2f(30.0f, waterLevel);
        glVertex2f(30.0f, -24.0f);
        glVertex2f(-30.0f, -24.0f);
    glEnd();
}

void drawTree() {
    // Wood
    glColor3ub(93.0f, 64.0f,55.0f);
    glBegin(GL_QUADS);
        glVertex2f(-5.0f, -24.0f);
        glVertex2f(-10.0f, -24.0f);
        glVertex2f(-10.0f, 5.0f);
        glVertex2f(-5.0f, 5.0f);
    glEnd();

    //leaves
    glColor3ub(20.0f, 90.0f,50.0f);
    glBegin(GL_QUADS);
        glVertex2f(-16.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(-2.0f, 10.0f);
        glVertex2f(-13.0f, 10.0f);
    glEnd();

    glColor3ub(25.0f, 111.0f,61.0f);
    glBegin(GL_QUADS);
        glVertex2f(-15.0f, 10.0f);
        glVertex2f(0.0f, 10.0f);
        glVertex2f(-3.5f, 20.0f);
        glVertex2f(-12.0f, 20.0f);
    glEnd();

    glColor3ub(30.0f, 132.0f,73.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-8.0f, 33.0f);
        glVertex2f(-1.5f, 20.0f);
        glVertex2f(-14.0f, 20.0f);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawWater();
    drawRaindrops();
    drawTree();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Rain and Flood");
    glClearColor(0.85f, 0.95f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-30, 30, -24, 70);
    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);
    glutMainLoop();
    return 0;
}
