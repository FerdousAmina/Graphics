#include <windows.h>
#include <GL/glut.h>
#include <cstdlib>

GLfloat SkyBlue[] = {0.68f, 0.83f, 0.94f};
GLfloat Orange[] = {0.98f, 0.84f, 0.62f};

GLfloat* currentColor = SkyBlue;

void updateColor(int value) {
    if ( currentColor == Orange)
    {
        currentColor = SkyBlue;

    }
    else{
        currentColor = Orange;
    }

    glutPostRedisplay();
    glutTimerFunc(20, updateColor, 0);
}

void drawScene()
{
    glClearColor(currentColor[0], currentColor[1], currentColor[2], 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    gluOrtho2D(-4,4,-4,4);
    glutCreateWindow("Color Changing Background");
    glutDisplayFunc(drawScene);
    glutTimerFunc(20, updateColor, 0);
    glutMainLoop();
    return 0;
}
