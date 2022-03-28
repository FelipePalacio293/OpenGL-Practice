#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>
#include "glm.h"
#include <FreeImage.h> //*** Para Textura: Incluir librería

class Gorila
{
	public:
		Gorila() {};
		void dibujarGorila(GLMmodel* gorila, float posX, float posZ);
		void moverGorila();
		~Gorila() {};

};

