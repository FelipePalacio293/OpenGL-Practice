#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "glm.h"
#include <FreeImage.h> //*** Para Textura: Incluir librería

class Piramide
{
	//protected:
		//GLMmodel* objmodel_ptr1;
	public:
		Piramide() {};
		void dibujarPiramide(GLMmodel *objmodel_ptr1, GLuint texid);
		void abrirMalla();
		~Piramide() {};
};
