#include "Gorila.h"



void Gorila::dibujarGorila(GLMmodel *gorila, float posX, float posZ) {
	glPushMatrix();
	glTranslatef(posX, 0.0f, posZ);
	glRotatef(270, 1.0f, 0, 0);
	
	glmDraw(gorila, GLM_SMOOTH);
	//glScalef(5.0f, 5.0f, 5.0f);
	glPopMatrix();
	//glutSolidTeapot(1.0);
}
