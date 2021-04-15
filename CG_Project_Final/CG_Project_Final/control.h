#ifndef CONTROL_H
#define CONTROL_H

#include "score.h"

float Tx_object = 0.0;
float Ty_object = -2.6;

float border_left = -5.0;
float border_right = 5.0;
float border_top = 0.8;
float border_bottom = -2.6;

float step = 0.2;
float speed = 0.08;
float angle_object = 0;
int back_step = 0;

void arrow_keys(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_LEFT :
        if (Tx_object > border_left)
        {
            Tx_object -= step;
        }
        break;
    case GLUT_KEY_RIGHT:
        if (Tx_object < border_right)
        {
            Tx_object += step;
        }
        break;
    case GLUT_KEY_UP:
        if (Ty_object < border_top)
        {
            if (back_step > 0)
                back_step--;
            else
                score += level;
            
            Ty_object += step;
        }
        else
        {
            level++;
            speed += 0.04;
            Tx_object = 0.0;
            Ty_object = -2.6;
        }
        break;
    case GLUT_KEY_DOWN:
        if (Ty_object > border_bottom)
        {
            back_step++;
            Ty_object -= step;
        }
        break;
    case GLUT_KEY_HOME:
        angle_object += 3.0f;
        break;
    default:
        break;
    }

    glutPostRedisplay();
}

#endif
