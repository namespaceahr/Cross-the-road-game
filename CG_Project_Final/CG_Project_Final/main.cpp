#include <iostream>
#include <math.h>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>

#include "component.h"
#include "car.h"
#include "train.h"
#include "control.h"
#include "scenery.h"
#include "score.h"
#include "character.h"
#include "collision.h"

using namespace std;

float _cameraAngle = 0.0;

void initRendering()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(-_cameraAngle, 0.0, 1.0, 0.0);
    glTranslatef(0.0, 0.0, -7.0);

    static float width = 11.23;
    //Draw character
    glPushMatrix();
    glTranslatef(Tx_object, Ty_object, 0.2);
    glRotatef(25, 1, 0, 0);
    glRotatef(angle_object, 0, 1, 0);
    glRotatef(-70, 0, 1, 0);
    glScalef(0.3, 0.2, 0.3);
    drawCharacter();
    glPopMatrix();

    //Draw Platform 1
    glPushMatrix();
    glTranslatef(0.0, -2.75, 0.0);
    glRotatef(-85, 1.0, 0.0, 0.0);
    glScalef(1.0, 1.8, 0.0);
    drawPlatform(width, 0.4);
    glPopMatrix();

    //Draw Road
    glPushMatrix();
    glTranslatef(0.0, -1.7, 0.0);
    drawRoad(width, 1.6);
    glPopMatrix();

    //Draw Platform 2
    glPushMatrix();
    glTranslatef(0.0, -0.5, -0.1);
    glRotatef(-75, 1.0, 0.0, 0.0);
    glScalef(1.0, 1.8, 0.0);
    drawPlatform(width, 0.4);
    glPopMatrix();

    //Draw train track
    glPushMatrix();
    glTranslatef(0, 0.1, 0.0);
    glRotatef(-65, 1.0, 0.0, 0.0);
    drawTrack();
    glPopMatrix();

    //Draw train
    glPushMatrix();
    glTranslatef(-Tx_train, -0.1, 0.0);
    glRotatef(10, 1.0, 0.0, 0.0);

    //Engine
    glPushMatrix();
    glScalef(0.65, 0.65, 0.95);
    glTranslatef(-6.35, 0.60, 0.0000001);
    drawEngine(0.3,0.0,1.0);
    glPopMatrix();

    //Front bogie
    glPushMatrix();
    glTranslatef(-3.0, 0.2, 0.0);
    drawBogie();
    glPopMatrix();

    //Middle bogie
    glPushMatrix();
    glTranslatef(-0.95, 0.2, 0.0);
    drawBogie();
    glPopMatrix();

    //Rear bogie
    glPushMatrix();
    glTranslatef(1.10, 0.2, 0.0);
    drawBogie();
    glPopMatrix();

    glPopMatrix(); // Draw train end

    //Draw Platform 3
    glPushMatrix();
    glTranslatef(0.0, 0.79, -0.1);
    glRotatef(-65, 1.0, 0.0, 0.0);
    glScalef(1.0, 1.8, 0.0);
    drawPlatform(width, 0.4);
    glPopMatrix();

    //Draw Level
    glPushMatrix();
    glTranslatef(-5.5, 2.68, 0.0);
	drawLevel();
	glPopMatrix();

	//Draw Score
    glPushMatrix();
    glTranslatef(-5.5, 2.45, 0.0);
	drawScore();
	glPopMatrix();

    //Draw Sky
    glPushMatrix();
    glTranslatef(0.0, 1.9, 0.0);
    drawScenery(width, 2.0);
    glPopMatrix();

    //Draw vehicles
    glPushMatrix();
    glScalef(0.8, 0.85, 0.9);

    //Draw Mazda
    glPushMatrix();
    glTranslatef(Tx_mazda, -1.4, 0.0);
    drawMazdaCar(1, 0, 0);
    glPopMatrix();

    //Draw Ferrari
    glPushMatrix();
    glTranslatef(Tx_ferrari, -1.4, 0.0);
    drawFerrariCar(0, 1, 0);
    glPopMatrix();

    //Draw Truck
    glPushMatrix();
    glTranslatef(Tx_truck, -1.4, 0.0);
    drawTataTruck(0, 0, 1);
    glPopMatrix();

    //Draw Pajero
    glPushMatrix();
    glTranslatef(Tx_pajero, -2.60, 0.0);
    drawPajeroCar(0, 0, 1);
    glPopMatrix();

    //Draw Sedan
    glPushMatrix();
    glTranslatef(Tx_sedan, -2.60, 0.0);
    drawSedanCar(0.5, 0.3, 1.0);
    glPopMatrix();

    //Draw Volvo
    glPushMatrix();
    glTranslatef(Tx_volvo, -2.60, 0.0);
    drawVolvoBus(0.5, 0.3, 1.0);
    glPopMatrix();

    glPopMatrix(); // Draw vehicles end

    glutSwapBuffers();
}

void update(int value)
{
    checkCollision();
    /*
    _angle += 2.0f;
    if (_angle > 360)
    {
        _angle-= 360;
    }
    */

    float Tx_max = 9.0;
    float Tx_reset = 9.0;

    Tx_sedan += speed;
    if (Tx_sedan > Tx_max)
    {
        Tx_sedan = -Tx_reset;
    }

    Tx_pajero += speed;
    if (Tx_pajero > Tx_max)
    {
        Tx_pajero = -Tx_reset;
    }

    Tx_volvo += speed;
    if (Tx_volvo > Tx_max)
    {
        Tx_volvo = -Tx_reset;
    }

    Tx_mazda -= speed;
    if (Tx_mazda < -Tx_max)
    {
        Tx_mazda = Tx_reset;
    }

    Tx_ferrari -= speed;
    if (Tx_ferrari < -Tx_max)
    {
        Tx_ferrari = Tx_reset;
    }

    Tx_truck -= speed;
    if (Tx_truck < -Tx_max)
    {
        Tx_truck = Tx_reset;
    }

    Tx_train += speed;
    if (Tx_train > Tx_max)
    {
        Tx_train = -Tx_reset;
    }

    Tx_cloud1 += 0.005;
    if (Tx_cloud1 > Tx_max)
    {
        Tx_cloud1 = -Tx_reset;
    }

    Tx_cloud2 -= 0.005;
    if (Tx_cloud2 < -Tx_max)
    {
        Tx_cloud2 = Tx_reset;
    }

    // cout<<"Tx Obj "<<Tx_object<<" Ty Obj "<<Ty_object<<endl;

    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1000, 695);
    glutCreateWindow("Cross the Road");;
    initRendering();

    glutDisplayFunc(drawScene);
    glutReshapeFunc(handleResize);
    glutTimerFunc(25, update, 0);

    glutSpecialFunc(arrow_keys);

    glutMainLoop();
    return 0;
}
