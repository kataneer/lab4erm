#include "stdafx.h"
#include "stdio.h"
#include "string.h"
#include "conio.h"
#include <stdlib.h>
#include "glut.h"
#include "glaux.h"
#include "gtest/gtest.h"
#include <iostream>

using namespace std;


void init(void)
{
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
}

void keyboard(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_F1:
	{
	}
	default:
		break;
	}
	glutPostRedisplay();
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-1.5, 1.5, -0.5*(GLfloat)h / (GLfloat)w, 0.5*(GLfloat)h / (GLfloat)w, -
		10.0, 10.0);
	else
		glOrtho(-1.5*(GLfloat)w / (GLfloat)h, 1.5*(GLfloat)w / (GLfloat)h, -1.5, 1.5, -
		10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void display(void)
{
	reshape(1536, 801);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	gluLookAt(0, 0, 0, 0.2, 0.3, 2, 0, 1, 0);
	glColor3f(0.4, 0.7, 1.0);
	glLineWidth(15.0);
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_LINES);
	//mainff->Draw();
	glEnd();
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char **argv)
{
	//::testing::InitGoogleTest(&argc, argv);
	//RUN_ALL_TESTS();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("���������� ���� �� TDD");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutSpecialFunc(keyboard);
	glutMainLoop();
	return 0;
}