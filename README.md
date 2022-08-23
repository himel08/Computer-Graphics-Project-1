# Computer-Graphics-Project-1
#include<cstdio>
#include <windows.h>
#include<math.h>
# define PI 3.1416
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat q=0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.01f;
int r=0;

void update(int value) {

    if(position > 1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update,0);
}

void bird()
{
  glBegin(GL_LINES);
  glColor3ub(199,191,22);
  glVertex2f(0.2f,0.8f);
  glVertex2f(0.18f,0.77f);

  glColor3ub(199,191,22);
  glVertex2f(0.18f,0.77f);
  glVertex2f(0.15f,0.79f);

  glColor3ub(97,89,78);
  glVertex2f(0.13f,0.8f);
  glVertex2f(0.11f,0.77f);


  glColor3ub(97,89,78);
  glVertex2f(0.11f,0.77f);
  glVertex2f(0.08f,0.79f);

  glEnd();

}

void sky1()
{
    // glLoadIdentity();
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void sky2()
{
    // glLoadIdentity();
    int i;

	GLfloat x=-.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void sky3()
{
    // glLoadIdentity();
    int i;

	GLfloat x=-.7f; GLfloat y=.10f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=1.45f; GLfloat d=.95f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.72f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.74f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}
void fullsky()
{
     glLoadIdentity();
    glBegin(GL_POLYGON);
	glColor3ub(38, 154, 214);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(-1.0f, -0.5f);

	glEnd();
}

void sun()
 {
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(253, 184, 19);
    GLfloat x5=.9f;
    GLfloat y5=.9f;
    GLfloat radius5 =.09f;
    GLfloat twicePi5 = 3.0f * PI;
    GLfloat triangleAmount2=100;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x5, y5); // center of circle
    for(int i = 0; i <= triangleAmount2; i++)
    {
        glVertex2f(
            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount2)),
            y5 + (radius5 * sin(i * twicePi5 / triangleAmount2))
        );
    }
    glEnd();
}







void plane(){



    glScalef(0.4,0.4,0);
    glTranslatef(0.0f,1.5f, 0.0f);


    glBegin(GL_POLYGON); // airplane outer body
    glColor3ub(177, 176, 171); //grey
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.45f, 0.4f);
    glVertex2f(0.45f, 0.5f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.35f, 0.38f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.35f, 0.23f);
    glVertex2f(-0.3f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON); // airplane front window
    glColor3ub(117, 69, 160); // purple one
    glVertex2f(-0.37f, 0.35f);
    glVertex2f(-0.32f, 0.35f);
    glVertex2f(-0.3f, 0.36f);
    glVertex2f(-0.3f, 0.38f);
    glVertex2f(-0.35f, 0.38f);
    glEnd();
    glBegin(GL_LINES); // airplane front window
    glColor3ub(255, 255, 255); // white
    glVertex2f(-0.35f, 0.35f);
    glVertex2f(-0.33f, 0.38f);
    glVertex2f(-0.33f, 0.35f);
    glVertex2f(-0.31f, 0.38f);
    glEnd();
    glBegin(GL_LINES); // airplane front door
    glColor3ub(144, 126, 181); // purple one
    glVertex2f(-0.25f, 0.26f);
    glVertex2f(-0.23f, 0.24f);
    glVertex2f(-0.23f, 0.24f);
    glVertex2f(-0.18f, 0.24f);
    glVertex2f(-0.18f, 0.24f);
    glVertex2f(-0.16f, 0.26f);
    glVertex2f(-0.16f, 0.26f);
    glVertex2f(-0.16f, 0.36f);
    glVertex2f(-0.16f, 0.36f);
    glVertex2f(-0.18f, 0.38f);
    glVertex2f(-0.18f, 0.38f);
    glVertex2f(-0.23f, 0.38f);
    glVertex2f(-0.23f, 0.38f);
    glVertex2f(-0.25f, 0.36f);
    glVertex2f(-0.25f, 0.36f);
    glVertex2f(-0.25f, 0.26f);
    glEnd();
    glBegin(GL_QUADS); // Airplane front wind
    glColor3ub(117, 69, 160); // purple one
    glVertex2f(0.02f, 0.15f);
    glVertex2f(0.05f, 0.15f);
    glVertex2f(-0.03f, 0.26f);
    glVertex2f(-0.1f, 0.26f);
    glEnd();
    glBegin(GL_QUADS); // Airplane back wind
    glColor3ub(117, 69, 160); // purple one
    glVertex2f(-0.08f, 0.4f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.07f, 0.49f);
    glVertex2f(0.04f, 0.49f);
    glEnd();
    // Airplane  window
    glColor3ub(117, 69, 160); // purple one
    GLfloat x2=-0.09f;
    GLfloat y2=0.35f;
    GLfloat  radius1 =.02f;
     int triangleAmount1 = 100;
    GLfloat twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x2, y2); // center of circle
    for(int i = 0; i <= triangleAmount1; i++)
    {
        glVertex2f(
            x2 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
            y2 + (radius1 * sin(i * twicePi1 / triangleAmount1))
        );
    }
    glEnd();
    // Airplane  window
    glColor3ub(117, 69, 160); // purple one
    GLfloat x3=-0.02f;
    GLfloat y3=0.35f;
     radius1 =.02f;
       twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x3, y3); // center of circle
    for(int i = 0; i <= triangleAmount1; i++)
    {
        glVertex2f(
            x3 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
            y3 + (radius1 * sin(i * twicePi1 / triangleAmount1))
        );
    }
    glEnd();
    // Airplane  window
    glColor3ub(117, 69, 160); // purple one
    GLfloat x4=0.06f;
    GLfloat y4=0.35f;
    radius1 =.02f;
    twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x4, y4); // center of circle
    for(int i = 0; i <= triangleAmount1; i++)
    {
        glVertex2f(
            x4 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
            y4 + (radius1 * sin(i * twicePi1 / triangleAmount1))


    );
    }
    glEnd();



}


void display()

{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    fullsky();

     plane();

    glPushMatrix();

glTranslatef(position,0.0f, 0.0f);
    sky1();
    sky2();
    sky3 ();
     bird();
     sun();

glPopMatrix();

    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(840, 640);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("parliament bhaban,");
    glutDisplayFunc(display);
 glutTimerFunc(10, update, 0);
    glutMainLoop();
    return 0;

}
