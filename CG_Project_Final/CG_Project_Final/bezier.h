#ifndef BEZIER_H
#define BEZIER_H

#define CTRL_COUNT 100

int ctrlPointsCount = 3;
int ctrlPointsX[CTRL_COUNT], ctrlPointsY[CTRL_COUNT];

float getNextBezierPointX(float t)
{
    float x = 0.0;

    for(int i = 0; i < ctrlPointsCount; i++)
    {
        int c;
        if(i == 0 || i == ctrlPointsCount-1)
            c = 1;
        else
        {
            c = ctrlPointsCount-1;
        }
        x +=  c * pow(t, i) * pow(1-t, ctrlPointsCount-1-i) * ctrlPointsX[i];
    }
    return x;
}

float getNextBezierPointY(float t)
{
    float y = 0.0;

    for(int i = 0; i < ctrlPointsCount; i++)
    {
        int c;
        if(i == 0 || i == ctrlPointsCount-1)
            c = 1;
        else
        {
            c = ctrlPointsCount-1;
        }
        y +=  c * pow(t, i) * pow(1-t, ctrlPointsCount-1-i) * ctrlPointsY[i];
    }
    return y;
}

void drawline(float _z, float r, float g, float b)
{	
	float oldX=ctrlPointsX[0], oldY=ctrlPointsY[0];
	
	for(double t = 0.0;t <= 1.0; t += 0.01)
    {
		float x = getNextBezierPointX(t);
		float y = getNextBezierPointY(t);
		
		glColor3f(r, g, b);
		glBegin(GL_POLYGON);
		glVertex3f(oldX, oldY, _z);
		glVertex3f(x, y, _z);
		
		oldX = x;
		oldY = y;
    }
    glEnd();
}

#endif