#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
    gluOrtho2D(-135.0, 135.0, -80.0, 95.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(0.2);

    //NETHERLANDS
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-86.3135768677607, 21.3087412174352);
    glVertex2f(-18.940260062564, 21.3087412174352);
    glVertex2f(-18.940260062564, 69.4050548998474);
    glVertex2f(-86.3135768677607, 69.4050548998474);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(33, 70, 139);
    glVertex2f(-86.3135768677607, 21.3087412174352);
    glVertex2f(-18.940260062564, 21.3087412174352);
    glVertex2f(-18.940260062564, 37.2336507870823);
    glVertex2f(-86.3135768677607, 37.2336507870823);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(173, 29, 37);
    glVertex2f(-18.940260062564, 69.4050548998474);
    glVertex2f(-86.3135768677607, 69.4050548998474);
    glVertex2f(-86.3135768677607, 53.7878684373401);
    glVertex2f(-18.940260062564, 53.7878684373401);
    glEnd();

    //FRANCE
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(17.1986838176182, 21.5668765308651);
    glVertex2f(88.1858950108332, 21.5668765308651);
    glVertex2f(87.939556481227, 68.7803674413471);
    glVertex2f(17.3498736706941, 69.4050548998474);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 38, 84);
    glVertex2f(17.1986838176182, 21.5668765308651);
    glVertex2f(17.1986838176182, 69.4050548998474);
    glVertex2f(40.775653364455, 69.4050548998474);
    glVertex2f(40.775653364455, 21.616464324575);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 41, 57);
    glVertex2f(64.8261205167162, 69.4050548998474);
    glVertex2f(88.1858950108332, 69.4050548998474);
    glVertex2f(88.1858950108332, 21.5668765308651);
    glVertex2f(64.8261205167162, 21.616464324575);
    glEnd();

    //NORWAY
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-120.0813671993701,-20);
    glVertex2f(-54.2398091398389,-20);
    glVertex2f(-54.2398091398389,-63.9657174899652);
    glVertex2f(-120.0813671993701,-63.9657174899652);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(252, 36, 22);
    glVertex2f(-120.0813671993701,-20);
    glVertex2f(-103.7417538619592,-20);
    glVertex2f(-103.7417538619592,-35.9978899510982);
    glVertex2f(-120.0813671993701,-35.9978899510982);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(252, 36, 22);
    glVertex2f(-91.5623334337545,-20);
    glVertex2f(-54.2398091398389,-20);
    glVertex2f(-54.2398091398389,-35.9978899510982);
    glVertex2f(-91.5623334337545,-35.9978899510982);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(252, 36, 22);
    glVertex2f(-91.5623334337545,-48.7410140381046);
    glVertex2f(-54.2398091398389,-48.7410140381046);
    glVertex2f(-54.2398091398389,-63.9657174899652);
    glVertex2f(-91.5623334337545,-63.9657174899652);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(252, 36, 22);
    glVertex2f(-120.0813671993701,-48.7410140381046);
    glVertex2f(-103.7417538619592,-48.7410140381046);
    glVertex2f(-103.7417538619592,-63.9657174899652);
    glVertex2f(-120.0813671993701,-63.9657174899652);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50.0f, 61.0f, 122.0f);
    glVertex2f(-120.0813671993701,-44.6805455578527);
    glVertex2f(-120.0813671993701,-40);
    glVertex2f(-54.2398091398389,-40);
    glVertex2f(-54.2398091398389,-44.6805455578527);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(50.0f, 61.0f, 122.0f);
    glVertex2f(-100.3059728402076,-20);
    glVertex2f(-94.5712652449555,-20);
    glVertex2f(-94.5712652449555,-63.9657174899652);
    glVertex2f(-100.3059728402076,-63.9657174899652);
    glEnd();

    //SEYCHELLES
    glBegin(GL_QUADS);
    glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(-39.7545992582337,-24.776704845552);
    glVertex2f(29.9546699394955,-24.776704845552);
    glVertex2f(29.9546699394955,-60);
    glVertex2f(-40,-60);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 63.0f, 135.0f);
    glVertex2f(-40,-60);
    glVertex2f(-39.7545992582337,-24.776704845552);
    glVertex2f(-16.9345258713972,-24.776704845552);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(252.0f, 216.0f, 86.0f);
    glVertex2f(-40,-60);
    glVertex2f(-16.9345258713972,-24.776704845552);
    glVertex2f(6.502306255624,-24.776704845552);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(214.0f, 40.0f, 40.0f);
    glVertex2f(-40,-60);
    glVertex2f(6.502306255624,-24.776704845552);
    glVertex2f(29.9546699394955,-24.776704845552);
    glVertex2f(29.9546699394955,-36.4951209090627);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0.0f, 122.0f, 61.0f);
    glVertex2f(-40,-60);
    glVertex2f(29.9546699394955,-36.4951209090627);
    glVertex2f(29.9546699394955,-60);
    glEnd();

    //ROMANIA
    glBegin(GL_QUADS);
    glColor3ub(0.0f, 43.0f, 127.0f);
    glVertex2f(45.5935682949042,-16.75884122315);
    glVertex2f(68.7949390142858,-16.75884122315);
    glVertex2f(68.7949390142858,-61.810829706984);
    glVertex2f(45.5935682949042,-61.810829706984);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(252.0f, 209.0f, 22.0f);
    glVertex2f(68.7949390142858,-16.75884122315);
    glVertex2f(68.7949390142858,-61.810829706984);
    glVertex2f(91.30663303103,-61.810829706984);
    glVertex2f(91.30663303103,-16.75884122315);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(206.0f, 17.0f, 38.0f);
    glVertex2f(91.30663303103,-61.810829706984);
    glVertex2f(91.30663303103,-16.75884122315);
    glVertex2f(113.4831557269608,-16.75884122315);
    glVertex2f(113.4831557269608,-61.810829706984);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Rainbow Flag");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
