#include "Gorila.h"



void Gorila::dibujarGorila(GLMmodel *gorila, float posX, float posZ) {
	glPushMatrix();
	glTranslatef(0.0f, -0.85f, 2.5f);
	glRotatef(270, 1.0f, 0, 0);
	glScalef(0.05f, 0.05f, 0.05f);
	glmDraw(gorila, GLM_SMOOTH);
	
	glPopMatrix();
	//glutSolidTeapot(1.0);
}
