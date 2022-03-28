#include "Mundo.h"

void Mundo::dibujarMundo(GLMmodel* objmodel_ptr1, float posX, float posZ) {
	glPushMatrix();
	glTranslatef(posX, 0.0f, posZ);
	glScalef(3.0f, 3.0f, 3.0f);
	glmDraw(objmodel_ptr1, GLM_SMOOTH | GLM_MATERIAL);
	glPopMatrix();
	//glutSolidTeapot(1.0);
}