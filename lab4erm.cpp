#include "stdafx.h"
#include "stdio.h"
#include "string.h"
#include "conio.h"
#include <stdlib.h>
#include "glut.h"
#include "glaux.h"
#include "gtest/gtest.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int flag = 1;
int mass[9];

class Desk {
public:
	void Draw()
	{
		glVertex3f(0, -0.6, 0);
		glVertex3f(0, 1.5, 0);
		glVertex3f(0, 1.5, 0);
		glVertex3f(2.1, 1.5, 0);
		glVertex3f(2.1, 1.5, 0);
		glVertex3f(2.1, -0.6, 0);
		glVertex3f(2.1, -0.6, 0);
		glVertex3f(0, -0.6, 0);
		glVertex3f(0, 0.1, 0);
		glVertex3f(2.1, 0.1, 0);
		glVertex3f(0, 0.8, 0);
		glVertex3f(2.1, 0.8, 0);
		glVertex3f(0.7, -0.6, 0);
		glVertex3f(0.7, 1.5, 0);
		glVertex3f(1.4, -0.6, 0);
		glVertex3f(1.4, 1.5, 0);
	}
	void DrawCross(int a)
	{
		glColor3f(0.7, 0.7, 0.7);
		if (a == 1)
		{
			glVertex3f(1.5, 0.9, 0);
			glVertex3f(2.0, 1.4, 0);
			glVertex3f(2.0, 0.9, 0);
			glVertex3f(1.5, 1.4, 0);
		}
		else if (a == 2)
		{
			glVertex3f(0.8, 0.9, 0);
			glVertex3f(1.3, 1.4, 0);
			glVertex3f(1.3, 0.9, 0);
			glVertex3f(0.8, 1.4, 0);
		}
		else if (a == 3)
		{
			glVertex3f(0.1, 0.9, 0);
			glVertex3f(0.6, 1.4, 0);
			glVertex3f(0.6, 0.9, 0);
			glVertex3f(0.1, 1.4, 0);
		}
		else if (a == 4)
		{
			glVertex3f(1.5, 0.2, 0);
			glVertex3f(2.0, 0.7, 0);
			glVertex3f(2.0, 0.2, 0);
			glVertex3f(1.5, 0.7, 0);
		}
		else if (a == 5)
		{
			glVertex3f(0.8, 0.2, 0);
			glVertex3f(1.3, 0.7, 0);
			glVertex3f(1.3, 0.2, 0);
			glVertex3f(0.8, 0.7, 0);
		}
		else if (a == 6)
		{
			glVertex3f(0.1, 0.2, 0);
			glVertex3f(0.6, 0.7, 0);
			glVertex3f(0.6, 0.2, 0);
			glVertex3f(0.1, 0.7, 0);
		}
		else if (a == 7)
		{
			glVertex3f(1.5, -0.5, 0);
			glVertex3f(2.0, 0, 0);
			glVertex3f(2.0, -0.5, 0);
			glVertex3f(1.5, 0, 0);
		}
		else if (a == 8)
		{
			glVertex3f(0.8, -0.5, 0);
			glVertex3f(1.3, 0, 0);
			glVertex3f(1.3, -0.5, 0);
			glVertex3f(0.8, 0, 0);
		}
		else if (a == 9)
		{
		  glVertex3f(0.1, -0.5, 0);
		  glVertex3f(0.6, 0, 0);
		  glVertex3f(0.6, -0.5, 0);
		  glVertex3f(0.1, 0, 0);
		}
		else throw std::invalid_argument("DrawCross() works only for 1-9");
	}
	void DrawZero(int a)
	{
		glColor3f(0.3, 0.8, 0.3);
		if (a == 1)
		{
			glVertex3f(1.5, 0.9, 0);
			glVertex3f(2.0, 0.9, 0);
			glVertex3f(2.0, 0.9, 0);
			glVertex3f(2.0, 1.4, 0);
			glVertex3f(2.0, 1.4, 0);
			glVertex3f(1.5, 1.4, 0);
			glVertex3f(1.5, 1.4, 0);
			glVertex3f(1.5, 0.9, 0);
		}
		else if (a == 2)
		{
			glVertex3f(0.8, 0.9, 0);
			glVertex3f(1.3, 0.9, 0);
			glVertex3f(1.3, 0.9, 0);
			glVertex3f(1.3, 1.4, 0);
			glVertex3f(1.3, 1.4, 0);
			glVertex3f(0.8, 1.4, 0);
			glVertex3f(0.8, 1.4, 0);
			glVertex3f(0.8, 0.9, 0);
		}
		else if (a == 3)
		{
			glVertex3f(0.1, 0.2, 0);
			glVertex3f(0.6, 0.2, 0);
			glVertex3f(0.6, 0.2, 0);
			glVertex3f(0.6, 0.7, 0);
			glVertex3f(0.6, 0.7, 0);
			glVertex3f(0.1, 0.7, 0);
			glVertex3f(0.1, 0.7, 0);
			glVertex3f(0.1, 0.2, 0);
		}
		else if (a == 4)
		{
			glVertex3f(1.5, 0.2, 0);
			glVertex3f(2.0, 0.2, 0);
			glVertex3f(2.0, 0.2, 0);
			glVertex3f(2.0, 0.7, 0);
			glVertex3f(2.0, 0.7, 0);
			glVertex3f(1.5, 0.7, 0);
			glVertex3f(1.5, 0.7, 0);
			glVertex3f(1.5, 0.2, 0);
		}
		else if (a == 5)
		{
			glVertex3f(0.8, 0.2, 0);
			glVertex3f(1.3, 0.2, 0);
			glVertex3f(1.3, 0.2, 0);
			glVertex3f(1.3, 0.7, 0);
			glVertex3f(1.3, 0.7, 0);
			glVertex3f(0.8, 0.7, 0);
			glVertex3f(0.8, 0.7, 0);
			glVertex3f(0.8, 0.2, 0);
		}
		else if (a == 6)
		{
			glVertex3f(0.1, 0.2, 0);
			glVertex3f(0.6, 0.2, 0);
			glVertex3f(0.6, 0.2, 0);
			glVertex3f(0.6, 0.7, 0);
			glVertex3f(0.6, 0.7, 0);
			glVertex3f(0.1, 0.7, 0);
			glVertex3f(0.1, 0.7, 0);
			glVertex3f(0.1, 0.2, 0);
		}
		else if (a == 7)
		{
			glVertex3f(1.5, -0.5, 0);
			glVertex3f(2.0, -0.5, 0);
			glVertex3f(2.0, -0.5, 0);
			glVertex3f(2.0, 0, 0);
			glVertex3f(2.0, 0, 0);
			glVertex3f(1.5, 0, 0);
			glVertex3f(1.5, 0, 0);
			glVertex3f(1.5, -0.5, 0);
		}
		else if (a == 8)
		{
			glVertex3f(0.8, -0.5, 0);
			glVertex3f(1.3, -0.5, 0);
			glVertex3f(1.3, -0.5, 0);
			glVertex3f(1.3, 0, 0);
			glVertex3f(1.3, 0, 0);
			glVertex3f(0.8, 0, 0);
			glVertex3f(0.8, 0, 0);
			glVertex3f(0.8, -0.5, 0);
		}
		else if (a == 9)
		{
			glVertex3f(0.1, -0.5, 0);
			glVertex3f(0.6, -0.5, 0);
			glVertex3f(0.6, -0.5, 0);
			glVertex3f(0.6, 0, 0);
			glVertex3f(0.6, 0, 0);
			glVertex3f(0.1, 0, 0);
			glVertex3f(0.1, 0, 0);
			glVertex3f(0.1, -0.5, 0);
		}
		else throw std::invalid_argument("DrawZero() works only for 5 and 8");
	}
};

Desk *mainff;

class LabTest : public ::testing::Test {
protected:
	virtual void SetUp()
	{}
	virtual void TearDown()
	{}
	Desk *mainf;
};

TEST_F(LabTest, Test1) {
	mainf = new Desk();
	EXPECT_TRUE(mainf != NULL);
}

TEST_F(LabTest, Test2) {
	mainf = new Desk();
	EXPECT_NO_FATAL_FAILURE(mainf->Draw());
}

TEST_F(LabTest, Test3) {
	mainf = new Desk();
	EXPECT_NO_THROW(mainf->DrawCross(9));
}

TEST_F(LabTest, Test4) {
	mainf = new Desk();
	EXPECT_NO_THROW(mainf->DrawZero(8));
}

TEST_F(LabTest, Test6) {
	mainf = new Desk();
	EXPECT_NO_THROW(mainf->DrawCross(3));
	EXPECT_NO_THROW(mainf->DrawCross(6));
	EXPECT_NO_THROW(mainf->DrawZero(5));
}

TEST_F(LabTest, Test7) {
	mainf = new Desk();
	EXPECT_NO_THROW(mainf->DrawCross(1));
	EXPECT_NO_THROW(mainf->DrawCross(2));
	EXPECT_NO_THROW(mainf->DrawCross(3));
	EXPECT_NO_THROW(mainf->DrawCross(4));
	EXPECT_NO_THROW(mainf->DrawCross(5));
	EXPECT_NO_THROW(mainf->DrawCross(6));
	EXPECT_NO_THROW(mainf->DrawCross(7));
	EXPECT_NO_THROW(mainf->DrawCross(8));
	EXPECT_NO_THROW(mainf->DrawCross(9));
}

TEST_F(LabTest, Test8) {
	mainf = new Desk();
	EXPECT_NO_THROW(mainf->DrawZero(1));
	EXPECT_NO_THROW(mainf->DrawZero(2));
	EXPECT_NO_THROW(mainf->DrawZero(3));
	EXPECT_NO_THROW(mainf->DrawZero(4));
	EXPECT_NO_THROW(mainf->DrawZero(5));
	EXPECT_NO_THROW(mainf->DrawZero(6));
	EXPECT_NO_THROW(mainf->DrawZero(7));
	EXPECT_NO_THROW(mainf->DrawZero(8));
	EXPECT_NO_THROW(mainf->DrawZero(9));
}


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
						printf("test - F1 %i\n", flag);
						if (flag == 1)
							mass[0] = 1;
						else mass[0] = 0;
						flag = abs(flag - 1);
						break;
	}
	case GLUT_KEY_F2:
	{
						printf("test - F2 %i\n", flag);
						if (flag == 1)
							mass[1] = 1;
						else mass[1] = 0;
						flag = abs(flag - 1);
						break;
	}
	case GLUT_KEY_F3:
	{
			printf("test - F3 %i\n", flag);
			if (flag == 1)
				mass[2] = 1;
			else mass[2] = 0;
			flag = abs(flag - 1);
			break;
	}
	case GLUT_KEY_F4:
	{
						printf("test - F4 %i\n", flag);
						if (flag == 1)
							mass[3] = 1;
						else mass[3] = 0;
						flag = abs(flag - 1);
						break;
	}
	case GLUT_KEY_F5:
	{
			printf("test - F5 %i\n", flag);
			if (flag == 0)
				mass[4] = 0;
			else mass[4] = 1;
			flag = abs(flag - 1);
			break;
	}
	case GLUT_KEY_F6:
	{
			printf("test - F6 %i\n", flag);
			if (flag == 1)
				mass[5] = 1;
			else mass[5] = 0;
			flag = abs(flag - 1);
			break;
	}
	case GLUT_KEY_F7:
	{
						printf("test - F3 %i\n", flag);
						if (flag == 1)
							mass[6] = 1;
						else mass[6] = 0;
						flag = abs(flag - 1);
						break;
	}
	case GLUT_KEY_F8:
	{
			printf("test - F8 %i\n", flag);
			if (flag == 0)
				mass[7] = 0;
			else mass[7] = 0;
			flag = abs(flag - 1);
			break;
	}
	case GLUT_KEY_F9:
	{
		    printf("test - F9 %i\n", flag);
		    if (flag == 1)
				mass[8] = 1;
			else mass[8] = 0;
			flag = abs(flag - 1);
			break;
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

TEST_F(LabTest, Test5) {
	mainf = new Desk();
	EXPECT_TRUE(keyboard != NULL);
}

void win()
{
	if (mass[2] == 1 && mass[5] == 1 && mass[8] == 1)
	{
		glVertex3f(0.35, 1.15, 0);
		glVertex3f(0.35, -0.25, 0);
		flag = -1;
	}
	//todo: реализовать метод win позднее до конца
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
	mainff->Draw();
	for (int i = 0; i < 9; i++)
	{
		if (mass[i] == 0)
			mainff->DrawZero(i + 1);
		else if (mass[i] == 1)
		{
			mainff->DrawCross(i + 1);
		}
	}
	win();
	glEnd();
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	for (int i = 0; i < 9; i++)
		mass[i] = -1;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Разработка игры по TDD");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutSpecialFunc(keyboard);
	glutMainLoop();
	return 0;
}
