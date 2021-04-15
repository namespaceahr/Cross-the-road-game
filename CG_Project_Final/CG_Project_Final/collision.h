#ifndef COLLISION_H
#define COLLISION_H

//Object movement
float Tx_ferrari = -4.0;
float Tx_mazda = 0.0;
float Tx_truck = 4.0;
float Tx_sedan = -8.0;
float Tx_pajero = -4.0;
float Tx_volvo = 0.0;
float Tx_train=0.0;

//Game over screen
char quote[6][180];
int numberOfQuotes = 0;
float view = 10.0;
GLfloat upwardsScrollVelocity = -10.0;

void renderToDisplay()
{
	int i, l, lenghOfQuote;

	glTranslatef(0.0, -100, upwardsScrollVelocity);
	glRotatef(-20, 1.0, 0.0, 0.0);
	glScalef(0.1, 0.1, 0.1);

	for (l = 0; l < numberOfQuotes; l++)
	{
		lenghOfQuote = (int)strlen(quote[l]);
		glPushMatrix();
		glTranslatef(-(lenghOfQuote * 37), -(l * 200), 0.0);
		for (i = 0; i < lenghOfQuote; i++)
		{
			glColor3f((upwardsScrollVelocity / 10) + 300 + (l * 10), (upwardsScrollVelocity / 10) + 300 + (l * 10), 0.0);
			glutStrokeCharacter(GLUT_STROKE_ROMAN, quote[l][i]);
		}
		glPopMatrix();
	}
}

void myDisplayFunction(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 30.0, 100.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	renderToDisplay();
	glutSwapBuffers();
}

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, 1.0, 1.0, 3200);
	glMatrixMode(GL_MODELVIEW);
}

void timeTick(void)
{
	if (upwardsScrollVelocity < -600)
    {
        view -= 0.000011;
    }
	if (view < 0)
    {
        view = 20;
        upwardsScrollVelocity = -10.0;
    }
	//exit(0);
	upwardsScrollVelocity -= 0.1;
	glutPostRedisplay();
}

int gameOver()
{
    string message = "Your Score is: " + to_string(score);
	numberOfQuotes = 3;
	
	strcpy(quote[0], "Cross the Road");
	strcpy(quote[1], "Game Over");
	strcpy(quote[2], message.c_str());

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	//glutInitWindowSize(1360, 750);
	glutCreateWindow("Game Result");
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glLineWidth(3);

	glutDisplayFunc(myDisplayFunction);
	glutReshapeFunc(reshape);
	glutIdleFunc(timeTick);

	//glutMainLoop();
	return 0;
}

void checkCollision()
{
    //Sedan
    if (Ty_object <= -1.4 && Ty_object >= -2.2)
    {
        if(Tx_object >= (Tx_sedan+0.2) && (Tx_sedan+2.6) >= Tx_object)
        {
            Tx_object = 0;
            Ty_object = -2.4;
            gameOver();
        }
    }
    
    //Pajero
    if (Ty_object <= -1.4 && Ty_object >= -2.2)
    {
        if(Tx_object >= (Tx_pajero+0.5) && (Tx_pajero+2.5) >= Tx_object)
        {
            Tx_object = 0;
            Ty_object = -2.4;
            gameOver();
        }
    }

    //Volvo
    if (Ty_object <= -1.4 && Ty_object >= -2.2)
    {
        if(Tx_object >= (Tx_volvo+0.2) && (Tx_volvo+2.8) >= Tx_object)
        {
            Tx_object = 0;
            Ty_object = -2.4;
            gameOver();
        }
    }
    
    //Ferrari
    if (Ty_object <= -0.4 && Ty_object >= -1.2)
    {
        if(Tx_object >= (Tx_ferrari+0.2) && (Tx_ferrari+2.6) >= Tx_object)
        {
            Tx_object = 0;
            Ty_object = -2.4;
            gameOver();
        }
    }
    
    //Mazda
    if (Ty_object <= -0.4 && Ty_object >= -1.2)
    {
        if(Tx_object >= (Tx_mazda+0.2) && (Tx_mazda+2.0) >= Tx_object)
        {
            Tx_object = 0;
            Ty_object = -2.4;
            gameOver();
        }
    }

    //Truck
    if (Ty_object <= -0.4 && Ty_object >= -1.2)
    {
        if(Tx_object >= (Tx_truck-0.2) && (Tx_truck+2.4) >= Tx_object)
        {
            Tx_object = 0;
            Ty_object = -2.4;
            gameOver();
        }
    }

    //Train
    if (Ty_object <= 0.4 && Ty_object >= 0.2)
    {
        if(Tx_object >= (-Tx_train-4.4) && (-Tx_train+3.6) >= Tx_object)
        {
            Tx_object = 0;
            Ty_object = -2.4;
            gameOver();
        }
    }
}

#endif
