#include "Piramide.h"


// Se puede abrir la malla desde aqui, pero da crash cuando se intenta hacer de forma directa, quizas se necesita algo que no estoy viendo
void Piramide::abrirMalla() {

}

void Piramide::dibujarPiramide(GLMmodel *objmodel_ptr1, GLuint texid) {
	glPushMatrix();
	glTranslatef(1.5f, 0.0f, 0.0f);
	glBindTexture(GL_TEXTURE_2D, texid);
	glmDraw(objmodel_ptr1, GLM_SMOOTH | GLM_MATERIAL | GLM_TEXTURE);
	glPopMatrix();
}