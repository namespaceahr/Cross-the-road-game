#ifndef SCENERY_H
#define SCENERY_H

#include "house.h"

float Tx_cloud1 = -2.1;
float Tx_cloud2 = 1.9;

void drawShape1(float r, float g, float b)
{
    glColor3f(r, g, b);
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.7, 0.4, 0.0);
    glVertex3f(1.5, 1.1, 0.0);
    glEnd();
}

void drawShape2(float r, float g, float b)
{
    glColor3f(r, g, b);

    glBegin(GL_QUADS);

    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(2.5, 0.0, 0.0);
    glVertex3f(0.5, 1.5, 0.0);
    glVertex3f(-1.0, 1.2, 0.0);

    glEnd();
}

void drawMountains()
{
    //Mountains
    glPushMatrix();
    glTranslatef(-4.35, -1.5, 0.0);

    //Shape 1
    glPushMatrix();
    glTranslatef(0.0, -0.50, 0.0);
    glScalef(1.8, 1.0, 0.0);
    drawShape1(0.4,0.3,0.8);
    glPopMatrix();

    //Lowest cliff
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glScalef(2.5, 1, 0);
    drawTriangle(0.4,0.4,0.8);
    glPopMatrix();

    //Highest cliff
    glPushMatrix();
    glTranslatef(5.2, 1.75, 0.0);
    glScalef(7.0, 4.5, 0);
    drawTriangle(0.4,0.3,0.8);
    glPopMatrix();

    //Shape 2
    glPushMatrix();
    glTranslatef(7.5, -0.5, 0.0);
    drawShape2(0.4,0.4,0.8);
    glPopMatrix();

    //Medium cliff
    glPushMatrix();
    glTranslatef(2.3, 0.5, 0.0);
    glScalef(6.0, 2.0, 0);
    drawTriangle(0.4,0.4,0.8);
    glPopMatrix();

    glPopMatrix(); //Mountains end
}

void drawTreeShape()
{
    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);

    glVertex3f(0.0, 0.2, 0.0);
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.0, 0.8, 0.0);
    glVertex3f(0.5, 0.0, 0.0);

    glEnd();
}

void drawTree()
{
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glScalef(1.0, 1.0, 0.0);
    drawTreeShape();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, -0.3, 0.0);
    glScalef(1.4, 0.8, 0.0);
    drawTreeShape();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, -0.7, 0.0);
    glScalef(1.6, 1.0, 0.0);
    drawTreeShape();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, -0.7, 0.0);
    glScalef(1.0, 0.6, 0.0);
    drawTreeShape();
    glPopMatrix();
}

void drawCloudTree()
{
    glColor3f(0.420, 0.557, 0.137);

    glPushMatrix();
    glTranslatef(0.0, 0.05, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.35, -0.45, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.35, -0.45, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.50, -0.95, 0.0);
    glutSolidSphere(0.55, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.50, -0.95, 0.0);
    glutSolidSphere(0.55, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, -0.75, 0.0);
    glutSolidSphere(0.55, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, -1.7, 0.0);
    glColor3f(0.7, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.2, 0.8);
    glVertex2f(-0.2, -0.8);
    glVertex2f(0.2, -0.8);
    glVertex2f(0.2, 0.8);
    glEnd();
    glPopMatrix();
}

void drawCloud()
{
    glColor3f(1.0, 1.0, 1.0);

    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55, 0.35, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55, -0.35, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25, 0.35, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.25, -0.35, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.75, 0.0, 0.0);
    glutSolidSphere(0.5, 20, 16);
    glPopMatrix();
}

void drawLands()
{
    glPushMatrix();
    glTranslatef(0.0, -1.01, 0.0);

    float X[5] = { -6.0, 0.0, 4.0 };
    float Y[5] = { 0.0, 1.0, 0.0 };

    for(int i=0; i<3; i++)
    {
        ctrlPointsX[i] = X[i];
        ctrlPointsY[i] = Y[i];
    }

    glPushMatrix();
    drawline(0.0, 0.0, 0.3, 0.2);
    glPopMatrix();

    /*
    float X2[5] = { 6.0, 2.0, 0.0 };
    float Y2[5] = { 0.5, 1.0, -1.5 };

    for(int i=0; i<3; i++)
    {
        ctrlPointsX[i] = X2[i];
        ctrlPointsY[i] = Y2[i];
    }

    glPushMatrix();
    drawline(0.0, 0.0, 0.4, 0.2);
    glPopMatrix();
    */

    glPopMatrix();
}

void lands()
{

    float X[5] = { -6.0, -1.0, 4.0 };
    float Y[5] = { -1.0, 1.0, -1.0 };

    for(int i=0; i<3; i++)
    {
        ctrlPointsX[i] = X[i];
        ctrlPointsY[i] = Y[i];
    }

    glPushMatrix();
    glTranslatef(-2.0, 0.205, 0.0);
    glScalef(1.5, 1.45, 0.0);
    glRotatef(-0.25, 0, 0, 1);
    drawline(0.0, 0.0, 0.3, 0.2);

    glPopMatrix();

    float X2[5] = { 6.0, 2.0, 0.0 };
    float Y2[5] = { 0.5, 1.0, -1.5 };

    for(int i=0; i<3; i++)
    {
        ctrlPointsX[i] = X2[i];
        ctrlPointsY[i] = Y2[i];
    }

    glPushMatrix();
    glTranslatef(-2.0, 0.62, 0.0);
    glScalef(2.5, 1.9, 0.0);
    glRotatef(-9.25, 0, 0, 1);
    drawline(0.0, 0.0, 0.4, 0.2);

    glPopMatrix();
}

void drawScenery(float width, float height)
{
    //Clouds
    glPushMatrix();
    glTranslatef(Tx_cloud1, 0.45, 0.1);
    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.25, 0.25, 0.25);
    drawCloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(Tx_cloud2, 0.65, 0.1);
    glRotatef(45, 1.0, 0.0, 0.0);
    glScalef(0.3, 0.3, 0.3);
    drawCloud();
    glPopMatrix();

    //Sun
    glPushMatrix();
    glTranslatef(-1.5, 0.75, 0.0);
    glColor3f(1.0, 1.0, 0.0);
    glutWireSphere(0.20, 100, 100);
    glPopMatrix();

    //Trees
    glPushMatrix();
    glTranslatef(-1.0, -0.2, 0.0);
    glScalef(0.15, 0.15, 0.0);
    drawCloudTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.3, -0.25, 0.0);
    glScalef(0.18, 0.2, 0.2);
    drawCloudTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.5, -0.2, 0.0);
    glScalef(0.20, 0.20, 0.0);
    drawTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3.5, -0.3, 0.0);
    glScalef(0.25, 0.25, 0.0);
    drawTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.0, -0.6, 0.0);
    glScalef(0.4, 0.4, 0.0);
    drawTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.5, -0.22, 0.0);
    glScalef(0.2, 0.2, 0.0);
    drawTree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5.4, -0.42, 0.0);
    glScalef(0.2, 0.2, 0.0);
    drawTree();
    glPopMatrix();

    //House left
    glPushMatrix();
    glTranslatef(-4.6, -0.5, 0.0);
    glScalef(0.45, 0.30, 0.30);
    glRotatef(35, 1, 1, 0);

    drawHouse();
    glPopMatrix();

    //House right
    glPushMatrix();
    glTranslatef(4.2, -0.3, 0.0);
    glScalef(0.20, 0.15, 0.15);
    glRotatef(15, 1, 0, 0);
    glRotatef(40, 0, 1, 0);
    glRotatef(2, 0, 0, 1);

    drawHouse();
    glPopMatrix();

    //Lands
    glPushMatrix();
    glTranslatef(0.0, -0.4, 0.0);
    glScalef(0.7, 0.5, 0.0);
    lands();
    glPopMatrix();

    //Fill
    glPushMatrix();
    glTranslatef(0.1, -0.47, 0.0);
    glScalef(1.5, 0.15, 0.0);
    glRotatef(180, 1, 0, 0);
    drawTriangle(0.0, 0.4, 0.0);
    glPopMatrix();

    // Mountains
    glPushMatrix();
    glTranslatef(2.8, 0.2, 0.0);
    glScalef(0.6, 0.3, 0);
    drawMountains();
    glPopMatrix();

    //Sky
    glColor3f(0.5, 0.9, 1.0);
    drawRectangle(width, height);
}

#endif
