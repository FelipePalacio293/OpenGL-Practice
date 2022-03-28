#include "Piramide.h"


// Se puede abrir la malla desde aqui, pero da crash cuando se intenta hacer de forma directa, quizas se necesita algo que no estoy viendo
void Piramide::abrirMalla() {

}

void Piramide::dibujarPiramide(GLMmodel *objmodel_ptr1, GLuint texid, float posX, float posZ) {
	glPushMatrix();
	glTranslatef(posX, -0.7f, posZ);
	glScalef(0.3f, 0.3f, 0.3f);

	glBindTexture(GL_TEXTURE_2D, texid);

	glmDraw(objmodel_ptr1, GLM_SMOOTH | GLM_MATERIAL | GLM_TEXTURE);
	glPopMatrix();
}