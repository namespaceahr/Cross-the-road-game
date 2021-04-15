#ifndef CHARACTER_H
#define CHARACTER_H

void drawBlock()
{
    //Left
    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(0.0, 1.5, 0.9);
    glVertex3f(0.0, 0.0, 0.9);
    glVertex3f(1.0, 0.0, 0.9);
    glVertex3f(1.0, 1.5, 0.9);
    glEnd();

    //Right
    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(0.0, 1.5, 0.1);
    glVertex3f(0.0, 0.0, 0.1);
    glVertex3f(1.0, 0.0, 0.1);
    glVertex3f(1.0, 1.5, 0.1);
    glEnd();

    //Front
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.0, 1.5, 0.9);
    glVertex3f(0.0, 0.0, 0.9);
    glVertex3f(0.0, 0.0, 0.1);
    glVertex3f(0.0, 1.5, 0.1);
    glEnd();

    //Back
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.5, 0.9);
    glVertex3f(1.0, 0.0, 0.9);
    glVertex3f(1.0, 0.0, 0.1);
    glVertex3f(1.0, 1.5, 0.1);
    glEnd();

    //Top
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.5, 0.9);
    glVertex3f(0.0, 1.5, 0.9);
    glVertex3f(0.0, 1.5, 0.1);
    glVertex3f(1.0, 1.5, 0.1);
    glEnd();

    //Bottom
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 0.0, 0.9);
    glVertex3f(0.0, 0.0, 0.9);
    glVertex3f(0.0, 0.0, 0.1);
    glVertex3f(1.0, 0.0, 0.1);
    glEnd();
}

void drawBlock(float r, float g, float b)
{
    glColor3f(r, g, b);
    
    //Left
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 1.5, 0.9);
    glVertex3f(0.0, 0.0, 0.9);
    glVertex3f(1.0, 0.0, 0.9);
    glVertex3f(1.0, 1.5, 0.9);
    glEnd();

    //Right
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 1.5, 0.1);
    glVertex3f(0.0, 0.0, 0.1);
    glVertex3f(1.0, 0.0, 0.1);
    glVertex3f(1.0, 1.5, 0.1);
    glEnd();

    //Front
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 1.5, 0.9);
    glVertex3f(0.0, 0.0, 0.9);
    glVertex3f(0.0, 0.0, 0.1);
    glVertex3f(0.0, 1.5, 0.1);
    glEnd();

    //Back
    glBegin(GL_POLYGON);
    glColor3f(r, g, b);
    glVertex3f(1.0, 1.5, 0.9);
    glVertex3f(1.0, 0.0, 0.9);
    glVertex3f(1.0, 0.0, 0.1);
    glVertex3f(1.0, 1.5, 0.1);
    glEnd();

    //Top
    glBegin(GL_POLYGON);
    glVertex3f(1.0, 1.5, 0.9);
    glVertex3f(0.0, 1.5, 0.9);
    glVertex3f(0.0, 1.5, 0.1);
    glVertex3f(1.0, 1.5, 0.1);
    glEnd();

    //Bottom
    glBegin(GL_POLYGON);
    glVertex3f(1.0, 0.0, 0.9);
    glVertex3f(0.0, 0.0, 0.9);
    glVertex3f(0.0, 0.0, 0.1);
    glVertex3f(1.0, 0.0, 0.1);
    glEnd();
}

void drawLegs(float r, float g, float b)
{
    //Left leg
    glPushMatrix();
    glTranslatef(0.55, -0.35, 0.7);
    glScalef(0.15, 0.25, 0.15);
    drawBlock(r, g, b);
    glPopMatrix();

    //Left foot
    glPushMatrix();
    glTranslatef(0.425, -0.35, 0.6);
    glScalef(0.40, 0.10, 0.40);
    drawBlock(r, g, b);
    glPopMatrix();

    //Fingers
    glPushMatrix();
    glTranslatef(0.25, -0.35, 0.625);
    glScalef(0.25, 0.10, 0.15);
    drawBlock(r, g, b);
    glPopMatrix();

    //Fingers
    glPushMatrix();
    glTranslatef(0.25, -0.35, 0.825);
    glScalef(0.25, 0.10, 0.15);
    drawBlock(r, g, b);
    glPopMatrix();
}

void drawCharacter()
{
    //Body
    drawBlock();

    //Left eye
    glPushMatrix();
    glTranslatef(0.2, 1.0, 0.91);

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3f(0.0, 0.15, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.15, 0.0, 0.0);
    glVertex3f(0.15, 0.15, 0.0);
    glEnd();

    glPopMatrix();

    //Right eye
    glPushMatrix();
    glTranslatef(0.2, 1.0, 0.095);

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3f(0.0, 0.15, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.15, 0.0, 0.0);
    glVertex3f(0.15, 0.15, 0.0);
    glEnd();

    glPopMatrix();

    //Back
    glPushMatrix();
    glTranslatef(1.0, 0.0, 0.0);
    glScalef(0.3, 0.4, 1.0);
    drawBlock();
    glPopMatrix();

    //Tail
    glPushMatrix();
    glTranslatef(1.3, 0.0, 0.2);
    glScalef(0.1, 0.4, 0.6);
    drawBlock();
    glPopMatrix();

    //Left wing
    glPushMatrix();
    glTranslatef(0.2, 0.2, 0.8);
    glScalef(0.9, 0.2, 0.3);
    drawBlock();
    glPopMatrix();

    //Right wing
    glPushMatrix();
    glTranslatef(0.2, 0.2, -0.1);
    glScalef(0.9, 0.2, 0.3);
    drawBlock();
    glPopMatrix();

    //Tuti
    glPushMatrix();
    glTranslatef(0.15, 1.5, 0.35);
    glScalef(0.6, 0.15, 0.3);
    drawBlock(1.000, 0.412, 0.706);
    glPopMatrix();

    //Mouth
    glPushMatrix();
    glTranslatef(-0.35, 0.8, 0.35);
    glScalef(0.35, 0.15, 0.3);
    drawBlock(1.000, 0.388, 0.278);
    glPopMatrix();

    //Chin
    glPushMatrix();
    glTranslatef(-0.25, 0.6, 0.35);
    glScalef(0.25, 0.15, 0.3);
    drawBlock(1.000, 0.412, 0.706);
    glPopMatrix();

    //Left leg
    drawLegs(1.000, 0.388, 0.278);

    //Right leg
    glPushMatrix();
    glTranslatef(0.0, 0.0, -0.5);
    drawLegs(1.000, 0.388, 0.278);
    glPopMatrix();
}

#endif
