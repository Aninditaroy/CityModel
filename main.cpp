#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


GLfloat position = 0.0f;
GLfloat speed = 0.01f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.011f;//c4
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.018f;//car
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.015f;//car2
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.07f;//bcarl
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.08f;
GLfloat position6 = 0.0f;
GLfloat speed6 = 0.01f;
GLfloat position7 = 0.0f;
GLfloat speed7 = 0.015f;




GLfloat a =0.0f;
int r=135;
int g=206;
int b=250;
int n;
int s=127;
int e=234;
int m=230;
int l=19;
int i=30;
int h=100;
int k=0,o=0;



/*void update(int value)
{

    if(position > 1.2f)
        position = -2.0f;
    position += speed;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}*/
void updateSun(int value)
{

    if(position2 > 0.7f)
        speed2=0.0f;
    else
        position2 += speed2;

    glutPostRedisplay();


    glutTimerFunc(100, updateSun, 0);
}
void updateCloud1(int value)
{

    if(position3 > 1.2f)
        position3=-1.8f;
    position3 += speed3;

    glutPostRedisplay();


    glutTimerFunc(100, updateCloud1, 0);
}

void updateCar(int value)
{

    if(position5 > 1.2f)
        position5 = -2.0f;
    position5 += speed4;

    glutPostRedisplay();


    glutTimerFunc(100, updateCar, 0);
}

void updateCar2(int value)
{

    if(position6 < -2.0)
        position6 = 1.2f;
    position6 -= speed5;

    glutPostRedisplay();


    glutTimerFunc(100, updateCar2, 0);
}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

}

void sky()
{

    //SKY

    glBegin(GL_QUADS);
    glColor3ub(132, 206, 235);  //bright sky color
    glVertex2f(1.0,-0.4);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,-0.4);
    glEnd();

    glPushMatrix();

    glTranslatef(0.3f,position2, 0.0f);//sun
    glColor3ub(249, 215, 28);
    glutSolidSphere(0.12,30,15);

    glPopMatrix();

}


void left_building_one()
{
////left building 1 //************************


    glBegin(GL_QUADS);
    glColor3ub(92,77,69);   //brown and light red building
    glVertex2f(-.95,-0.4);
    glVertex2f(-.95,0.17);
    glVertex2f(-1.0,0.17);
    glVertex2f(-1.0,-0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(92,77,69);  //brown and light red building
    glVertex2f(-.8,-0.4);
    glVertex2f(-.8,0.17);
    glVertex2f(-.950,0.17);
    glVertex2f(-.950,-0.4);
    glEnd();




//glass#####
    glBegin(GL_POLYGON);
    glColor3ub(184,186,186);  //brown and light red building
    glVertex2f(-.81,-0.4);
    glVertex2f(-.81,0.15);
    glVertex2f(-.945,0.15);
    glVertex2f(-.945,-0.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(184,186,186);  //brown and light red building
    glVertex2f(-.96,-0.4);
    glVertex2f(-.96,0.15);
    glVertex2f(-.995,0.15);
    glVertex2f(-.995,-0.4);
    glEnd();

    //glass#####
    glBegin(GL_QUADS);
    glColor3ub(168, 83, 89); //brown and light red building
    glVertex2f(-.81,-0.4);
    glVertex2f(-.81,0.15);
    glVertex2f(-.945,0.15);
    glVertex2f(-.945,-0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 83, 89);  //brown and light red
    glVertex2f(-.96,-0.4);
    glVertex2f(-.96,0.15);
    glVertex2f(-.995,0.15);
    glVertex2f(-.995,-0.4);
    glEnd();

}

void left_building_two()
{

//left building 2


    glBegin(GL_QUADS);
    glColor3ub(185,149,117);   //halka  cream color buildiing
    glVertex2f(-.75,-0.4);
    glVertex2f(-.75,-0.13);
    glVertex2f(-0.8,-0.13);
    glVertex2f(-.8,-0.4);
    glEnd();
}

void left_building_three()
{
//left building 3

    glBegin(GL_QUADS);
    glColor3ub(111, 121, 133);  //halka grey color buildiing
    glVertex2f(-.65,-0.4);
    glVertex2f(-.65,-0.08);
    glVertex2f(-0.75,-0.08);
    glVertex2f(-.75,-0.4);
    glEnd();

}

void left_building_four()
{

//left building 4

//building side

    glBegin(GL_QUADS);
    glColor3ub(73, 56, 41); //brown border building
    glVertex2f(-.6,-0.4);
    glVertex2f(-.6,0.31);
    glVertex2f(-0.65,0.31);
    glVertex2f(-.65,-0.4);
    glEnd();
//miror 1


    glBegin(GL_QUADS);
    glColor3ub(129, 108, 91);  //buildng halka brown color
    glVertex2f(-.59,-0.4);
    glVertex2f(-.59,0.29);
    glVertex2f(-0.64,0.29);
    glVertex2f(-.64,-0.4);
    glEnd();

//building

    glBegin(GL_QUADS);
    glColor3ub(73, 56, 41);  //brown border building
    glVertex2f(-.5,-0.4);
    glVertex2f(-.5,0.31);
    glVertex2f(-0.6,0.31);
    glVertex2f(-.6,-0.4);
    glEnd();

//miror 2
    glBegin(GL_QUADS);
    glColor3ub(129, 108, 91);   //buildng halka brown color
    glVertex2f(-.51,-0.4);
    glVertex2f(-.51,0.29);
    glVertex2f(-0.59,0.29);
    glVertex2f(-.59,-0.4);
    glEnd();
}



void left_building_five()
{


//left building 5

    glBegin(GL_QUADS);
    glColor3ub(73, 56, 41);  //brown border building
    glVertex2f(-.45,-0.4);
    glVertex2f(-.45,0.09);
    glVertex2f(-0.5,0.09);
    glVertex2f(-0.5,-0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(73, 56, 41);  //brown border building
    glVertex2f(-.4,-0.4);
    glVertex2f(-.4,0.09);
    glVertex2f(-0.45,0.09);
    glVertex2f(-0.45,-0.4);
    glEnd();
//Glass
    glBegin(GL_QUADS);
    glColor3ub(129, 108, 91); //buildng halka brown color
    glVertex2f(-.405,-0.4);
    glVertex2f(-.405,0.08);
    glVertex2f(-0.447,0.08);
    glVertex2f(-0.447,-0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(129, 108, 91); //buildng halka brown color
    glVertex2f(-.457,-0.4);
    glVertex2f(-.457,0.08);
    glVertex2f(-0.495,0.08);
    glVertex2f(-0.495,-0.4);
    glEnd();

}


void pillar()
{

//pillar(thamba)

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);   //lower portion of thamba
    glVertex2f(-.35,-0.4);
    glVertex2f(-.35,0.35);
    glVertex2f(-0.4,0.35);
    glVertex2f(-0.4,-0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);  //lower portion of thamba
    glVertex2f(-.36,0.35);
    glVertex2f(-.36,0.37);
    glVertex2f(-0.39,0.37);
    glVertex2f(-0.39,0.35);
    glEnd();


    glBegin(GL_QUADS);//1st mota
    glColor3ub(0, 0, 0);
    glVertex2f(-.345,0.37);
    glVertex2f(-.345,0.45);
    glVertex2f(-0.405,0.45);
    glVertex2f(-0.405,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.36,0.45);
    glVertex2f(-.36,0.47);
    glVertex2f(-0.39,0.47);
    glVertex2f(-0.39,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.35,0.47);
    glVertex2f(-.35,0.48);
    glVertex2f(-0.40,0.48);
    glVertex2f(-0.40,0.47);
    glEnd();


    glBegin(GL_QUADS);//2nd mota
    glColor3ub(0, 0, 0);
    glVertex2f(-.33,0.48);
    glVertex2f(-.33,0.54);
    glVertex2f(-0.42,0.54);
    glVertex2f(-0.42,0.48);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.36,0.54);
    glVertex2f(-.36,0.56);
    glVertex2f(-0.39,0.56);
    glVertex2f(-0.39,0.54);
    glEnd();

    glBegin(GL_QUADS);//dandi
    glColor3ub(0, 0, 0);
    glVertex2f(-.38,0.56);
    glVertex2f(-.38,0.8);
    glVertex2f(-0.385,0.8);
    glVertex2f(-0.385,0.56);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.365,0.56);
    glVertex2f(-.365,0.8);
    glVertex2f(-0.37,0.8);
    glVertex2f(-0.37,0.56);
    glEnd();



    glBegin(GL_QUADS);//dandi matha
    glColor3ub(0, 0, 0);
    glVertex2f(-.365,0.8);
    glVertex2f(-.365,0.81);
    glVertex2f(-0.385,0.81);
    glVertex2f(-0.385,0.8);
    glEnd();
}




void right_building_one()
{
//right building 1

    glBegin(GL_QUADS);
    glColor3ub(163, 163, 194);
    glVertex2f(0.05,-0.50);
    glVertex2f(0.05,0.15);
    glVertex2f(-0.05,0.15);
    glVertex2f(-0.05,-0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179, 179, 204);
    glVertex2f(0.17,-0.50);
    glVertex2f(0.17,0.15);
    glVertex2f(0.05,0.15);
    glVertex2f(0.05,-0.50);
    glEnd();
//glass
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,0.12);
    glVertex2f(0.16,0.13);
    glVertex2f(0.06,0.13);
    glVertex2f(0.06,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,0.12);
    glVertex2f(0.16,0.13);
    glVertex2f(0.06,0.13);
    glVertex2f(0.06,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,0.10);
    glVertex2f(0.16,0.11);
    glVertex2f(0.06,0.11);
    glVertex2f(0.06,0.10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,0.08);
    glVertex2f(0.16,0.09);
    glVertex2f(0.06,0.09);
    glVertex2f(0.06,0.08);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,0.06);
    glVertex2f(0.16,0.07);
    glVertex2f(0.06,0.07);
    glVertex2f(0.06,0.06);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,0.04);
    glVertex2f(0.16,0.05);
    glVertex2f(0.06,0.05);
    glVertex2f(0.06,0.04);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,0.02);
    glVertex2f(0.16,0.03);
    glVertex2f(0.06,0.03);
    glVertex2f(0.06,0.02);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,0.0);
    glVertex2f(0.16,0.01);
    glVertex2f(0.06,0.01);
    glVertex2f(0.06,0.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.02);
    glVertex2f(0.16,-0.01);
    glVertex2f(0.06,-0.01);
    glVertex2f(0.06,-0.02);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.04);
    glVertex2f(0.16,-0.03);
    glVertex2f(0.06,-0.03);
    glVertex2f(0.06,-0.04);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.06);
    glVertex2f(0.16,-0.05);
    glVertex2f(0.06,-0.05);
    glVertex2f(0.06,-0.06);
    glEnd();//
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.08);
    glVertex2f(0.16,-0.07);
    glVertex2f(0.06,-0.07);
    glVertex2f(0.06,-0.08);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.10);
    glVertex2f(0.16,-0.09);
    glVertex2f(0.06,-0.09);
    glVertex2f(0.06,-0.10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.12);
    glVertex2f(0.16,-0.11);
    glVertex2f(0.06,-0.11);
    glVertex2f(0.06,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.14);
    glVertex2f(0.16,-0.13);
    glVertex2f(0.06,-0.13);
    glVertex2f(0.06,-0.14);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.16);
    glVertex2f(0.16,-0.15);
    glVertex2f(0.06,-0.15);
    glVertex2f(0.06,-0.16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.18);
    glVertex2f(0.16,-0.17);
    glVertex2f(0.06,-0.17);
    glVertex2f(0.06,-0.18);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.20);
    glVertex2f(0.16,-0.19);
    glVertex2f(0.06,-0.19);
    glVertex2f(0.06,-0.20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.22);
    glVertex2f(0.16,-0.21);
    glVertex2f(0.06,-0.21);
    glVertex2f(0.06,-0.22);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.24);
    glVertex2f(0.16,-0.23);
    glVertex2f(0.06,-0.23);
    glVertex2f(0.06,-0.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.26);
    glVertex2f(0.16,-0.25);
    glVertex2f(0.06,-0.25);
    glVertex2f(0.06,-0.26);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.28);
    glVertex2f(0.16,-0.27);
    glVertex2f(0.06,-0.27);
    glVertex2f(0.06,-0.28);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.30);
    glVertex2f(0.16,-0.29);
    glVertex2f(0.06,-0.29);
    glVertex2f(0.06,-0.30);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.32);
    glVertex2f(0.16,-0.31);
    glVertex2f(0.06,-0.31);
    glVertex2f(0.06,-0.32);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.34);
    glVertex2f(0.16,-0.33);
    glVertex2f(0.06,-0.33);
    glVertex2f(0.06,-0.34);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.36);
    glVertex2f(0.16,-0.35);
    glVertex2f(0.06,-0.35);
    glVertex2f(0.06,-0.36);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.06);
    glVertex2f(0.16,-0.05);
    glVertex2f(0.06,-0.05);
    glVertex2f(0.06,-0.06);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16,-0.06);
    glVertex2f(0.16,-0.05);
    glVertex2f(0.06,-0.05);
    glVertex2f(0.06,-0.06);
    glEnd();

}

void right_building_two()
{

//Right building 2

    glBegin(GL_QUADS);
    glColor3ub(117, 163, 163);
    glVertex2f(0.25,-0.50);
    glVertex2f(0.25,0.05);
    glVertex2f(0.17,0.05);
    glVertex2f(0.17,-0.50);
    glEnd();
}

void right_building_three()
{


//Right building 3

    glBegin(GL_QUADS);
    glColor3ub(133, 173, 173);
    glVertex2f(0.37,-0.50);
    glVertex2f(0.37,0.1);
    glVertex2f(0.25,0.1);
    glVertex2f(0.25,-0.50);
    glEnd();

//GLASS
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.365,-0.50);
    glVertex2f(0.365,0.085);
    glVertex2f(0.30,0.085);
    glVertex2f(0.30,-0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.29,-0.50);
    glVertex2f(0.29,0.085);
    glVertex2f(0.255,0.085);
    glVertex2f(0.255,-0.50);
    glEnd();
}

void right_building_four()
{

//Right building 4

    glBegin(GL_QUADS);
    glColor3ub(117, 163, 163);
    glVertex2f(0.53,-0.50);
    glVertex2f(0.53,0.3);
    glVertex2f(0.37,0.3);
    glVertex2f(0.37,-0.50);
    glEnd();


//glass
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.29);
    glVertex2f(0.525,0.28);
    glVertex2f(0.42,0.28);
    glVertex2f(0.42,0.29);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.27);
    glVertex2f(0.525,0.26);
    glVertex2f(0.42,0.26);
    glVertex2f(0.42,0.27);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.25);
    glVertex2f(0.525,0.24);
    glVertex2f(0.42,0.24);
    glVertex2f(0.42,0.25);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.23);
    glVertex2f(0.525,0.22);
    glVertex2f(0.42,0.22);
    glVertex2f(0.42,0.23);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.21);
    glVertex2f(0.525,0.20);
    glVertex2f(0.42,0.20);
    glVertex2f(0.42,0.21);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.19);
    glVertex2f(0.525,0.18);
    glVertex2f(0.42,0.18);
    glVertex2f(0.42,0.19);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.17);
    glVertex2f(0.525,0.16);
    glVertex2f(0.42,0.16);
    glVertex2f(0.42,0.17);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.15);
    glVertex2f(0.525,0.14);
    glVertex2f(0.42,0.14);
    glVertex2f(0.42,0.15);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.13);
    glVertex2f(0.525,0.12);
    glVertex2f(0.42,0.12);
    glVertex2f(0.42,0.13);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.11);
    glVertex2f(0.525,0.10);
    glVertex2f(0.42,0.10);
    glVertex2f(0.42,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.09);
    glVertex2f(0.525,0.08);
    glVertex2f(0.42,0.08);
    glVertex2f(0.42,0.09);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.07);
    glVertex2f(0.525,0.06);
    glVertex2f(0.42,0.06);
    glVertex2f(0.42,0.07);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.05);
    glVertex2f(0.525,0.04);
    glVertex2f(0.42,0.04);
    glVertex2f(0.42,0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.03);
    glVertex2f(0.525,0.02);
    glVertex2f(0.42,0.02);
    glVertex2f(0.42,0.03);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,0.01);
    glVertex2f(0.525,0.00);
    glVertex2f(0.42,0.00);
    glVertex2f(0.42,0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.01);
    glVertex2f(0.525,-0.02);
    glVertex2f(0.42,-0.02);
    glVertex2f(0.42,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.03);
    glVertex2f(0.525,-0.04);
    glVertex2f(0.42,-0.04);
    glVertex2f(0.42,-0.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.05);
    glVertex2f(0.525,-0.06);
    glVertex2f(0.42,-0.06);
    glVertex2f(0.42,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.07);
    glVertex2f(0.525,-0.08);
    glVertex2f(0.42,-0.08);
    glVertex2f(0.42,-0.07);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.09);
    glVertex2f(0.525,-0.10);
    glVertex2f(0.42,-0.10);
    glVertex2f(0.42,-0.09);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.11);
    glVertex2f(0.525,-0.12);
    glVertex2f(0.42,-0.12);
    glVertex2f(0.42,-0.11);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.13);
    glVertex2f(0.525,-0.14);
    glVertex2f(0.42,-0.14);
    glVertex2f(0.42,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.15);
    glVertex2f(0.525,-0.16);
    glVertex2f(0.42,-0.16);
    glVertex2f(0.42,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.17);
    glVertex2f(0.525,-0.18);
    glVertex2f(0.42,-0.18);
    glVertex2f(0.42,-0.17);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.19);
    glVertex2f(0.525,-0.20);
    glVertex2f(0.42,-0.20);
    glVertex2f(0.42,-0.19);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.21);
    glVertex2f(0.525,-0.22);
    glVertex2f(0.42,-0.22);
    glVertex2f(0.42,-0.21);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.23);
    glVertex2f(0.525,-0.24);
    glVertex2f(0.42,-0.24);
    glVertex2f(0.42,-0.23);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.25);
    glVertex2f(0.525,-0.26);
    glVertex2f(0.42,-0.26);
    glVertex2f(0.42,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.27);
    glVertex2f(0.525,-0.28);
    glVertex2f(0.42,-0.28);
    glVertex2f(0.42,-0.27);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.29);
    glVertex2f(0.525,-0.30);
    glVertex2f(0.42,-0.30);
    glVertex2f(0.42,-0.29);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.31);
    glVertex2f(0.525,-0.32);
    glVertex2f(0.42,-0.32);
    glVertex2f(0.42,-0.31);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.33);
    glVertex2f(0.525,-0.34);
    glVertex2f(0.42,-0.34);
    glVertex2f(0.42,-0.33);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.35);
    glVertex2f(0.525,-0.36);
    glVertex2f(0.42,-0.36);
    glVertex2f(0.42,-0.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.37);
    glVertex2f(0.525,-0.38);
    glVertex2f(0.42,-0.38);
    glVertex2f(0.42,-0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.39);
    glVertex2f(0.525,-0.40);
    glVertex2f(0.42,-0.40);
    glVertex2f(0.42,-0.39);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.41);
    glVertex2f(0.525,-0.42);
    glVertex2f(0.42,-0.42);
    glVertex2f(0.42,-0.41);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525,-0.43);
    glVertex2f(0.525,-0.44);
    glVertex2f(0.42,-0.44);
    glVertex2f(0.42,-0.43);
    glEnd();
}


void right_building_five()
{

// Right building 5

    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);
    glVertex2f(0.5,-0.50);
    glVertex2f(0.5,-0.21);
    glVertex2f(0.3,-0.21);
    glVertex2f(0.3,-0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(117, 163, 163);
    glVertex2f(0.75,-0.50);
    glVertex2f(0.75,-0.21);
    glVertex2f(0.5,-0.21);
    glVertex2f(0.5,-0.50);
    glEnd();

//glass

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.23);
    glVertex2f(0.74,-0.22);
    glVertex2f(0.51,-0.22);
    glVertex2f(0.51,-0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.25);
    glVertex2f(0.74,-0.24);
    glVertex2f(0.51,-0.24);
    glVertex2f(0.51,-0.25);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.27);
    glVertex2f(0.74,-0.26);
    glVertex2f(0.51,-0.26);
    glVertex2f(0.51,-0.27);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.29);
    glVertex2f(0.74,-0.28);
    glVertex2f(0.51,-0.28);
    glVertex2f(0.51,-0.29);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.31);
    glVertex2f(0.74,-0.30);
    glVertex2f(0.51,-0.30);
    glVertex2f(0.51,-0.31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.33);
    glVertex2f(0.74,-0.32);
    glVertex2f(0.51,-0.32);
    glVertex2f(0.51,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.35);
    glVertex2f(0.74,-0.34);
    glVertex2f(0.51,-0.34);
    glVertex2f(0.51,-0.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.37);
    glVertex2f(0.74,-0.36);
    glVertex2f(0.51,-0.36);
    glVertex2f(0.51,-0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.39);
    glVertex2f(0.74,-0.38);
    glVertex2f(0.51,-0.38);
    glVertex2f(0.51,-0.39);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.41);
    glVertex2f(0.74,-0.40);
    glVertex2f(0.51,-0.40);
    glVertex2f(0.51,-0.41);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.43);
    glVertex2f(0.74,-0.42);
    glVertex2f(0.51,-0.42);
    glVertex2f(0.51,-0.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.45);
    glVertex2f(0.74,-0.44);
    glVertex2f(0.51,-0.44);
    glVertex2f(0.51,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74,-0.47);
    glVertex2f(0.74,-0.46);
    glVertex2f(0.51,-0.46);
    glVertex2f(0.51,-0.47);
    glEnd();
}

void right_building_six()
{

//Right building 6
    glBegin(GL_QUADS);
    glColor3ub(133, 173, 173);
    glVertex2f(0.85,-0.50);
    glVertex2f(0.85,-0.25);
    glVertex2f(0.8,-0.25);
    glVertex2f(0.8,-0.50);
    glEnd();
}



void right_building_seven()
{

//Right building 7


    glBegin(GL_QUADS);
    glColor3ub(92, 138, 138);
    glVertex2f(0.9,-0.50);
    glVertex2f(0.9,-0.105);
    glVertex2f(0.85,-0.1);
    glVertex2f(0.85,-0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);
    glVertex2f(1.,-0.50);
    glVertex2f(1.0,-0.105);
    glVertex2f(0.9,-0.105);
    glVertex2f(0.9,-0.50);
    glEnd();
//glass
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.45);
    glVertex2f(.995,-0.44);
    glVertex2f(0.91,-0.44);
    glVertex2f(0.91,-0.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.43);
    glVertex2f(.995,-0.42);
    glVertex2f(0.91,-0.42);
    glVertex2f(0.91,-0.43);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.41);
    glVertex2f(.995,-0.40);
    glVertex2f(0.91,-0.40);
    glVertex2f(0.91,-0.41);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.39);
    glVertex2f(.995,-0.38);
    glVertex2f(0.91,-0.38);
    glVertex2f(0.91,-0.39);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.37);
    glVertex2f(.995,-0.36);
    glVertex2f(0.91,-0.36);
    glVertex2f(0.91,-0.37);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.35);
    glVertex2f(.995,-0.34);
    glVertex2f(0.91,-0.34);
    glVertex2f(0.91,-0.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.33);
    glVertex2f(.995,-0.32);
    glVertex2f(0.91,-0.32);
    glVertex2f(0.91,-0.33);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.31);
    glVertex2f(.995,-0.30);
    glVertex2f(0.91,-0.30);
    glVertex2f(0.91,-0.31);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.29);
    glVertex2f(.995,-0.28);
    glVertex2f(0.91,-0.28);
    glVertex2f(0.91,-0.29);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.27);
    glVertex2f(.995,-0.26);
    glVertex2f(0.91,-0.26);
    glVertex2f(0.91,-0.27);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.25);
    glVertex2f(.995,-0.24);
    glVertex2f(0.91,-0.24);
    glVertex2f(0.91,-0.25);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.23);
    glVertex2f(.995,-0.22);
    glVertex2f(0.91,-0.22);
    glVertex2f(0.91,-0.23);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.21);
    glVertex2f(.995,-0.20);
    glVertex2f(0.91,-0.20);
    glVertex2f(0.91,-0.21);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.19);
    glVertex2f(.995,-0.18);
    glVertex2f(0.91,-0.18);
    glVertex2f(0.91,-0.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.17);
    glVertex2f(.995,-0.16);
    glVertex2f(0.91,-0.16);
    glVertex2f(0.91,-0.17);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.15);
    glVertex2f(.995,-0.14);
    glVertex2f(0.91,-0.14);
    glVertex2f(0.91,-0.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995,-0.13);
    glVertex2f(.995,-0.12);
    glVertex2f(0.91,-0.12);
    glVertex2f(0.91,-0.13);
    glEnd();


}

void right_building_eight()
{

//Right building 8
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);
    glVertex2f(0.85,-0.50);
    glVertex2f(0.85,-0.27);
    glVertex2f(0.75,-0.27);
    glVertex2f(0.75,-0.50);
    glEnd();
//glass
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.45);
    glVertex2f(0.84,-0.44);
    glVertex2f(0.76,-0.44);
    glVertex2f(0.76,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.43);
    glVertex2f(0.84,-0.42);
    glVertex2f(0.76,-0.42);
    glVertex2f(0.76,-0.43);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.41);
    glVertex2f(0.84,-0.40);
    glVertex2f(0.76,-0.40);
    glVertex2f(0.76,-0.41);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.39);
    glVertex2f(0.84,-0.38);
    glVertex2f(0.76,-0.38);
    glVertex2f(0.76,-0.39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.37);
    glVertex2f(0.84,-0.36);
    glVertex2f(0.76,-0.36);
    glVertex2f(0.76,-0.37);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.34);
    glVertex2f(0.84,-0.35);
    glVertex2f(0.76,-0.35);
    glVertex2f(0.76,-0.34);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.32);
    glVertex2f(0.84,-0.33);
    glVertex2f(0.76,-0.33);
    glVertex2f(0.76,-0.32);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.30);
    glVertex2f(0.84,-0.31);
    glVertex2f(0.76,-0.31);
    glVertex2f(0.76,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84,-0.28);
    glVertex2f(0.84,-0.29);
    glVertex2f(0.76,-0.29);
    glVertex2f(0.76,-0.28);
    glEnd();
    //end_thamba
}

void tower()
{

    glBegin(GL_QUADS);// mid tower khalifa
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( -.2f,-.5f);
    glVertex2f(-.15f,-.5f);
    glVertex2f( -.15f,.85f);
    glVertex2f( -.2f,.85f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.48f);
    glVertex2f(-.17f,-.48f);
    glVertex2f( -.17f,-.42f);
    glVertex2f( -.19f,-.42f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.38f);
    glVertex2f(-.17f,-.38f);
    glVertex2f( -.17f,-.32f);
    glVertex2f( -.19f,-.32f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.28f);
    glVertex2f(-.17f,-.28f);
    glVertex2f( -.17f,-.22f);
    glVertex2f( -.19f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.18f);
    glVertex2f(-.17f,-.18f);
    glVertex2f( -.17f,-.12f);
    glVertex2f( -.19f,-.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,-.08f);
    glVertex2f(-.17f,-.08f);
    glVertex2f( -.17f,-.02f);
    glVertex2f( -.19f,-.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.08f);
    glVertex2f(-.17f,.08f);
    glVertex2f( -.17f,.02f);
    glVertex2f( -.19f,.02f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.18f);
    glVertex2f(-.17f,.18f);
    glVertex2f( -.17f,.12f);
    glVertex2f( -.19f,.12f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.28f);
    glVertex2f(-.17f,.28f);
    glVertex2f( -.17f,.22f);
    glVertex2f( -.19f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.38f);
    glVertex2f(-.17f,.38f);
    glVertex2f( -.17f,.32f);
    glVertex2f( -.19f,.32f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.48f);
    glVertex2f(-.17f,.48f);
    glVertex2f( -.17f,.42f);
    glVertex2f( -.19f,.42f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.58f);
    glVertex2f(-.17f,.58f);
    glVertex2f( -.17f,.52f);
    glVertex2f( -.19f,.52f);
    glEnd();

    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.68f);
    glVertex2f(-.17f,.68f);
    glVertex2f( -.17f,.62f);
    glVertex2f( -.19f,.62f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.19f,.78f);
    glVertex2f(-.17f,.78f);
    glVertex2f( -.17f,.72f);
    glVertex2f( -.19f,.72f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.179f,.85f);
    glVertex2f(-.171f,.85f);
    glVertex2f( -.171f,.82f);
    glVertex2f( -.179f,.82f);
    glEnd();







    glBegin(GL_QUADS);//tower khalifa antena
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( -.18f,-.85f);
    glVertex2f(-.17f,-.85f);
    glVertex2f( -.17f,.98f);
    glVertex2f( -.18f,.98f);
    glEnd();




    glBegin(GL_QUADS);//tower khalifa
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( -.15f,-.5f);
    glVertex2f(-.1f,-.5f);
    glVertex2f( -.1f,.5f);
    glVertex2f( -.15f,.5f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,.48f);
    glVertex2f(-.121f,.48f);
    glVertex2f( -.121f,.42f);
    glVertex2f( -.129f,.42f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,.38f);
    glVertex2f(-.121f,.38f);
    glVertex2f( -.121f,.32f);
    glVertex2f( -.129f,.32f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,.28f);
    glVertex2f(-.121f,.28f);
    glVertex2f( -.121f,.22f);
    glVertex2f( -.129f,.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,.18f);
    glVertex2f(-.121f,.18f);
    glVertex2f( -.121f,.12f);
    glVertex2f( -.129f,.12f);
    glEnd();



    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,.08f);
    glVertex2f(-.121f,.08f);
    glVertex2f( -.121f,.02f);
    glVertex2f( -.129f,.02f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,-.08f);
    glVertex2f(-.121f,-.08f);
    glVertex2f( -.121f,-.02f);
    glVertex2f( -.129f,-.02f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,-.18f);
    glVertex2f(-.121f,-.18f);
    glVertex2f( -.121f,-.12f);
    glVertex2f( -.129f,-.12f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,-.28f);
    glVertex2f(-.121f,-.28f);
    glVertex2f( -.121f,-.22f);
    glVertex2f( -.129f,-.22f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,-.38f);
    glVertex2f(-.121f,-.38f);
    glVertex2f( -.121f,-.32f);
    glVertex2f( -.129f,-.32f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,-.48f);
    glVertex2f(-.121f,-.48f);
    glVertex2f( -.121f,-.42f);
    glVertex2f( -.129f,-.42f);
    glEnd();


    glBegin(GL_QUADS);// mid tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.129f,-.58f);
    glVertex2f(-.121f,-.58f);
    glVertex2f( -.121f,-.52f);
    glVertex2f( -.129f,-.52f);
    glEnd();





    glBegin(GL_QUADS);//tower khalifa
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( -.25f,-.5f);
    glVertex2f(-.2f,-.5f);
    glVertex2f( -.2f,.7f);
    glVertex2f( -.25f,.7f);
    glEnd();


    glBegin(GL_QUADS);//tower khalifa
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( -.3f,-.5f);
    glVertex2f(-.25f,-.5f);
    glVertex2f( -.25f,.3f);
    glVertex2f( -.3f,.3f);
    glEnd();


    glBegin(GL_QUADS);//tower khalifa
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( -.1f,-.5f);
    glVertex2f(-.05f,-.5f);
    glVertex2f( -.05f,.15f);
    glVertex2f( -.1f,.15f);
    glEnd();


    glBegin(GL_QUADS);//tower khalifa
    glColor3f(0.137255f, 0.419608f, 0.556863f);
    glVertex2f( -.35f,-.5f);
    glVertex2f(-.3f,-.5f);
    glVertex2f( -.3f,.05f);
    glVertex2f( -.35f,.05f);
    glEnd();


    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.079f,-.48f);
    glVertex2f(-.071f,-.48f);
    glVertex2f( -.071f,-.42f);
    glVertex2f( -.079f,-.42f);
    glEnd();

    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.079f,-.38f);
    glVertex2f(-.071f,-.38f);
    glVertex2f( -.071f,-.32f);
    glVertex2f( -.079f,-.32f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.079f,-.28f);
    glVertex2f(-.071f,-.28f);
    glVertex2f( -.071f,-.22f);
    glVertex2f( -.079f,-.22f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.079f,-.18f);
    glVertex2f(-.071f,-.18f);
    glVertex2f( -.071f,-.12f);
    glVertex2f( -.079f,-.12f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.079f,-.08f);
    glVertex2f(-.071f,-.08f);
    glVertex2f( -.071f,-.02f);
    glVertex2f( -.079f,-.02f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f( -.079f,.08f);
    glVertex2f(-.071f,.08f);
    glVertex2f( -.071f,.02f);
    glVertex2f( -.079f,.02f);
    glEnd();


    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,-.48f);
    glVertex2f(-.221f,-.48f);
    glVertex2f( -.221f,-.42f);
    glVertex2f( -.229f,-.42f);
    glEnd();

    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,-.38f);
    glVertex2f(-.221f,-.38f);
    glVertex2f( -.221f,-.32f);
    glVertex2f( -.229f,-.32f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,-.28f);
    glVertex2f(-.221f,-.28f);
    glVertex2f( -.221f,-.22f);
    glVertex2f( -.229f,-.22f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,-.18f);
    glVertex2f(-.221f,-.18f);
    glVertex2f( -.221f,-.12f);
    glVertex2f( -.229f,-.12f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,-.08f);
    glVertex2f(-.221f,-.08f);
    glVertex2f( -.221f,-.02f);
    glVertex2f( -.229f,-.02f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,.08f);
    glVertex2f(-.221f,.08f);
    glVertex2f( -.221f,.02f);
    glVertex2f( -.229f,.02f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,.18f);
    glVertex2f(-.221f,.18f);
    glVertex2f( -.221f,.12f);
    glVertex2f( -.229f,.12f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,.28f);
    glVertex2f(-.221f,.28f);
    glVertex2f( -.221f,.22f);
    glVertex2f( -.229f,.22f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,.38f);
    glVertex2f(-.221f,.38f);
    glVertex2f( -.221f,.32f);
    glVertex2f( -.229f,.32f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,.48f);
    glVertex2f(-.221f,.48f);
    glVertex2f( -.221f,.42f);
    glVertex2f( -.229f,.42f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,.58f);
    glVertex2f(-.221f,.58f);
    glVertex2f( -.221f,.52f);
    glVertex2f( -.229f,.52f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.229f,.68f);
    glVertex2f(-.221f,.68f);
    glVertex2f( -.221f,.62f);
    glVertex2f( -.229f,.62f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.279f,.28f);
    glVertex2f(-.271f,.28f);
    glVertex2f( -.271f,.22f);
    glVertex2f( -.279f,.22f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.279f,.18f);
    glVertex2f(-.271f,.18f);
    glVertex2f( -.271f,.12f);
    glVertex2f( -.279f,.12f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.279f,.08f);
    glVertex2f(-.271f,.08f);
    glVertex2f( -.271f,.02f);
    glVertex2f( -.279f,.02f);
    glEnd();

    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.279f,-.08f);
    glVertex2f(-.271f,-.08f);
    glVertex2f( -.271f,-.02f);
    glVertex2f( -.279f,-.02f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.279f,-.18f);
    glVertex2f(-.271f,-.18f);
    glVertex2f( -.271f,-.12f);
    glVertex2f( -.279f,-.12f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.279f,-.28f);
    glVertex2f(-.271f,-.28f);
    glVertex2f( -.271f,-.22f);
    glVertex2f( -.279f,-.22f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.279f,-.38f);
    glVertex2f(-.271f,-.38f);
    glVertex2f( -.271f,-.32f);
    glVertex2f( -.279f,-.32f);
    glEnd();
    glBegin(GL_QUADS);// left 2nd tower color
    glColor3f(5.0f, 0.5f, .0f);
    glVertex2f( -.279f,-.48f);
    glVertex2f(-.271f,-.48f);
    glVertex2f( -.271f,-.42f);
    glVertex2f( -.279f,-.42f);
    glEnd();


}

void road()
{

    glPushMatrix();
    glBegin(GL_POLYGON);//road

    glColor3ub(80,80,80);
    glVertex2f(1.0f, -0.39f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-1.0f, -0.39f);

    glEnd();



    glBegin(GL_POLYGON);//white line road

    glColor3ub(255,255,255);
    glVertex2f(1.0f, -.534f);
    glVertex2f(1.0f, -0.53f);
    glVertex2f(-1.0f, -0.53f);
    glVertex2f(-1.0f, -.534f);
    glEnd();


}

void road_border()
{

    glBegin(GL_POLYGON);//Road Border white


    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(-1.0f, -0.75f);
    glVertex2f(1.0f, -0.75f);
    glVertex2f(1.0f, -0.7f);

    glEnd();

}

void lamp()
{

    glBegin(GL_POLYGON);//lamp

    glColor3ub(210,210,210);
    glVertex2f(.910f, -0.39f);
    glVertex2f(.910f, -0.27f);
    glVertex2f(.9f, -0.27f);
    glVertex2f(.9f, -0.39f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(k,o,10);
    glVertex2f(.880f, -0.3f);
    glVertex2f(.90f, -0.27f);
    glVertex2f(.91f, -0.27f);
    glVertex2f(.93f, -0.3f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(210,210,210);
    glVertex2f(.610f, -0.39f);
    glVertex2f(.610f, -0.27f);
    glVertex2f(.6f, -0.27f);
    glVertex2f(.6f, -0.39f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(k,o,10);
    glVertex2f(.580f, -0.3f);
    glVertex2f(.60f, -0.27f);
    glVertex2f(.61f, -0.27f);
    glVertex2f(.63f, -0.3f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(210,210,210);
    glVertex2f(.310f, -0.39f);
    glVertex2f(.310f, -0.27f);
    glVertex2f(.3f, -0.27f);
    glVertex2f(.3f, -0.39f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(k,o,10);
    glVertex2f(.280f, -0.3f);
    glVertex2f(.30f, -0.27f);
    glVertex2f(.31f, -0.27f);
    glVertex2f(.33f, -0.3f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(210,210,210);
    glVertex2f(.010f, -0.39f);
    glVertex2f(.010f, -0.27f);
    glVertex2f(.0f, -0.27f);
    glVertex2f(.0f, -0.39f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(k,o,10);
    glVertex2f(-.0180f, -0.3f);
    glVertex2f(.00f, -0.27f);
    glVertex2f(.01f, -0.27f);
    glVertex2f(.03f, -0.3f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(210,210,210);
    glVertex2f(-.310f, -0.39f);
    glVertex2f(-.310f, -0.27f);
    glVertex2f(-.30f, -0.27f);
    glVertex2f(-.30f,-0.39f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(k,o,10);
    glVertex2f(-.280f, -0.3f);
    glVertex2f(-.30f, -0.27f);
    glVertex2f(-.31f, -0.27f);
    glVertex2f(-.33f, -0.3f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(210,210,210);
    glVertex2f(-.610f, -0.39f);
    glVertex2f(-.610f, -0.27f);
    glVertex2f(-.60f, -0.27f);
    glVertex2f(-.60f, -0.39f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(k,o,10);
    glVertex2f(-.580f, -0.3f);
    glVertex2f(-.60f, -0.27f);
    glVertex2f(-.61f, -0.27f);
    glVertex2f(-.63f, -0.3f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(210,210,210);
    glVertex2f(-.910f, -0.39f);
    glVertex2f(-.910f, -0.27f);
    glVertex2f(-.90f, -0.27f);
    glVertex2f(-.90f, -0.39f);

    glEnd();

    glBegin(GL_POLYGON);//lamp

    glColor3ub(k,o,10);
    glVertex2f(-.880f,-0.3f);
    glVertex2f(-.90f, -0.27f);
    glVertex2f(-.91f, -0.27f);
    glVertex2f(-.93f, -0.3f);

    glEnd();

    glPopMatrix();


}


void car()
{

    glPushMatrix();
    glTranslatef(position5,-0.41f, 0.0f);
    //car
    glPushMatrix();
    glBegin(GL_POLYGON);

    glColor3ub(100, 150, 135);
    glVertex2f(0.0f, -0.025f);
    glVertex2f(0.0f, -0.045f);
    glVertex2f(.085f, -0.045f);
    glVertex2f(.085f, -0.025f);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3ub(100, 150, 135);
    glVertex2f(0.03f, -0.00650f);
    glVertex2f(0.02f, -0.045f);
    glVertex2f(.075f, -0.045f);
    glVertex2f(.065f, -0.0065f);

    glEnd();
    glBegin(GL_POLYGON);// glass

    glColor3ub(0, 0, 10);
    glVertex2f(0.065f, -0.00650f);
    glVertex2f(0.075f, -0.025f);
    glVertex2f(.04f, -0.025f);
    glVertex2f(.04f, -0.0065f);

    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(0.025f,-0.041f, 0.0f);//tyres
    glColor3ub(0,0,0);
    glutSolidSphere(0.01,30,15);

    glPopMatrix();
    glPushMatrix();

    glTranslatef(0.065f,-0.041f, 0.0f);//tyres
    glColor3ub(0,0,0);
    glutSolidSphere(0.01,30,15);

    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position6,-0.58f, 0.0f);
    //car
    glPushMatrix();
    glBegin(GL_POLYGON);

    glColor3ub(195, 48, 61);
    glVertex2f(0.0f, -0.025f);
    glVertex2f(0.0f, -0.045f);
    glVertex2f(.085f, -0.045f);
    glVertex2f(.085f, -0.025f);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3ub(195, 48, 61);
    glVertex2f(0.03f, -0.00650f);
    glVertex2f(0.02f, -0.045f);
    glVertex2f(.075f, -0.045f);
    glVertex2f(.065f, -0.0065f);

    glEnd();
    glBegin(GL_POLYGON);// glass

    glColor3ub(k, o, 10);
    glVertex2f(0.03f, -0.00650f);
    glVertex2f(0.02f, -0.025f);
    glVertex2f(.04f, -0.025f);
    glVertex2f(.04f, -0.0065f);

    glEnd();

    glPopMatrix();


    glPushMatrix();

    glTranslatef(0.025f,-0.041f, 0.0f);//tyres
    glColor3ub(0,0,0);
    glutSolidSphere(0.01,30,15);

    glPopMatrix();
    glPushMatrix();

    glTranslatef(0.065f,-0.041f, 0.0f);//tyres
    glColor3ub(0,0,0);
    glutSolidSphere(0.01,30,15);

    glPopMatrix();
    glPopMatrix();

}



void soil()
{

    glBegin(GL_POLYGON);//Soil


    glColor3ub(139,101,8);
    glVertex2f(-1.0f, -0.72f);
    glVertex2f(-1.0f, -1.f);
    glVertex2f(1.0f, -1.f);
    glVertex2f(1.0f, -0.72f);
    glEnd();
}


void grass()
{
    //grass
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 0);  //green grass line
    glVertex2f(-1.0f,-0.95f);
    glVertex2f(-1.0f,-2.f);
    glVertex2f(1.0f,-2.f);
    glVertex2f(1.0f,-0.95f);
    glEnd();

}

////////road ends////////

void cloud()
{

    glTranslatef(position,0.0f, 0.0f);



    glPushMatrix(); //cloud
    glTranslatef(position3, 0.2f, 0);

    glPushMatrix();
    glTranslatef(0.5, 0.5f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.52f, 0.5f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15); //cloud
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.54f, 0.5f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15); //cloud
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position3, 0.25f, 0);

    glPushMatrix();
    glTranslatef(0.6f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.62f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.64f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position3, 0.25f, 0);

    glPushMatrix();
    glTranslatef(0.4f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.42f, 0.55f, 0); //cloud
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.44f, 0.55f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2f, 0.30f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.22f, 0.30f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.24f, 0.30f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.4f, 0.20f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.42f, 0.20f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.44f, 0.20f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.6f, 0.25f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.62f, 0.25f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.026,30,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.64f, 0.25f, 0);
    glColor3ub(255,255,255);
    glutSolidSphere(0.021,30,15);
    glPopMatrix();
    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(a,0.0f, 0.0f);

    sky();

    left_building_one();
    left_building_two();
    left_building_three();
    left_building_four();
    left_building_five();

    pillar();

    tower();


    right_building_one();
    right_building_two();
    right_building_three();
    right_building_four();
    right_building_five();
    right_building_six();
    right_building_seven();
    right_building_eight();

    road();
    lamp();

    car();
    road_border();
    soil();
    grass();
    cloud();


    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800,800);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("City Model");
    glutDisplayFunc(display);
    init();
    glutTimerFunc(1000, updateSun, 0);
    glutTimerFunc(100, updateCloud1, 0);
    glutTimerFunc(100, updateCar, 0);
    glutTimerFunc(100, updateCar2, 0);

    glutMainLoop();
    return 0;
}
