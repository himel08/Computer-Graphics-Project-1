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
void display()
{
    
     bird();

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
