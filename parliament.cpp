#include<cstdio>
#include <windows.h>
#include<math.h>
#include <GL/gl.h>
#include <GL/glut.h>

void bird()
{
  glBegin(GL_LINES);
  glColor3ub(255,255,255);
  glVertex2f(0.2f,0.8f);
  glVertex2f(0.18f,0.77f);

  glColor3ub(255,255,255);
  glVertex2f(0.18f,0.77f);
  glVertex2f(0.15f,0.79f);

  glColor3ub(255,255,255);
  glVertex2f(0.13f,0.8f);
  glVertex2f(0.11f,0.77f);

  glColor3ub(255,255,255);
  glVertex2f(0.11f,0.77f);
  glVertex2f(0.08f,0.79f);

  glEnd();

}
void stairs()
{
    glBegin(GL_POLYGON);
	glColor3ub(150,40,27);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);
	glVertex2f(1.0f, -.5f);
	glVertex2f(-1.0f, -.5f);

	glEnd();

 glBegin(GL_LINES);
 glLineWidth(8);
	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.533f);
	glVertex2f(1.0f, -.533f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.566f);
	glVertex2f(1.0f, -.566f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(1.0f, -.6f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.633f);
	glVertex2f(1.0f, -.633f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.666f);
	glVertex2f(1.0f, -.666f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(1.0f, -.5f);

	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(-.50f, -0.5f);
	glVertex2f(-.53f, -.5f);
	glVertex2f(-.63f, -.7f);
	glVertex2f(-.60f, -.7f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(.50f, -0.5f);
	glVertex2f(.53f, -.5f);
	glVertex2f(.63f, -.7f);
	glVertex2f(.60f, -.7f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(.01f, -0.5f);
	glVertex2f(-.01f, -.5f);
	glVertex2f(-.035f, -.7f);
	glVertex2f(.035f, -.7f);

	glEnd();

}


void display()
{
    
     bird();
     sky1();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(840, 640);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Parliament House,");
    glutDisplayFunc(display);
    glutTimerFunc(10, update, 0);
    glutMainLoop();
    return 0;
}
