#include <GL/glut.h>
#include <cmath>    

#define _PI 3.14
#define N 50

void rendering() {
    
    glClearColor(0.28, 0.86, 0.94, 0.5);
    glClear(GL_COLOR_BUFFER_BIT);

    //Песок
    glBegin(GL_QUADS);

    glColor3f(0.94, 0.90, 0.53);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 4.0);
    glVertex2f(10.0, 4.0);
    glVertex2f(10.0, 0.0);

    glEnd();

    //Пирамида 1
    glBegin(GL_TRIANGLES);

    glColor3f(0.85, 0.57, 0.46);
    glVertex2f(6.5, 3.0);
    glVertex2f(8.0, 8.0);
    glVertex2f(9.5, 3.0);

    glEnd();

    glBegin(GL_TRIANGLES);
    
    glColor3f(0.88, 0.79, 0.46);
    glVertex2f(6.5, 3.0);
    glVertex2f(6.0, 3.85);
    glVertex2f(8.0, 8.0);

    glEnd();
    
    //Пирамида 2
    
    glBegin(GL_TRIANGLES);

    glColor3f(0.85, 0.57, 0.46);
    glVertex2f(5.5, 2.0);
    glVertex2f(7.0, 7.0);
    glVertex2f(8.5, 2.0);


    glEnd();

    glBegin(GL_TRIANGLES);
    
    glColor3f(0.88, 0.79, 0.46);
    glVertex2f(5.5, 2.0);
    glVertex2f(5.0, 2.85);
    glVertex2f(7.0, 7.0);

    glEnd();
    



    //Пальма
    //Ствол
    glBegin(GL_TRIANGLES);
    glColor3f(0.54, 0.27, 0.07);
    glVertex2f(1.25, 4.0);
    glVertex2f(1.0, 1.0);
    glVertex2f(1.5, 1.0);
    glEnd();
    
    //Листок1
    glBegin(GL_TRIANGLES);
    glColor3f(0.19, 0.8, 0.19);
    glVertex2f(1.25, 4.0);
    glVertex2f(1.0, 5.0);
    glVertex2f(1.5, 5.0);
    glEnd();
    glFlush();
    //Листок2
    glBegin(GL_TRIANGLES);
    glColor3f(0.19, 0.8, 0.19);
    glVertex2f(1.25, 4.0);
    glVertex2f(2.25, 4.35);
    glVertex2f(2.25, 3.65);
    glEnd();
    glFlush();
    //Листок3
    glBegin(GL_TRIANGLES);
    glColor3f(0.19, 0.8, 0.19);
    glVertex2f(1.25, 4.0);
    glVertex2f(0.25, 4.35);
    glVertex2f(0.25, 3.65);
    glEnd();
    glFlush();
    
}

void resize(int width, int height) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 10.0, 0.0, 10.0, -10.0, 10.0);
    glViewport(0, 0, (GLint)width, (GLint)height);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitWindowPosition(80, 80);
    glutInitWindowSize(800, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutCreateWindow("Lab3 Egyptian landscape");
    glutDisplayFunc(rendering);
    glutReshapeFunc(resize);
    glutMainLoop();
}
