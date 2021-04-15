#ifndef HOUSE_H_INCLUDED
#define HOUSE_H_INCLUDED

void drawHouse()
{
    glRotatef(-45,0,1,0);
    glScalef(0.8,0.8,0.8);
    glPushMatrix();

    //house body front
    glColor3f(1,0.5,0.0);

    glBegin(GL_POLYGON);
    glVertex3f(0,-1,2);
    glVertex3f(2,-1,2);
    glVertex3f(2,1,2);
    glVertex3f(0,1,2);
    glEnd();

    //house door front
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.8,0.8);
    glVertex3f(0.3,-0.8,2.01);
    glVertex3f(0.8,-0.8,2.01);
    glVertex3f(0.8,0.5,2.01);
    glVertex3f(0.3,0.5,2.01);
    glEnd();

    //house window front
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex3f(1.2,-0.3,2.01);
    glVertex3f(1.8,-0.3,2.01);
    glVertex3f(1.8,0.3,2.01);
    glVertex3f(1.2,0.3,2.01);
    glEnd();

    //house body left
    glColor3f(1.0,0.6,0);
    glBegin(GL_POLYGON);
    glVertex3f(0,1,2);
    glVertex3f(0,-1,2);
    glVertex3f(0,-1,0);
    glVertex3f(0,1,0);
    glEnd();

    //house body back
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(0,-1,0);
    glVertex3f(2,-1,0);
    glVertex3f(2,1,0);
    glVertex3f(0,1,0);
    glEnd();

    //house body right
    glColor3f(1,0.6,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(2,1,2);
    glVertex3f(2,-1,2);
    glVertex3f(2,-1,0);
    glVertex3f(2,1,0);
    glEnd();

    //house body right window
    //window1
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex3f(2.01,0.3,1.8);
    glVertex3f(2.01,-0.3,1.8);
    glVertex3f(2.01,-0.3,1.2);
    glVertex3f(2.01,0.3,1.2);
    glEnd();

    //window2
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.2);
    glVertex3f(2.01,0.3,0.8);
    glVertex3f(2.01,-0.3,0.8);
    glVertex3f(2.01,-0.3,0.2);
    glVertex3f(2.01,0.3,0.2);
    glEnd();

    //house body left top
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(1,2,-0.2);
    glVertex3f(1,2,2.2);
    glVertex3f(-0.5,0.7,2.2);
    glVertex3f(-0.5,0.7,-0.2);
    glEnd();

    //house body right top
    glColor3f(0.75,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(1,2,-0.2);
    glVertex3f(1,2,2.2);
    glVertex3f(2.5,0.7,2.2);
    glVertex3f(2.5,0.7,-0.2);
    glEnd();

    //house body front triangle
    glColor3f(1,0.5,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0,1,2);
    glVertex3f(1,2,2);
    glVertex3f(2,1,2);
    glEnd();

    //house body back triangle
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(0,1,0);
    glVertex3f(1,2,0);
    glVertex3f(2,1,0);
    glEnd();

    glPopMatrix();
}


#endif // HOUSE_H_INCLUDED
