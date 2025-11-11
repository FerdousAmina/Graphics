#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.96f, 0.97f, 0.97f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(4.0);

    circle(2.354968706,0.2370049443847,8.6388570522675,23,32,42);//BLACK CIRCLE
    circle(2.186939257,0.2370049443847,8.6388570522675,247,249,249);//LIGHT GREY CIRCLE SKY
    circle(0.3674959591,-2.2874416000439,5.1268895177297,23,32,42);
    circle(0.1180524126,-2.2874416000439,5.1268895177297,247,249,249);
    circle(0.3674959591,-2.2874416000439,5.719105045956,23,32,42);
    circle(0.1180524126,-2.2874416000439,5.719105045956,247,249,249);
    circle(0.3668,-1.033,5.1418,23,32,42);
    circle(0.1158,-1.033,5.1418,247,249,249);

    glBegin(GL_POLYGON);
    glColor3ub(247.0f, 249.0f, 249.0f);
    glVertex2f(-1.9,7.39);
    glVertex2f(2.5,7.65);
    glVertex2f(2.7,6.2);
    glVertex2f(-1.8,6.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23.0f, 32.0f, 42.0f);
    glVertex2f(-2.66,5.1170698045128);
    glVertex2f(-2.66,5.6906051801566);
    glVertex2f(-2.508,5.719105045956);
    glVertex2f(-2.508,5.1268895177297);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(247.0f, 249.0f, 249.0f);
    glVertex2f(-2.408,5.719105045956);
    glVertex2f(-2.17,5.719105045956);
    glVertex2f(-2.17,5.1268895177297);
    glVertex2f(-2.408,5.1268895177297);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23.0f, 32.0f, 42.0f);
    glVertex2f(-2.07,5.719105045956);
    glVertex2f(-1.91,5.6906051801566);
    glVertex2f(-1.91,5.1170698045128);
    glVertex2f(-2.07,5.1170698045128);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23.0f, 32.0f, 42.0f);
    glVertex2f(-1.40,6.035);
    glVertex2f(-1.15,6.035);
    glVertex2f(-1.15,5.12);
    glVertex2f(-1.40,5.19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(247.0f, 249.0f, 249.0f);
    glVertex2f(-1.15,5.12);
    glVertex2f(-1.15,5.63);
    glVertex2f(-0.92,5.63);
    glVertex2f(-0.92,5.12);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23.0f, 32.0f, 42.0f);
    glVertex2f(-0.92,6.035);
    glVertex2f(-0.67,6.035);
    glVertex2f(-0.67,5.19);
    glVertex2f(-0.92,5.12);
    glEnd();


    //ALL LINES
    glBegin(GL_LINES);
    glColor3ub(23.0f, 32.0f, 42.0f);

    glVertex2f(-4.0477460037445,6.4439723754073);
    glVertex2f(4.68978534146,6.4439723754073);

    glVertex2f(-2.3674515142821,10.1826276144611);
    glVertex2f(0.1634920604707,10.1826276144611);

    glVertex2f(1.4237129275675,9.5945245431493);
    glVertex2f(3.114509257589,9.5945245431493);

    glVertex2f(-2.3779533548412,8.5023331249987);
    glVertex2f(-1.2542564150132,8.5023331249987);

    glVertex2f(1.8857939121697,8.2292852704611);
    glVertex2f(2.8204577219331,8.2292852704611);

    glVertex2f(-3.1760932373358,6.4574852593212);
    glVertex2f(-1.6132724745834,7.245688425617);

    glVertex2f(-1.6132724745834,7.245688425617);
    glVertex2f(-1.0566053169332,7.7745222253848);

    glVertex2f(-1.0566053169332,7.7745222253848);
    glVertex2f(-0.3468546909291,8.4703561724476);

    glVertex2f(-0.3468546909291,8.4703561724476);
    glVertex2f(0.1889374483093,8.4709561724476);

    glVertex2f(0.1889374483093,8.4709561724476);
    glVertex2f(0.5716461191938,8.8878565406853);

    glVertex2f(0.5716461191938,8.8878565406853);
    glVertex2f(0.7919007579041,8.4986998085579);

    glVertex2f(0.7919007579041,8.4986998085579);
    glVertex2f(0.9418496600011,8.5869050450856);

    glVertex2f(0.9418496600011,8.5869050450856);
    glVertex2f(1.7533378360558,7.6695705851978);

    glVertex2f(1.7533378360558,7.6695705851978);
    glVertex2f(3.6942587837527,6.4786940457903);

    glVertex2f(-2.235696045513,6.7145546517018);
    glVertex2f(-0.3652107196785,6.7145546517018);

    glVertex2f(-1.4808414333068,7.0975323593653);
    glVertex2f(0.1065734129504,7.0975323593653);

    glVertex2f(-1.1589181428071,7.4694092639081);
    glVertex2f(0.4062950972088,7.4694092639081);

    glVertex2f(-0.6871340101782,7.8357357668905);
    glVertex2f(0.4617991128122,7.8357357668905);

    glVertex2f(-0.276404294713,8.2409150807953);
    glVertex2f(0.2508838535193,8.2409150807953);

    glVertex2f(0.5716461191938,8.8878565406853);
    glVertex2f(0.4395975065708,8.3796751198038);

    glVertex2f(0.4395975065708,8.3796751198038);
    glVertex2f(0.6449623643034,8.2964190963987);

    glVertex2f(0.6449623643034,8.2964190963987);
    glVertex2f(0.7781720017515,8.1465582542695);

    glVertex2f(0.7781720017515,8.1465582542695);
    glVertex2f(0.6338615611827,7.941193396537);

    glVertex2f(0.6338615611827,7.941193396537);
    glVertex2f(0.639411962743,7.6747741216406);

    glVertex2f(0.639411962743,7.6747741216406);
    glVertex2f(0.5,7.5);

    glVertex2f(0.5,7.5);
    glVertex2f(0.6560631674241,7.3750524373823);

    glVertex2f(0.6560631674241,7.3750524373823);
    glVertex2f(0.4007446956484,7.1141835640463);

    glVertex2f(-0.2708538931527,6.4814377861675);
    glVertex2f(0.0843718067091,6.8366634860293);
    glEnd();

    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-3.1760932373358,8.1347687054288);
    glVertex2f(-3.1760932373358,6.4574852593212);

    glVertex2f(-3.6906834247337,7.6506803585901);
    glVertex2f(-3.1760932373358,8.1347687054288);

    glVertex2f(-3.1760932373358,8.1347687054288);
    glVertex2f(-2.6835104121745,7.6706803585901);

    glVertex2f(-3.6906834247337,7.1896030551062);
    glVertex2f(-3.1760932373358,7.6463340583926);

    glVertex2f(-3.1760932373358,7.6463340583926);
    glVertex2f(-2.6835104121745,7.1896030551062);

    glVertex2f(-3.6906834247337,6.727522070504);
    glVertex2f(-3.1760932373358,7.20410742286324);

    glVertex2f(-3.1760932373358,7.20410742286324);
    glVertex2f(-2.68351041217452,6.727522070504);

    glVertex2f(3.3770552715675,7.6506803585901);
    glVertex2f(3.8916454589654,8.1347687054288);

    glVertex2f(3.8916454589654,8.1347687054288);
    glVertex2f(4.3642282841267,7.6706803585901);

    glVertex2f(3.8916454589654,8.1347687054288);
    glVertex2f(3.8916454589654,6.4574852593212);

    glVertex2f(3.3770552715675,7.6506803585901);
    glVertex2f(3.8916454589654,8.1347687054288);

    glVertex2f(3.8916454589654,8.1347687054288);
    glVertex2f(4.3642282841267,7.6706803585901);

    glVertex2f(3.3980589526858,7.1896030551062);
    glVertex2f(3.8916454589654,7.6463340583926);

    glVertex2f(3.8916454589654,7.6463340583926);
    glVertex2f(4.385231965245,7.1896030551062);

    glVertex2f(3.3875571121267,6.727522070504);
    glVertex2f(3.8916454589654,7.2041074228632);

    glVertex2f(3.8916454589654,7.2041074228632);
    glVertex2f(4.4062356463633,6.727522070504);

    glVertex2f(-4.20,4.78);
    glVertex2f(-4.2,6.035);

    glVertex2f(-4.2,6.035);
    glVertex2f(-4.068,6.035);

    glVertex2f(-4.068,6.035);
    glVertex2f(-3.685,4.78);

    glVertex2f(-3.685,4.78);
    glVertex2f(-3.35,6.035);

    glVertex2f(-3.35,6.035);
    glVertex2f(-3.189,6.035);

    glVertex2f(-3.189,6.035);
    glVertex2f(-3.189,4.78);

    glVertex2f(-0.19,4.78);
    glVertex2f(-0.19,6.035);

    glVertex2f(-0.19,6.035);
    glVertex2f(0.64,4.78);

    glVertex2f(0.64,4.78);
    glVertex2f(0.64,6.035);

    glVertex2f(1.02,5.96);
    glVertex2f(1.88,5.96);

    glVertex2f(1.44,5.96);
    glVertex2f(1.44,4.78);

    glVertex2f(3.5,6.035);
    glVertex2f(3.5,4.78);

    glVertex2f(2.16,4.78);
    glVertex2f(2.57,6.035);

    glVertex2f(2.57,6.035);
    glVertex2f(2.95,4.78);

    glVertex2f(2.27,5.17);
    glVertex2f(2.83,5.17);

    glVertex2f(4.13,4.78);
    glVertex2f(4.13,6.035);

    glVertex2f(4.13,6.035);
    glVertex2f(4.81,4.78);

    glVertex2f(4.81,4.78);
    glVertex2f(4.81,6.035);

    glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Mountain");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	glutInitWindowSize(320, 320);
	gluOrtho2D(-6.0, 6.0, 3.0,14.0);// Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
