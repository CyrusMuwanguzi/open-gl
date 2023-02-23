#include <GL/glut.h>
#include <cmath>

GLfloat R,px,py;

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_TRIANGLES);
        glColor3f(0,0,1);
        glVertex2f(-0.2,-0.2);
        glColor3f(1,0,0);
        glVertex2f(0.0, 0.2);
        glColor3f(0,1,0);
        glVertex2f(0.2,-0.2);

    glEnd();

    glLoadIdentity();
//Translation
    //glTranslatef(0.5,0.5,0);
//Rotation
    glRotatef(90,0,0,1);
//Scaling
    //glScalef(1.2f, 1.2f, 1.2f);

//Rotation and Scaling
      //glTranslatef(0.2,0.2,0);
      //glRotatef(90,0,0,1);
      //glScalef(1.2f, 1.2f, 1.2f);
      //glTranslatef(-0.2,-0.2,0);

//Scaling and Rotaion
      glTranslatef(0.2,0.2,0);
      glScalef(1.2f, 1.2f, 1.2f);
      glRotatef(90,0,0,1);
      glTranslatef(-0.2,-0.2,0);

    glBegin(GL_TRIANGLES);
        glColor3f(0,0,1);
        glVertex2f(-0.2,-0.2);
        glColor3f(1,0,0);
        glVertex2f(0.0, 0.2);
        glColor3f(0,1,0);
        glVertex2f(0.2,-0.2);

    glEnd();
    glFlush();
}

int main (int argC, char *argV[])
{


    glutInit(&argC, argV);
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(800,800);
    glutCreateWindow("Triangle Rotation");
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
