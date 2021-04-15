#ifndef TRAIN_H
#define TRAIN_H

#include "bezier.h"

void drawCompartmentWheel(float Tx, float Ty, float Tz)
{
    glPushMatrix();
    glColor3f(0.0, 1.0, 1.0);
    glTranslatef(Tx, Ty, Tz);
    glutSolidTorus(0.05, 0.08, 15, 20);
    glPopMatrix();
}

void drawCompartmentWindow()
{
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(1.15, 0.6,0.95);
    glVertex3f(1.15, 0.4,0.95);
    glVertex3f(1.45, 0.4,0.95);
    glVertex3f(1.45,0.6,0.95);
    glEnd();
}

void drawCompartmentDoor()
{
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(1.75, 0.75,0.95);
    glVertex3f(1.75, 0.25,0.95);
    glVertex3f(2.05, 0.25,0.95);
    glVertex3f(2.05,0.75,0.95);
    glEnd();
}

void drawCompartment()
{
    glBegin(GL_QUADS);

    //Front
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.2, 0.8,0.3);
    glVertex3f(0.2, 0.2,0.3);
    glVertex3f(0.2, 0.2,0.9);
    glVertex3f(0.2,0.8,0.9);

    //Top
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.2, 0.8,0.3);
    glVertex3f(2.2, 0.8,0.3);
    glVertex3f(2.2,0.8,0.9);
    glVertex3f(0.2,0.8,0.9);

    //Rear
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(2.2, 0.8,0.3);
    glVertex3f(2.2, 0.2,0.3);
    glVertex3f(2.2, 0.2,0.9);
    glVertex3f(2.2,0.8,0.9);

    //Bottom
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.2, 0.2,0.3);
    glVertex3f(2.2, 0.2,0.3);
    glVertex3f(2.2,0.2,0.9);
    glVertex3f(0.2,0.2,0.9);

    //Right
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.2, 0.8,0.3);
    glVertex3f(0.2, 0.2,0.3);
    glVertex3f(2.2, 0.2,0.3);
    glVertex3f(2.2,0.8,0.3);

    //Left
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.2, 0.8,0.9);
    glVertex3f(0.2, 0.2,0.9);
    glVertex3f(2.2, 0.2,0.9);
    glVertex3f(2.2,0.8,0.9);

    glEnd();
}

void drawEngineCurve(float z, float r, float g, float b)
{    
    ctrlPointsCount=3;
    
    float X[3] = {0.0, -0.4, 2.0};
    float Y[3] = {0.0, 1.0, 1.4};
    
    for(int i=0; i<3; i++)
    {
        ctrlPointsX[i] = X[i];
        ctrlPointsY[i] = Y[i];
    }
    
    drawline(z, r, g, b);
    
    glBegin(GL_POLYGON);
    glVertex3f(X[0], Y[0], z);
    glVertex3f(X[2], 0.0, z);
    glVertex3f(X[2], Y[2] - 0.38000001, z);
    glEnd();
}

void drawEngine(float r, float g, float b)
{
    float z=0.9;

    while(true)
    {
        drawEngineCurve(z, r, g, b);
        z -= 0.005;
        drawEngineCurve(z, r, g, b);

        if(z <= 0.3)
            break;
    }
    
    glPushMatrix();
    glScalef(1.5, 1.5, 1.0);
    
    drawCompartmentWheel(0.45, 0.0, 0.82);
    drawCompartmentWheel(0.85, 0.0, 0.82);
    drawCompartmentWheel(0.45, 0.0, 0.42);
    drawCompartmentWheel(0.85, 0.0, 0.42);
    
    glTranslatef(-0.85, -0.2, 0.0);
    drawCompartmentDoor();
    glTranslatef(0.1, 0.0, 0.0);
    drawCompartmentWindow();
    
    glPopMatrix();
}

void drawBogie()
{
    //Compartment
    drawCompartment();

    //Left side front wheels
    drawCompartmentWheel(0.75,0.20,0.8);
    drawCompartmentWheel(0.45,0.20,0.8);
    //Left side rear wheels
    drawCompartmentWheel(2.00,0.20,0.8);
    drawCompartmentWheel(1.70,0.20,0.8);

    //Right side front wheels
    drawCompartmentWheel(0.75,0.20,0.4);
    drawCompartmentWheel(0.45,0.20,0.4);
    //Right side rear wheels
    drawCompartmentWheel(2.00,0.20,0.4);
    drawCompartmentWheel(1.70,0.20,0.4);

    //Door
    drawCompartmentDoor();
    //Rear window
    drawCompartmentWindow();
    //Front window
    glTranslatef(-0.6,0,0);
    drawCompartmentWindow();
}

void drawTrack()
{
    glColor3f(1.0, 1.0, 1.0);

    glPushMatrix();
    glTranslatef(0, 0.25, 0);
    drawRectangle(11.60, 0.08);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -0.25, 0);
    drawRectangle(11.23, 0.08);
    glPopMatrix();

    for (float i = 0, translateX = -5.2; i < 14; i++, translateX += 0.8)
    {
        glPushMatrix();
        glTranslatef(translateX, 0.0, 0.0);

        glColor3f(1.0, 1.0, 0.0);
        drawRectangle(0.10, 0.45);
        glPopMatrix();
    }
}

#endif