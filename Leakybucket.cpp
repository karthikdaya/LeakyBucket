
#include<stdio.h>
#include<windows.h>
//#include<cstring>
#include<stdlib.h>
#include<string>
#include<time.h>

#include<GL/glut.h>
#include<sstream>
#define dx 15
#define dy 25
template<class T>
std::string toString(const T &value) {
	std::ostringstream os;
	os << value;
	return os.str();
}
void *currentfont;
int window;
float blue[] = { 0.0,0.0,1.0 };
float red[] = { 1.0,0.0,0.0 };
int w, h;
using namespace std;
void setFont(void *font)
{
	currentfont = font;
}
void drawstring(float x, float y, float z, const char * string)
{
	const char *c;
	glRasterPos3f(x, y, z);
	for (c = string; *c != '\0'; c++)
	{
		glColor3f(0.0, 0.0, 0.0);
		glutBitmapCharacter(currentfont, *c);
	}
}
void computer()									// to draw the sender and receiver computers
{
	glColor3f(1.0f, 1.0f, 1.0f);
	setFont(GLUT_BITMAP_HELVETICA_12);
	drawstring(95.0, 420.0, 1.0, "SENDER 1");
	glColor3f(1.0f, 1.0f, 1.0f);
	drawstring(95.0, 120.0, 1.0, "SENDER 2");
	glColor3f(1.0f, 1.0f, 1.0f);
	drawstring(345.0, 420.0, 1.0, "RECEIVER");
	glColor3f(0.7, 0.2, 0.0);//monitor
	glBegin(GL_LINE_LOOP);
	glVertex2f(85, 380);
	glVertex2f(85, 440);
	glVertex2f(150, 440);
	glVertex2f(150, 380);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.0);//monitor
	glBegin(GL_LINE_LOOP);
	glVertex2f(87, 382);
	glVertex2f(87, 438);
	glVertex2f(148, 438);
	glVertex2f(148, 382);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2);//vertical stand
	glBegin(GL_LINES);
	glVertex2f(105, 380);
	glVertex2f(105, 375);
	glVertex2f(129, 380);
	glVertex2f(129, 375);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.3, 0.2); //horizontal stand
	glBegin(GL_QUADS);
	glVertex2f(98, 370);
	glVertex2f(98, 375);
	glVertex2f(138, 375);
	glVertex2f(138, 370);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);  //CPU
	glBegin(GL_LINE_LOOP);
	glVertex2f(80, 350);
	glVertex2f(80, 370);
	glVertex2f(155, 370);
	glVertex2f(155, 350);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.8, 0.2);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(95, 360);
	glVertex2f(95, 365);
	glVertex2f(115, 365);
	glVertex2f(115, 360);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.8);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(132, 358);
	glVertex2f(132, 361);
	glVertex2f(140, 361);
	glVertex2f(140, 358);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);//keyboard outline
	glBegin(GL_LINE_LOOP);
	glVertex2f(77, 325);
	glVertex2f(87, 350);
	glVertex2f(148, 350);
	glVertex2f(158, 325);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);//keyboard outline
	glBegin(GL_POLYGON);
	glVertex2f(77, 325);
	glVertex2f(158, 325);
	glVertex2f(158, 322);
	glVertex2f(77, 322);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2); //horizontal lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(85, 345);
	glVertex2f(150, 345);
	glVertex2f(83, 340);
	glVertex2f(152, 340);
	glVertex2f(81, 335);
	glVertex2f(154, 335);
	glVertex2f(79, 330);
	glVertex2f(156, 330);
	glVertex2f(77, 325);
	glVertex2f(158, 325);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2); //vertical lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(89, 322);
	glVertex2f(97, 350);
	glVertex2f(103, 322);
	glVertex2f(107, 350);
	glVertex2f(117, 322);
	glVertex2f(117, 350);
	glVertex2f(131, 322);
	glVertex2f(127, 350);
	glVertex2f(145, 322);
	glVertex2f(137, 350);
	glEnd();
	glFlush();

	//second sender
	glColor3f(0.7, 0.2, 0.0);//monitor
	glBegin(GL_LINE_LOOP);
	glVertex2f(85, 80);
	glVertex2f(85, 140);
	glVertex2f(150, 140);
	glVertex2f(150, 80);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.0);//monitor
	glBegin(GL_LINE_LOOP);
	glVertex2f(87, 82);
	glVertex2f(87, 138);
	glVertex2f(148, 138);
	glVertex2f(148, 82);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2);//vertical stand
	glBegin(GL_LINES);
	glVertex2f(105, 80);
	glVertex2f(105, 75);
	glVertex2f(129, 80);
	glVertex2f(129, 75);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.3, 0.2); //horizontal stand
	glBegin(GL_QUADS);
	glVertex2f(98, 70);
	glVertex2f(98, 75);
	glVertex2f(138, 75);
	glVertex2f(138, 70);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);  //CPU
	glBegin(GL_LINE_LOOP);
	glVertex2f(80, 50);
	glVertex2f(80, 70);
	glVertex2f(155, 70);
	glVertex2f(155, 50);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.8, 0.2);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(95, 60);
	glVertex2f(95, 65);
	glVertex2f(115, 65);
	glVertex2f(115, 60);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.8);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(132, 58);
	glVertex2f(132, 61);
	glVertex2f(140, 61);
	glVertex2f(140, 58);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);//keyboard outline
	glBegin(GL_LINE_LOOP);
	glVertex2f(77, 25);
	glVertex2f(87, 50);
	glVertex2f(148, 50);
	glVertex2f(158, 25);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);//keyboard outline
	glBegin(GL_POLYGON);
	glVertex2f(77, 25);
	glVertex2f(158, 25);
	glVertex2f(158, 22);
	glVertex2f(77, 22);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2); //horizontal lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(85, 45);
	glVertex2f(150, 45);
	glVertex2f(83, 40);
	glVertex2f(152, 40);
	glVertex2f(81, 35);
	glVertex2f(154, 35);
	glVertex2f(79, 30);
	glVertex2f(156, 30);
	glVertex2f(77, 25);
	glVertex2f(158, 25);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2); //vertical lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(89, 22);
	glVertex2f(97, 50);
	glVertex2f(103, 22);
	glVertex2f(107, 50);
	glVertex2f(117, 22);
	glVertex2f(117, 50);
	glVertex2f(131, 22);
	glVertex2f(127, 50);
	glVertex2f(145, 22);
	glVertex2f(137, 50);
	glEnd();
	glFlush();

	// COMPUTER AT RECEIVER
	glColor3f(0.7, 0.2, 0.0);//monitior
	glBegin(GL_LINE_LOOP);
	glVertex2f(335, 380);
	glVertex2f(335, 440);
	glVertex2f(400, 440);
	glVertex2f(400, 380);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.0);//monitior
	glBegin(GL_LINE_LOOP);
	glVertex2f(337, 382);
	glVertex2f(337, 438);
	glVertex2f(398, 438);
	glVertex2f(398, 382);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2);//ver
	glBegin(GL_LINES);
	glVertex2f(355, 380);
	glVertex2f(355, 375);
	glVertex2f(379, 380);
	glVertex2f(379, 375);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.3, 0.2);//hor
	glBegin(GL_QUADS);
	glVertex2f(348, 370);
	glVertex2f(348, 375);
	glVertex2f(388, 375);
	glVertex2f(388, 370);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);//CPU
	glBegin(GL_LINE_LOOP);
	glVertex2f(330, 350);
	glVertex2f(330, 370);
	glVertex2f(405, 370);
	glVertex2f(405, 350);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.8, 0.2);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(345, 360);
	glVertex2f(345, 365);
	glVertex2f(365, 365);
	glVertex2f(365, 360);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.8);  //CPU
	glBegin(GL_QUADS);
	glVertex2f(382, 358);
	glVertex2f(382, 361);
	glVertex2f(390, 361);
	glVertex2f(390, 358);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);//keyboard
	glBegin(GL_LINE_LOOP);
	glVertex2f(327, 322);
	glVertex2f(337, 350);
	glVertex2f(398, 350);
	glVertex2f(408, 322);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.2, 0.2);//keyboard
	glBegin(GL_POLYGON);
	glVertex2f(327, 325);
	glVertex2f(408, 325);
	glVertex2f(408, 322);
	glVertex2f(327, 322);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2); //horizontal lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(335, 345);
	glVertex2f(400, 345);
	glVertex2f(333, 340);
	glVertex2f(402, 340);
	glVertex2f(331, 335);
	glVertex2f(404, 335);
	glVertex2f(329, 330);
	glVertex2f(406, 330);
	glVertex2f(327, 325);
	glVertex2f(408, 325);
	glEnd();
	glFlush();

	glColor3f(0.7, 0.0, 0.2); //vertical lines of keyboard
	glBegin(GL_LINES);
	glVertex2f(339, 322);
	glVertex2f(347, 350);
	glVertex2f(353, 322);
	glVertex2f(357, 350);
	glVertex2f(367, 322);
	glVertex2f(367, 350);
	glVertex2f(381, 322);
	glVertex2f(377, 350);
	glVertex2f(395, 322);
	glVertex2f(387, 350);
	glEnd();
	glFlush();

	glColor3f(0.0, 0.0, 1.0);   // sender1 window in blue
	glBegin(GL_POLYGON);
	glVertex2f(50, 260);
	glVertex2f(50, 285);
	glVertex2f(185, 285);
	glVertex2f(185, 260);
	glEnd();
	glFlush();

	glColor3f(0.0, 0.0, 1.0);   // sender2 window in blue
	glBegin(GL_POLYGON);
	glVertex2f(50, 175);
	glVertex2f(50, 200);
	glVertex2f(185, 200);
	glVertex2f(185, 175);
	glEnd();
	glFlush();

	glColor3f(1.0, 0.0, 0.0);   // receiver window in red
	glBegin(GL_LINE_LOOP);
	glVertex2f(300, 260);
	glVertex2f(300, 285);
	glVertex2f(435, 285);
	glVertex2f(435, 260);
	glEnd();
	glFlush();
}
void delay()
{
	for (unsigned int o = 0; o <= 79000000; o++);
}
void myInit()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(5.0);
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	setFont(GLUT_BITMAP_HELVETICA_18);
	glMatrixMode(GL_MODELVIEW);
}
void movedown(int x, int y)
{
	float temp = 0.2, j = 0;
	for (j = 0; j<80; j = j + temp) //movement of data packet from top to down
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(x, 238 - j); glVertex2i(x, 253 - j); glVertex2i(x + 5, 253 - j); glVertex2i(x + 5, 238 - j);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(x, 238 - j); glVertex2i(x, 253 - j); glVertex2i(x + 5, 253 - j); glVertex2i(x + 5, 238 - j);
		glEnd();
		glFlush();
	}
}
void move(int srcx, int srcy, int dstx, int dsty)
{
	float temp = 0.25, j = 0;
	for (j = 0; j<20; j = j + temp) //movement of data packet from top to down
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(srcx, 238 - j); glVertex2i(srcx, 253 - j); glVertex2i(srcx + 3, 253 - j); glVertex2i(srcx + 3, 238 - j);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(srcx, 238 - j); glVertex2i(srcx, 253 - j); glVertex2i(srcx + 3, 253 - j); glVertex2i(srcx + 3, 238 - j);
		glEnd();
		glFlush();
	}
	for (j = 0;srcx + 5 + j<dstx; j = j + temp) //movement of data packet sidewise
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(srcx + 5 + j, 218); glVertex2i(srcx + 5 + j, 223); glVertex2i(srcx + 17 + j, 223); glVertex2i(srcx + 17 + j, 218);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(srcx + 5 + j, 218); glVertex2i(srcx + 5 + j, 223); glVertex2i(srcx + 17 + j, 223); glVertex2i(srcx + 17 + j, 218);
		glEnd();
		glFlush();
	}
	for (j = 0; j<25; j = j + temp) //to move the  packet from bottom to top
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(dstx, 218 + j); glVertex2i(dstx, 230 + j); glVertex2i(dstx + 3, 230 + j); glVertex2i(dstx + 3, 218 + j);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(dstx, 218 + j); glVertex2i(dstx, 230 + j); glVertex2i(dstx + 3, 230 + j); glVertex2i(dstx + 3, 218 + j);
		glEnd();
		glFlush();

	}
}

void movesend2(int srcx, int srcy, int dstx, int dsty)
{
	float temp = 0.1, j = 0;
	for (j = 0; j<17; j = j + temp) //to move the  packet from bottom to top
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(srcx, 205 + j); glVertex2i(srcx, 220 + j); glVertex2i(srcx + 3, 220 + j); glVertex2i(srcx + 3, 205 + j);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(srcx, 205 + j); glVertex2i(srcx, 220 + j); glVertex2i(srcx + 3, 220 + j); glVertex2i(srcx + 3, 205 + j);
		glEnd();
		glFlush();

	}
	temp = 0.25;
	for (j = 0; srcx + 5 + j<dstx; j = j + temp) //movement of data packet sidewise
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(srcx + 5 + j, 221); glVertex2i(srcx + 5 + j, 226); glVertex2i(srcx + 17 + j, 226); glVertex2i(srcx + 17 + j, 221);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(srcx + 5 + j, 221); glVertex2i(srcx + 5 + j, 226); glVertex2i(srcx + 17 + j, 226); glVertex2i(srcx + 17 + j, 221);
		glEnd();
		glFlush();
	}
	for (j = 0; j<25; j = j + temp) //to move the  packet from bottom to top
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(dstx, 218 + j); glVertex2i(dstx, 235 + j); glVertex2i(dstx + 3, 235 + j); glVertex2i(dstx + 3, 218 + j);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(dstx, 218 + j); glVertex2i(dstx, 235 + j); glVertex2i(dstx + 3, 235 + j); glVertex2i(dstx + 3, 218 + j);
		glEnd();
		glFlush();

	}
}

void move1(int srcx)
{
	float temp = 0.25, j = 0;
	for (j = 0; j<60; j = j + temp) //movement of data packet from top to down
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(srcx, 238 - j); glVertex2i(srcx, 253 - j); glVertex2i(srcx + 3, 253 - j); glVertex2i(srcx + 3, 238 - j);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(srcx, 238 - j); glVertex2i(srcx, 253 - j); glVertex2i(srcx + 3, 253 - j); glVertex2i(srcx + 3, 238 - j);
		glEnd();
		glFlush();
	}
	for (j = 0; srcx + 5 + j<450; j = j + temp) //movement of data packet sidewise
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(srcx + 5 + j, 178); glVertex2i(srcx + 5 + j, 183); glVertex2i(srcx + 17 + j, 183); glVertex2i(srcx + 17 + j, 178);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(srcx + 5 + j, 178); glVertex2i(srcx + 5 + j, 183); glVertex2i(srcx + 17 + j, 183); glVertex2i(srcx + 17 + j, 178);
		glEnd();
		glFlush();
	}
	for (j = 0; j<200; j = j + temp) //to move the  packet from bottom to top
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(450, 178 + j); glVertex2i(450, 193 + j); glVertex2i(450 + 3, 193 + j); glVertex2i(450 + 3, 178 + j);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(450, 178 + j); glVertex2i(450, 193 + j); glVertex2i(450 + 5, 193 + j); glVertex2i(450 + 5, 178 + j);
		glEnd();
		glFlush();

	}
	for (j = 0; j<40; j = j + temp) //to move the  packet from right to left
	{
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2i(450 - j, 378); glVertex2i(450 - j, 383); glVertex2i(450 - 10 - j, 383); glVertex2i(450 - 10 - j, 378);
		glEnd();
		glFlush();

		glColor3f(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex2i(450 - j, 378); glVertex2i(450 - j, 383); glVertex2i(450 - 10 - j, 383); glVertex2i(450 - 10 - j, 378);
		glEnd();
		glFlush();

	}
}
void bufferdecrease(int x1, int y1, int x2, int y2, float color[])
{
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(x1, y1);
	glVertex2f(x1, y2);
	glVertex2f(x2, y2);
	glVertex2f(x2, y1);
	glEnd();
	glFlush();

	glColor3fv(color);
	glBegin(GL_LINE_LOOP);
	glVertex2f(50, 260);
	glVertex2f(50, 285);
	glVertex2f(185, 285);
	glVertex2f(185, 260);
	glEnd();
	glFlush();

	glColor3fv(color);
	glBegin(GL_LINE_LOOP);
	glVertex2f(50, 175);
	glVertex2f(50, 200);
	glVertex2f(185, 200);
	glVertex2f(185, 175);
	glEnd();
	glFlush();
}
void bufferdecreaserec(int x1, int y1, int x2, int y2)
{
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(x1, y1);
	glVertex2f(x1, y2);
	glVertex2f(x2, y2);
	glVertex2f(x2, y1);
	glEnd();
	glFlush();

	glColor3f(1.0, 0.0, 0.0);   // receiver window in red
	glBegin(GL_LINE_LOOP);
	glVertex2f(300, 260);
	glVertex2f(300, 285);
	glVertex2f(435, 285);
	glVertex2f(435, 260);
	glEnd();
	glFlush();
}
void bufferincrease(int x1, int y1, int x2, int y2)
{
	// receiver window in red
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(x1, y1);
	glVertex2f(x1, y2);
	glVertex2f(x2, y2);
	glVertex2f(x2, y1);
	glEnd();
	glFlush();

	glColor3f(1, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1, y1);
	glVertex2f(x1, y2);
	glVertex2f(x2, y2);
	glVertex2f(x2, y1);
	glEnd();
	glFlush();
}

char * displayString(float p)
{
	std::string str = "Packet of size " + toString((int)p) + " transmitted ";
	const char * c = str.c_str();
	char * writable = new char[str.size() + 1];
	std::copy(str.begin(), str.end(), writable);
	writable[str.size()] = '\0';
	return writable;
}
char * displayString(std::string text, float p)
{
	std::string str = text + " " + toString((int)p);
	const char * c = str.c_str();
	char * writable = new char[str.size() + 1];
	std::copy(str.begin(), str.end(), writable);
	writable[str.size()] = '\0';
	return writable;
}


void coverpage()
{
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.7, 0.0, 0.0);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(180.0, 475.0, 1.0, "    RNS INSTITUTE OF TECHNOLOGY  ");
	glColor3f(0.0, 0.2, 1.0);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(175.0, 440.0, 1.0, "DEPARTMENT OF COMPUTER SCIENCE");
	glColor3f(0.7, 0.5, 0.06);
	drawstring(210.0, 375.0, 1.0, "A MINI PROJECT ON");
	glColor3f(0.3, 0.8, 0.4);
	drawstring(183.0, 340.0, 1.0, "LEAKY BUCKET IMPLEMENTATION");
	glColor3f(0.7, 0.5, 0.06);
	drawstring(80.0, 250.0, 1.0, "BY");
	glColor3f(0.7, 0.5, 0.06);
	drawstring(400.0, 240.0, 1.0, "GUIDES");
	glColor3f(0.79, 0.37, 1.0);
	drawstring(40.0, 210.0, 1.0, "KARTHIK D                1RN15CS049");
	glColor3f(0.79, 0.37, 1.0);
	drawstring(40.0, 190.0, 1.0, "BHARGAV A K           1RN15CS034");
	glColor3f(0.79, 0.37, 1.0);
	drawstring(370.0, 210.0, 1.0, "Mrs.MAMATHA JAJUR");
	glColor3f(0.79, 0.37, 1.0);
	drawstring(370.0, 190.0, 1.0, "Mrs.SAMPADA K S");
	glColor3f(0.15, 0.6, 0.25);
	drawstring(215.0, 10.0, 1.0, "PRESS 1 TO START");
}
void FirstPage()
{
	//int v[4][3] = { {0,1,0},{0,0,1},{1,1,1},{1,1,0} };
	//int p[4][3] = { {50,50},{100,50},{75,80},{100,80} };
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.7, 0.5, 0.06);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(180.0, 480.0, 1.0, "Welcome to Leaky Bucket Implementation");
	glColor3f(0.6, 0, 0.6);
	glBegin(GL_POLYGON);
	glVertex2f(200, 300);
	glVertex2f(200, 325);
	glVertex2f(320, 325);
	glVertex2f(320, 300);
	glEnd();
	glColor3f(1, 0, 0);
	glColor3f(0.0f, 0.0f, 0.0f);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(240.0, 308.0, 1.0, "Leaky Bucket");
	glColor3f(0.0f, 1.0f, 0.0f);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(220.0, 20.0, 1.0, "PRESS Q TO EXIT");
	glFlush();
}
void display(void)
{
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	coverpage();
	glFlush();

}
void DisplayClear(int x1, int y1, int x2, int y2)
{
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(x1, y1);
	glVertex2f(x1, y2);
	glVertex2f(x2, y2);
	glVertex2f(x2, y1);
	glEnd();
	glFlush();
}
void LeakyBucket()
{
	float k = 0, pack1[10], pack2[10], sum1 = 0, sum2 = 0, pack_rem = 0, op_rate = 30, buck_size = 175, j = 0;
	srand(time(NULL));
	glColor3f(0.5f, 0.7f, 0.4f);
	setFont(GLUT_BITMAP_HELVETICA_18);
	std::string bucket = "Bucket size = ";
	char *buck = displayString(bucket, buck_size);
	drawstring(330.0, 100.0, 1.0, buck);

	glColor3f(0.5f, 0.7f, 0.4f);
	setFont(GLUT_BITMAP_HELVETICA_18);
	std::string oprate = "Output Rate = ";
	char *rate = displayString(oprate, op_rate);
	drawstring(330.0, 70.0, 1.0, rate);
	for (int i = 0; i < 4; i++)
	{
		pack1[i] = (rand() + 5) % 80 + 20;
		//pack1[i] = 100;
		sum1 += pack1[i];
		//pack2[i] = 100;
		pack2[i] = (rand() + 5) % 80 + 20;
		sum2 += pack2[i];
	}
	int i = 0, n = 300;
	float temp1 = 0, temp2 = 0;
	char *writable, *bytes;
	std::string text;
	int srcx = 180, srcy = 255, dstx = 300, dsty = 255;
	int srcx1 = 180, srcy1 = 205;
	float k1 = 0, k2 = 0, k3 = 0;
	float pac = 0.0, pac2 = 0.0;
	for (int u = 0; u < 4; u++)
	{
		pac += pack1[u];
		//Bytes Remaining to be sent by Sender 1
		DisplayClear(100, 400, 140, 415);
		glColor3f(1.0f, 1.0f, 1.0f);
		setFont(GLUT_BITMAP_HELVETICA_10);
		text = "Bytes Remaining = ";
		bytes = displayString(text, sum1 - pac);
		drawstring(100.0, 400.0, 1.0, bytes);
		//Bytes Remaining to be sent by Sender 2
		DisplayClear(100, 97, 140, 115);
		glColor3f(1.0f, 1.0f, 1.0f);
		setFont(GLUT_BITMAP_HELVETICA_10);
		bytes = displayString(text, sum2 - pac2);
		drawstring(100.0, 100.0, 1.0, bytes);
		pac2 += pack2[u];
		glColor3f(0, 0, 0);
		temp1 = (pack1[u] / sum1) * 135;
		temp2 = (pack1[u] / buck_size) * 135;
		k1 += temp1;
		k2 += temp2;
		int m = 135 - k1 + 50;
		delay();
		delay();
		//Decreasing sender1 buffer
		bufferdecrease(m, 260, m + k1 + 0.3, 285, blue);
		srcx = m;
		writable = displayString(pack1[u]);
		//display incoming packet and bytes transmitted
		glColor3f(0.0f, 1.0f, 0.0f);
		setFont(GLUT_BITMAP_HELVETICA_12);
		drawstring(88.0, 450.0, 1.0, writable);
		if ((pack1[u] + pack_rem) > buck_size)
		{
			//Bucket capacity exceded packet rejected
			move(srcx, srcy, dstx, dsty);
			k2 -= (pack1[u] / buck_size) * 135;
			glColor3f(0.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			drawstring(88.0, 450.0, 1.0, writable);
			DisplayClear(300.0, 447, 450, 520);
			glColor3f(1.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_18);
			drawstring(310.0, 450.0, 1.0, "Packet Rejected due to Bucket Overflow");
			delay();
			delay();
			glColor3f(1.0f, 1.0f, 1.0f);
			setFont(GLUT_BITMAP_HELVETICA_10);
			movedown(dstx, dsty);
			delay();
			delay();

			//display packet of size op_rate is transmitted
			DisplayClear(300.0, 447, 450, 520);
			glColor3f(0.0f, 1.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			writable = displayString(op_rate);
			drawstring(340.0, 450.0, 1.0, writable);
			float q = (op_rate / buck_size) * 135;
			delay();
			delay();
			pack_rem -= op_rate;
			k2 -= q;
			bufferdecreaserec(dstx, 260, dstx - q, 285);
			printf("%d\t%f", (dstx), (dstx - q));
			delay();
			delay();

			delay();
			DisplayClear(350, 390, 390, 410);
			glColor3f(1.0f, 1.0f, 1.0f);
			setFont(GLUT_BITMAP_HELVETICA_10);
			bytes = displayString(text, pack_rem);
			drawstring(350.0, 400.0, 1.0, bytes);
			delay();
			delay();
			move1(dstx - q);
			glColor3f(0.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			writable = displayString(op_rate);
			drawstring(340.0, 450.0, 1.0, writable);
			temp2 = op_rate;
			dstx = 300 + k2;

		}
		else
		{
			delay();
			delay();
			move(srcx, srcy, dstx, dsty);
			glColor3f(0.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			drawstring(88.0, 450.0, 1.0, writable);
			bufferincrease(n, 260, n + k2, 285);
			delay();
			delay();
			pack_rem += pack1[u];
			DisplayClear(350, 390, 390, 415);
			glColor3f(1.0f, 1.0f, 1.0f);
			setFont(GLUT_BITMAP_HELVETICA_10);
			bytes = displayString(text, pack_rem);
			drawstring(350.0, 400.0, 1.0, bytes);
			delay();
			delay();
			if (pack_rem <= op_rate)
			{
				//display packet size transmitted
				DisplayClear(300.0, 447, 450, 520);
				glColor3f(0.0f, 1.0f, 0.0f);
				setFont(GLUT_BITMAP_HELVETICA_12);
				writable = displayString(pack_rem);
				drawstring(340.0, 450.0, 1.0, writable);
				float q = (pack_rem / buck_size) * 135;
				delay();
				pack_rem = 00.0;
				k2 -= q;
				bufferdecreaserec(dstx + temp2 - q, 260, dstx + temp2 + 2, 285);
				delay();
				delay();
				DisplayClear(320.0, 445, 450, 520);
				glColor3f(1.0f, 1.0f, 1.0f);
				setFont(GLUT_BITMAP_HELVETICA_10);
				bytes = displayString(text, pack_rem);
				drawstring(350.0, 400.0, 1.0, bytes);
				delay();
				delay();
				move1(dstx + temp2 - q);
				glColor3f(0.0f, 0.0f, 0.0f);
				setFont(GLUT_BITMAP_HELVETICA_12);
				writable = displayString(pack_rem);
				drawstring(340.0, 450.0, 1.0, writable);
				temp2 = pack_rem;
			}
			else
			{
				//display packet of size op_rate is transmitted
				DisplayClear(300.0, 447, 450, 520);
				glColor3f(0.0f, 1.0f, 0.0f);
				setFont(GLUT_BITMAP_HELVETICA_12);
				writable = displayString(op_rate);
				drawstring(340.0, 450.0, 1.0, writable);
				float q = (op_rate / buck_size) * 135;
				delay();
				delay();
				pack_rem -= op_rate;
				bufferdecreaserec(dstx + temp2 - q, 260, dstx + temp2 + 2, 285);
				delay();
				delay();
				k2 -= q;
				delay();
				DisplayClear(350, 390, 390, 410);
				glColor3f(1.0f, 1.0f, 1.0f);
				setFont(GLUT_BITMAP_HELVETICA_10);
				bytes = displayString(text, pack_rem);
				drawstring(350.0, 400.0, 1.0, bytes);
				delay();
				delay();
				move1(dstx + temp2 - q);
				glColor3f(0.0f, 0.0f, 0.0f);
				setFont(GLUT_BITMAP_HELVETICA_12);
				writable = displayString(op_rate);
				drawstring(340.0, 450.0, 1.0, writable);
				temp2 = op_rate;
			}
			dstx = 300 + k2;
		}
		glColor3f(0, 0, 0);
		temp1 = (pack2[u] / sum2) * 135;
		temp2 = (pack2[u] / buck_size) * 135;
		k3 += temp1;
		k2 += temp2;
		m = 135 - k3 + 50;
		//Bytes Remaining to be sent by Sender 2
		DisplayClear(100, 97, 140, 115);
		glColor3f(1.0f, 1.0f, 1.0f);
		setFont(GLUT_BITMAP_HELVETICA_10);
		text = "Bytes Remaining = ";
		bytes = displayString(text, sum2 - pac2);
		drawstring(100.0, 100.0, 1.0, bytes);
		//Decreasing sender2 buffer
		bufferdecrease(m, 175, m + k3 + 0.3, 200, blue);
		srcx1 = m;
		writable = displayString(pack2[u]);
		//display incoming packet and bytes transmitted
		glColor3f(0.0f, 1.0f, 0.0f);
		setFont(GLUT_BITMAP_HELVETICA_12);
		drawstring(88.0, 150.0, 1.0, writable);
		if ((pack2[u] + pack_rem) > buck_size)
		{
			//Bucket capacity exceded packet rejected
			movesend2(srcx1, srcy1, dstx, dsty);
			k2 -= (pack2[u] / buck_size) * 135;
			glColor3f(0.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			drawstring(88.0, 150.0, 1.0, writable);

			DisplayClear(300.0, 447, 450, 520);
			glColor3f(1.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_18);
			drawstring(310.0, 450.0, 1.0, "Packet Rejected due to Bucket Overflow");
			delay();
			delay();
			glColor3f(1.0f, 1.0f, 1.0f);
			setFont(GLUT_BITMAP_HELVETICA_10);
			movedown(dstx, dsty);
			delay();
			delay();
			DisplayClear(300.0, 447, 450, 520);

			DisplayClear(300.0, 447, 450, 520);
			glColor3f(0.0f, 1.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			writable = displayString(op_rate);
			drawstring(340.0, 450.0, 1.0, writable);
			float q = (op_rate / buck_size) * 135;
			delay();
			delay();
			pack_rem -= op_rate;
			bufferdecreaserec(dstx, 260, dstx - q, 285);
			delay();
			delay();
			k2 -= q;
			delay();
			DisplayClear(350, 390, 390, 410);
			glColor3f(1.0f, 1.0f, 1.0f);
			setFont(GLUT_BITMAP_HELVETICA_10);
			bytes = displayString(text, pack_rem);
			drawstring(350.0, 400.0, 1.0, bytes);
			delay();
			delay();
			move1(dstx - q);
			glColor3f(0.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			writable = displayString(op_rate);
			drawstring(340.0, 450.0, 1.0, writable);
			temp2 = op_rate;
			dstx = 300 + k2;
		}
		else
		{
			movesend2(srcx1, srcy1, dstx, dsty);
			glColor3f(0.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			drawstring(88.0, 150.0, 1.0, writable);
			bufferincrease(n, 260, n + k2, 285);
			delay();
			delay();
			pack_rem += pack2[u];
			DisplayClear(350, 390, 390, 415);
			glColor3f(1.0f, 1.0f, 1.0f);
			setFont(GLUT_BITMAP_HELVETICA_10);
			bytes = displayString(text, pack_rem);
			drawstring(350.0, 400.0, 1.0, bytes);
			delay();
			delay();
			if (pack_rem <= op_rate)
			{
				//display packet size transmitted
				DisplayClear(300.0, 447, 450, 520);
				glColor3f(0.0f, 1.0f, 0.0f);
				setFont(GLUT_BITMAP_HELVETICA_12);
				writable = displayString(pack_rem);
				drawstring(340.0, 450.0, 1.0, writable);
				float q = (pack_rem / buck_size) * 135;
				delay();
				pack_rem = 0.0;
				k2 -= q;
				bufferdecreaserec(dstx + temp2 - q, 260, dstx + temp2 + 2, 285);
				delay();
				delay();
				DisplayClear(320.0, 445, 450, 520);
				glColor3f(1.0f, 1.0f, 1.0f);
				setFont(GLUT_BITMAP_HELVETICA_10);
				bytes = displayString(text, pack_rem);
				drawstring(350.0, 400.0, 1.0, bytes);
				delay();
				delay();
				move1(dstx + temp2 - q);
				glColor3f(0.0f, 0.0f, 0.0f);
				setFont(GLUT_BITMAP_HELVETICA_12);
				writable = displayString(pack_rem);
				drawstring(340.0, 450.0, 1.0, writable);
				temp2 = pack_rem;
			}
			else
			{
				//display packet of size op_rate is transmitted
				DisplayClear(300.0, 447, 450, 520);
				glColor3f(0.0f, 1.0f, 0.0f);
				setFont(GLUT_BITMAP_HELVETICA_12);
				writable = displayString(op_rate);
				drawstring(340.0, 450.0, 1.0, writable);
				float q = (op_rate / buck_size) * 135;
				delay();
				delay();
				pack_rem -= op_rate;
				bufferdecreaserec(dstx + temp2 - q, 260, dstx + temp2 + 2, 285);
				delay();
				delay();
				k2 -= q;
				delay();
				DisplayClear(350, 390, 390, 410);
				glColor3f(1.0f, 1.0f, 1.0f);
				setFont(GLUT_BITMAP_HELVETICA_10);
				bytes = displayString(text, pack_rem);
				drawstring(350.0, 400.0, 1.0, bytes);
				delay();
				delay();
				move1(dstx + temp2 - q);
				glColor3f(0.0f, 0.0f, 0.0f);
				setFont(GLUT_BITMAP_HELVETICA_12);
				writable = displayString(op_rate);
				drawstring(340.0, 450.0, 1.0, writable);
				temp2 = op_rate;
			}
			dstx = 300 + k2;
		}
	}
	temp2 = 0;
	float q = 0;
	while (pack_rem > 0)
	{
		DisplayClear(350, 390, 390, 415);
		glColor3f(1.0f, 1.0f, 1.0f);
		setFont(GLUT_BITMAP_HELVETICA_10);
		bytes = displayString(text, pack_rem);
		drawstring(350.0, 400.0, 1.0, bytes);
		delay();
		delay();
		if (pack_rem <= op_rate)
		{
			//display packet size transmitted
			DisplayClear(300.0, 447, 450, 520);
			glColor3f(0.0f, 1.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			writable = displayString(pack_rem);
			drawstring(340.0, 450.0, 1.0, writable);
			q += (pack_rem / buck_size) * 135;
			delay();
			pack_rem = 00.0;
			bufferdecreaserec(dstx - q, 260, dstx, 285);
			delay();
			delay();
			temp2 = q;
			move1(dstx - q);
			delay();
			DisplayClear(320.0, 445, 450, 520);
			glColor3f(1.0f, 1.0f, 1.0f);
			setFont(GLUT_BITMAP_HELVETICA_10);
			bytes = displayString(text, pack_rem);
			drawstring(350.0, 400.0, 1.0, bytes);
			delay();
			glColor3f(0.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			writable = displayString(pack_rem);
			drawstring(340.0, 450.0, 1.0, writable);
			temp2 = pack_rem;
		}
		else
		{
			//display packet of size op_rate is transmitted
			DisplayClear(300.0, 447, 450, 520);
			glColor3f(0.0f, 1.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			writable = displayString(op_rate);
			drawstring(340.0, 450.0, 1.0, writable);
			q += (op_rate / buck_size) * 135;
			delay();
			delay();
			pack_rem -= op_rate;
			bufferdecreaserec(dstx - q, 260, dstx, 285);
			delay();
			delay();
			move1(dstx - q);
			delay();
			DisplayClear(350, 390, 390, 410);
			glColor3f(1.0f, 1.0f, 1.0f);
			setFont(GLUT_BITMAP_HELVETICA_10);
			bytes = displayString(text, pack_rem);
			drawstring(350.0, 400.0, 1.0, bytes);
			delay();
			glColor3f(0.0f, 0.0f, 0.0f);
			setFont(GLUT_BITMAP_HELVETICA_12);
			writable = displayString(op_rate);
			drawstring(340.0, 450.0, 1.0, writable);
		}
	}
	delete[] writable;
}
void myMouse(int btn, int state, int x, int y)
{
	x = x / 2;
	y = (1000 - y) / 2.1;
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (x >= 270 && x <= 430 && y >= 325 && y <= 358)
		{
			glClearColor(0, 0, 0, 0);
			glClear(GL_COLOR_BUFFER_BIT);
			computer();
			LeakyBucket();
			FirstPage();
		}
	}
}
void mykeyboard(unsigned char key, int x, int y)
{
	if (key == '1')
	{
		FirstPage();
	}
	if (key == 'q' || key == 'Q')
	{
		exit(0);
	}
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1000, 1000);
	glutCreateWindow(" Leaky Bucket ");
	//glutFullScreen();
	glutDisplayFunc(display);
	glutMouseFunc(myMouse);
	glutKeyboardFunc(mykeyboard);
	myInit();
	glutMainLoop();
	return 0;
}