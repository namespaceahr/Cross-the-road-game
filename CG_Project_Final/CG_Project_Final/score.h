#ifndef SCORE_H
#define SCORE_H

using namespace std;

int score = 0;
int level = 1;

string to_string(int num)
{
    stringstream stream;
	stream << num;
	return stream.str();
}

void drawScore()
{
    glPushMatrix();
	glScaled(0.0012, 0.0012, 0.0012);

	glColor3f(1.0, 0.0, 0.0);
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'S');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'c');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'o');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'r');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'e');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)':');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)' ');

	string str = to_string(score);
	int length = str.length();
	char* digits = new char[length];
	strcpy(digits, str.c_str());

	glColor3f(0.0, 0.0, 1.0);
	for (int i = 0; i < length; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, digits[i]);
	}
    glPopMatrix();
}

void drawLevel()
{
    glPushMatrix();
	glScaled(0.0012, 0.0012, 0.0012);

	glColor3f(1.0, 0.0, 0.0);
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'L');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'e');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'v');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'e');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)'l');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)':');
	glutStrokeCharacter(GLUT_STROKE_ROMAN, (int)' ');

	string str = to_string(level);
	int length = str.length();
	char* digits = new char[length];
	strcpy(digits, str.c_str());

	glColor3f(0.0, 0.0, 1.0);
	for (int i = 0; i < length; i++)
	{
		glutStrokeCharacter(GLUT_STROKE_ROMAN, digits[i]);
	}
    glPopMatrix();
}

#endif
