# Computer-Graphics-Project-1
//The grass part of the scenerio 
void grass()
{
    glBegin(GL_POLYGON);
	glColor3ub(12,252,0);
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(1.0f, -.7f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);

	glEnd();
}
//The sky part 


void fullsky()
{
     glLoadIdentity();
    glBegin(GL_POLYGON);

    glColor3ub(30,144,255);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);
    glColor3ub(0,0,0);
        glVertex2f(1.0f, -0.5f);
	glColor3ub(0,0,0);
        glVertex2f(-1.0f, -0.5f);

	glEnd();
}
//on to the display 
void display()
{

    fullsky();
    grass();
   
}

