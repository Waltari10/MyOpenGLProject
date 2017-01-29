#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
#include <gl/freeglut.h>

using namespace std;

string name;
int height;
int width;
float weight;

void loadFromFile(string fileName) {
	ifstream t(fileName);

	t >> width;
	t >> height;
	t >> name;
	t >> weight;

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutSolidTeapot(.5);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowSize(300, 300);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("HelloTeapot");

	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}