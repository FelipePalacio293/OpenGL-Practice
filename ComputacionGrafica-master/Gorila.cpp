#include "Gorila.h"



void Gorila::dibujarGorila(GLMmodel *gorila) {
	glPushMatrix();
	glTranslatef(-4.0f, 0.0f, 0.0f);
	glmDraw(gorila, GLM_SMOOTH);
	glPopMatrix();
	//glutSolidTeapot(1.0);
}