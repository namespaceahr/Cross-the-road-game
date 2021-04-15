#ifndef COMPONENT_H
#define COMPONENT_H

float displacement = 0.0;
bool light_on = false;

void drawTriangle(float r, float g, float b)
{
    glColor3f(r, g, b);

    glBegin(GL_TRIANGLES);

    glVertex3f(0.5, -0.5, 0.0);
    glVertex3f(0.0, 0.5, 0.0);
    glVertex3f(-0.5, -0.5, 0.0);

    glEnd();
}

void drawRectangle(float width, float height)
{
    float x = width / 2;
    float y = height / 2;

    glBegin(GL_POLYGON);

    glVertex2f(-x, y);
    glVertex2f(-x, -y);
    glVertex2f(x, -y);
    glVertex2f(x, y);

    glEnd();
}

void drawPlatform(float width, float height)
{
    glColor3f(0.63, 0.32, 0.17);
    drawRectangle(width, height);
}

void drawRoad(float width, float height)
{
    //Lanes
    for (float i = 0, translateX = -4.5; i < 7; i++, translateX += 1.5)
    {
        glPushMatrix();
        glTranslatef(translateX, 0.15, 0.0);

        glColor3f(1.0, 1.0, 0.0);

        glRotatef(90, 1.0, 0.0, 0.0);
        glScalef(1.0, 4.5, 1.0);
        drawRectangle(1.0, 0.1);
        glPopMatrix();
    }

    //Road
    glColor3f(0.0, 0.0, 0.0);
    drawRectangle(width, height);
}

#endif
