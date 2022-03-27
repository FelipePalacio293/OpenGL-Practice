#include "Mundo.h"

void Mundo::dibujarMundo(GLMmodel* objmodel_ptr1) {
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	glmDraw(objmodel_ptr1, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
	//glutSolidTeapot(1.0);
}