#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "glm.h"
#include <FreeImage.h> //*** Para Textura: Incluir librería

class Mundo
{
	public:
		Mundo() {};
		void dibujarMundo(GLMmodel* objmodel_ptr1);
		~Mundo() {};
};

