#include <iostream>
#include "glut.h"

void processmenu(int MenuID) {

	switch (MenuID)
	{
	case 4: {
		exit(0);
		break; }
	}

}

void RenderScene() {
	glClear(GL_COLOR_BUFFER_BIT);



	glBegin(GL_QUADS);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glEnd();




	glFlush();

}

inline void FileMenuCB(int menuID);
inline void EditMenuCB(int menuID);
inline void RenderingMenuCB(int menuID);

void initMenu() {

	int FileMenu = glutCreateMenu(FileMenuCB);
	glutAddMenuEntry("New", 1);
	glutAddMenuEntry("Open", 2);
	glutAddMenuEntry("Save", 3);

	int EditMenu = glutCreateMenu(EditMenuCB);
	glutAddMenuEntry("Copy", 1);
	glutAddMenuEntry("Cut", 2);
	glutAddMenuEntry("Paste", 3);

	int RenderingMenu = glutCreateMenu(RenderingMenuCB);
	glutAddMenuEntry("Points", 1);
	glutAddMenuEntry("Line", 2);
	glutAddMenuEntry("Fill", 3);

	int m_menuID = glutCreateMenu(processmenu);
	glutSetMenu(m_menuID);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutAddSubMenu ("Edit", EditMenu);
	glutAddSubMenu("File",FileMenu);
	glutAddSubMenu("Rendering", RenderingMenu);

	glutAddMenuEntry("EXIT", 4);
}

int main() {
	glutCreateWindow("simple");


	initMenu();
	glutDisplayFunc(RenderScene);
	glutMainLoop();
	return 0;

}

inline void FileMenuCB(int menuID)
{
	switch (menuID)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}

inline void EditMenuCB(int menuID)
{
	switch (menuID)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}

inline void RenderingMenuCB(int menuID)
{
	switch (menuID)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}
