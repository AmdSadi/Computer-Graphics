#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
#include<Windows.h>
#include<MMSystem.h>
#define READ freopen("score.txt","r",stdin)
#define WRITE freopen("score.txt","w",stdout);
using namespace std;

int c1=255;
int c2=255;
int c3=0;
int cc=0;
string stext=" Score :";
string etext="Exit";
int ballx=0;
int bally=0;
int highscore=0;
int highflag=0;
int levelval=1;
int score_val=0;
int life_val=3;
int tankXmin=0;
int tankXmax=0;
int tankYmax=-180;
float transFactor = 0.0f;
int yaxis=0;
int guliYaxis=0;
int cent=150;
int hu=350;
int ymax=30+hu;
int ymin=-30+hu;
int xMove=0;
int xmax=30-150+xMove;
int xmin=-30-150+xMove;
int lagse=0;
int guliX=0;
int x=100,gr=350,h=10;
int a1=-x-cent+90;
int gwidth=20; ///width of gulli
int b1=-gr+(24*h)-40; ///lower co-rdinate
int gheight=3;/// height og gulli
int b2=-gr+((24+gheight)*h)-40;///Upper co-ordinate
int newy1=400;
int newy2=550;
int newy3=700;
int leftx=250;
int rightx=250;
int movee=0;
int rand_num;
int totaltime=100;
int myhighscore=0;
int lifeflag[6];
struct pair{
    int first;
    int second;
}guliCoordinate[10];
float getX(int val)
{
    int width = glutGet(GLUT_WINDOW_WIDTH);
    float frac = (float)val/((float)width/2);
    return frac;
}
float getY(int val)
{
    int height = glutGet(GLUT_WINDOW_HEIGHT);
    float frac = (float)val/((float)height/2);
    return frac;
}
int crownblink()
{
    cc++;
    if(cc%2==0){c1=255;c2=255;c3=0;}
    if(cc%2==1){c1=159;c2=159;c3=0;}
}
void mouseMotion(int x, int y)
{
    int width = glutGet(GLUT_WINDOW_WIDTH);
    int height = glutGet(GLUT_WINDOW_HEIGHT);
    ballx = x;
    bally = y;
    //cout<<ballx<<", "<<bally<<endl;
}
void mouse(int button, int state, int x, int y) {
   if ( state == GLUT_UP)
    {
//        cout<<"click"<<endl;
//            cout<<" "<<ballx<<" "<<bally<<"->"<<getX(300)<<endl;
        if((ballx>=850 && ballx <=1000 && bally>=650 && bally <=700)||(ballx>=980 && ballx <=1140 && bally>=630 && bally <=680) ){

            sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\exit.wav"), SND_ASYNC);
            exit(0);

        }
   }

}
void score()
{
    ostringstream ss;
    ss<<highscore;
    string sh = ss.str();
    string h="High Score  :";

     int l=sh.length();
     int l2=h.length();
    glColor3f(0.0,0.0,0.0);

    glRasterPos2f( getX(280),getY(330));
    for(int i=0; i < l2; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, h[i]);

    }

    glRasterPos2f( getX(400),getY(330));
    for(int i=0; i < l; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, sh[i]);

    }


    glColor3ub(c1,c2,c3);
    glBegin(GL_POLYGON);
    glVertex2f(getX(470),getY(325));
    glVertex2f(getX(500),getY(325));
    glVertex2f(getX(510),getY(350));
    glVertex2f(getX(495),getY(340));
    glVertex2f(getX(485),getY(350));
    glVertex2f(getX(475),getY(340));
    glVertex2f(getX(460),getY(350));
    glEnd();


    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(300),getY(260));
    glVertex2f(getX(500),getY(260));
    glVertex2f(getX(500),getY(310));
    glVertex2f(getX(300),getY(310));
    glEnd();

    glColor3ub(196,196,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(300),getY(260));
    glVertex2f(getX(500),getY(260));
    glVertex2f(getX(500),getY(310));
    glVertex2f(getX(300),getY(310));
    glEnd();

    ostringstream s;
    s<<score_val;
    string sc = s.str();

    l=sc.length();
    l2=stext.length();
    glColor3f(0.0,0.0,0.0);

    glRasterPos2f( getX(320),getY(280));
    for(int i=0; i < l2; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, stext[i]);

    }

    glRasterPos2f( getX(400),getY(280));
    for(int i=0; i < l; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, sc[i]);

    }

    if(score_val>myhighscore)
    {
        highscore=score_val;
        highflag=1;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\levelup.wav"), SND_ASYNC);


     h="High Score Reached!!!";


    l2=h.length();
    glColor3ub(c1,c2,c3);
    if(cc>20){glColor3ub(255,255,0);}

    glRasterPos2f( getX(310),getY(230));
    for(int i=0; i < l2; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, h[i]);

    }
    }

    if(score_val>highscore)
    {
        highscore=score_val;


     h="High Score Reached!!!";


    l2=h.length();
    glColor3f(1.0,1.0,0.0);

    glRasterPos2f( getX(310),getY(230));
    for(int i=0; i < l2; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, h[i]);

    }

    }
}

void specialKeys(int key, int x, int y) {
    switch (key) {
      case GLUT_KEY_LEFT:
            if(movee<=-290){
                glutPostRedisplay();
                break;
            }
            if(guliYaxis==0)
                guliX-=20;
            movee-=20;
            glutPostRedisplay();
          break;
      case GLUT_KEY_RIGHT:
            if(movee>=290){
                glutPostRedisplay();
                break;
            }
            if(guliYaxis==0)
            guliX+=20;
            movee+=20;
            glutPostRedisplay();
          break;
    }
}
void keyboard(unsigned char key,int x,int y)
{
    switch(key){
        case 32:
            sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\Gun.wav"),  SND_ASYNC);
            guliYaxis++;
            glutPostRedisplay();
            break;
        }
}
void Tank()
{
    int x,y,d,h,cent,gr;
    x=100; ///value of x exes
    y=200; ///value of y exes
    h=10; ///hight
    d=50; ///diameter
    cent=150-movee; ///center
    gr=380; ///ground
    ///left leg
    glBegin(GL_QUADS);
    glColor3ub(0,0,160);
        glVertex2f(getX(-x-cent),getY(y-gr));
        glVertex2f(getX(-x-cent+d),getY(y-gr));
        glVertex2f(getX(-x-cent+d),getY(-gr));
        glVertex2f(getX(-x-cent),getY(-gr));
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
        for(int i=-gr+20; i<y-gr; i+=40)
        {
            glVertex2f(getX(-x-cent),getY(i+10));
            glVertex2f(getX(-x-cent+d),getY(i+10));
            glVertex2f(getX(-x-cent+d),getY(i));
            glVertex2f(getX(-x-cent),getY(i));
        }
    glEnd();
    ///right leg
    glBegin(GL_QUADS);
    glColor3ub(0,0,160);
        glVertex2f(getX(x-cent),getY(y-gr));
        glVertex2f(getX(x-cent-d),getY(y-gr));
        glVertex2f(getX(x-cent-d),getY(-gr));
        glVertex2f(getX(x-cent),getY(-gr));
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
        for(int i=-gr+20; i<y-gr; i+=40)
        {
            glVertex2f(getX(x-cent),getY(i+10));
            glVertex2f(getX(x-cent-d),getY(i+10));
            glVertex2f(getX(x-cent-d),getY(i));
            glVertex2f(getX(x-cent),getY(i));
        }
    glEnd();

    tankXmax=x-cent;
    tankXmin=-x-cent;
    ///left main body
    glBegin(GL_QUADS);
    glColor3ub(0,60,0);
        glVertex2f(getX(-x-cent+(d/3)),getY(y-gr-h));
        glVertex2f(getX(-x-cent+(d+(d/3))),getY(y-gr-h));
        glVertex2f(getX(-x-cent+(d+(d/3))),getY(-gr+h));
        glVertex2f(getX(-x-cent+(d/3)),getY(-gr+h));
    glEnd();
    ///right main body
    glBegin(GL_QUADS);
    glColor3ub(0,60,0);
        glVertex2f(getX(x-cent-(d/3)),getY(y-gr-h));
        glVertex2f(getX(x-cent-(d+(d/3))),getY(y-gr-h));
        glVertex2f(getX(x-cent-(d+(d/3))),getY(-gr+h));
        glVertex2f(getX(x-cent-(d/3)),getY(-gr+h));
    glEnd();
    ///center main body layer 1
    glBegin(GL_QUADS);
    glColor3ub(30,50,30);
        glVertex2f(getX(-x-cent+(d-(d/3))),getY(y-gr-(h+(h/2))));
        glVertex2f(getX(x-cent-(d-(d/3))),getY(y-gr-(h+(h/2))));
        glVertex2f(getX(x-cent-(d-(d/3))),getY(-gr+(h+(h/2))));
        glVertex2f(getX(-x-cent+(d-(d/3))),getY(-gr+(h+(h/2))));
    glEnd();
    ///center main body layer 2
    glBegin(GL_QUADS);
    glColor3ub(13,45,23);
        glVertex2f(getX(-x-cent+(d+(d/6))),getY(y-gr-(5*h)));
        glVertex2f(getX(x-cent-(d+(d/6))),getY(y-gr-(5*h)));
        glVertex2f(getX(x-cent-(d+(d/6))),getY(-gr+(10*h)));
        glVertex2f(getX(-x-cent+(d+(d/6))),getY(-gr+(10*h)));
    glEnd();
    ///cannon 1
    glBegin(GL_QUADS);
    glColor3ub(200,0,0);
        glVertex2f(getX(-x-cent+80),getY(-gr+(12*h)));
        glVertex2f(getX(x-cent-80),getY(-gr+(12*h)));
        glVertex2f(getX(x-cent-80),getY(-gr+(21*h)));
        glVertex2f(getX(-x-cent+80),getY(-gr+(21*h)));
    glEnd();
    ///cannon 1 head
    glBegin(GL_QUADS);
    glColor3ub(200,0,0);
        glVertex2f(getX(-x-cent+60),getY(-gr+(21*h)));
        glVertex2f(getX(x-cent-60),getY(-gr+(21*h)));
        glVertex2f(getX(x-cent-60),getY(-gr+(24*h)));
        glVertex2f(getX(-x-cent+60),getY(-gr+(24*h)));
    glEnd();
}

void guli()
{


    guliCoordinate[0].first=a1+guliX;
    guliCoordinate[0].second=b1+guliYaxis;
    guliCoordinate[1].first=a1+gwidth+guliX;
    guliCoordinate[1].second=b1+guliYaxis;
    guliCoordinate[2].first=a1+gwidth+guliX;
    guliCoordinate[2].second=b2+guliYaxis;
    guliCoordinate[3].first=a1+guliX;
    guliCoordinate[3].second=b2+guliYaxis;
    ///Gulli
    glBegin(GL_QUADS);
    glColor3ub(64,0,64);
        glVertex2f(getX(a1+guliX),getY(b1+guliYaxis));
        glVertex2f(getX(a1+gwidth+guliX),getY(b1+guliYaxis));
        glVertex2f(getX(a1+gwidth+guliX),getY(b2+guliYaxis));
        glVertex2f(getX(a1+guliX),getY(b2+guliYaxis));
    glEnd();

}

#include "functions.h"
#include "MYSOUND.h"

bool guliLagse()
{

    bool ans=false;
//    cout<<xmin<<" "<<ymin+yaxis<<" => "<<guliCoordinate[3].first<<" "<<guliCoordinate[3].second<<endl;
    for(int i=0;i<4;i++)
    {
        if(guliCoordinate[i].second<=(ymax+yaxis) && guliCoordinate[i].second>=(ymin+yaxis) && guliCoordinate[i].first>=xmin && guliCoordinate[i].first<=xmax)
        {
//            cout<<guliCoordinate[i].first<<" =ha= "<<guliCoordinate[i].second<<endl;

            ans=true;
        }
    }
    if(tankYmax>=(ymin+yaxis)&&(tankXmin<=xmin||tankXmin<=xmax)&&(tankXmax>=xmin||tankXmax>=xmax)&&life_val>=1)
        {
            life_val-=1;
        }

    return ans;
}
void drawKonta()
{
    int c=0;
    if(rand_num==c++)
        drawA();
    else if(rand_num==c++)
        drawAleft();
    else if(rand_num==c++)
        drawAright();
    else if(rand_num==c++)
        drawB();
    else if(rand_num==c++)
        drawBleft();
    else if(rand_num==c++)
        drawBright();
    else if(rand_num==c++)
        drawC();
    else if(rand_num==c++)
        drawCleft();
    else if(rand_num==c++)
        drawCright();
    else if(rand_num==c++)
        drawD();
    else if(rand_num==c++)
        drawDleft();
    else if(rand_num==c++)
        drawDright();
    else if(rand_num==c++)
        drawE();
    else if(rand_num==c++)
        drawEleft();
    else if(rand_num==c++)
        drawEright();
    else if(rand_num==c++)
        drawF();
    else if(rand_num==c++)
        drawFleft();
    else if(rand_num==c++)
        drawFright();
    else if(rand_num==c++)
        drawG();
    else if(rand_num==c++)
        drawGleft();
    else if(rand_num==c++)
        drawGright();
    else if(rand_num==c++)
        drawH();
    else if(rand_num==c++)
        drawHleft();
    else if(rand_num==c++)
        drawHright();
    else if(rand_num==c++)
        drawI();
    else if(rand_num==c++)
        drawIleft();
    else if(rand_num==c++)
        drawIright();
    else if(rand_num==c++)
        drawJ();
    else if(rand_num==c++)
        drawJleft();
    else if(rand_num==c++)
        drawJright();
    else if(rand_num==c++)
        drawK();
    else if(rand_num==c++)
        drawKleft();
    else if(rand_num==c++)
        drawKright();
    else if(rand_num==c++)
        drawL();
    else if(rand_num==c++)
        drawLleft();
    else if(rand_num==c++)
        drawLright();
    else if(rand_num==c++)
        drawM();
    else if(rand_num==c++)
        drawMleft();
    else if(rand_num==c++)
        drawMright();
    else if(rand_num==c++)
        drawN();
    else if(rand_num==c++)
        drawNleft();
    else if(rand_num==c++)
        drawNright();
    else if(rand_num==c++)
        drawO();
    else if(rand_num==c++)
        drawOleft();
    else if(rand_num==c++)
        drawOright();
    else if(rand_num==c++)
        drawP();
    else if(rand_num==c++)
        drawPleft();
    else if(rand_num==c++)
        drawPright();
    else if(rand_num==c++)
        drawQ();
    else if(rand_num==c++)
        drawQleft();
    else if(rand_num==c++)
        drawQright();
    else if(rand_num==c++)
        drawR();
    else if(rand_num==c++)
        drawRleft();
    else if(rand_num==c++)
        drawRright();
    else if(rand_num==c++)
        drawS();
    else if(rand_num==c++)
        drawSleft();
    else if(rand_num==c++)
        drawSright();
    else if(rand_num==c++)
        drawT();
    else if(rand_num==c++)
        drawTleft();
    else if(rand_num==c++)
        drawTright();
    else if(rand_num==c++)
        drawU();
    else if(rand_num==c++)
        drawUleft();
    else if(rand_num==c++)
        drawUright();
    else if(rand_num==c++)
        drawV();
    else if(rand_num==c++)
        drawVleft();
    else if(rand_num==c++)
        drawVright();
    else if(rand_num==c++)
        drawW();
    else if(rand_num==c++)
        drawWleft();
    else if(rand_num==c++)
        drawWright();
    else if(rand_num==c++)
        drawX();
    else if(rand_num==c++)
        drawXleft();
    else if(rand_num==c++)
        drawXright();
    else if(rand_num==c++)
        drawY();

    else if(rand_num==c++)
        drawYleft();
    else if(rand_num==c++)
        drawYright();
    else if(rand_num==c++)
        drawZ();
    else if(rand_num==c++)
        drawZleft();
    else if(rand_num==c++)
        drawZright();
    else if(rand_num==c++)
        drawBoxleft();
    else if(rand_num==c++)
        drawBoxright();
    else if(rand_num==c++)
        drawStarleft();

}
int tim=0;
void buttons()
{
    glColor3f(1.0,0.0,0.0);///Exit button
    glBegin(GL_POLYGON);
    glVertex2f(getX(300),getY(-320));
    glVertex2f(getX(450),getY(-320));
    glVertex2f(getX(450),getY(-280));
    glVertex2f(getX(300),getY(-280));
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(300),getY(-320));
    glVertex2f(getX(450),getY(-320));
    glVertex2f(getX(450),getY(-280));
    glVertex2f(getX(300),getY(-280));
    glEnd();


    int l2=stext.length();
    glColor3f(1.0,1.0,1.0);

    glRasterPos2f( getX(350),getY(-305));
    for(int i=0; i < l2; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, etext[i]);

    }
}
void endscreen()
{

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(-550),getY(-400));
    glVertex2f(getX(550),getY(-400));
    glVertex2f(getX(550),getY(400));
    glVertex2f(getX(-550),getY(400));
    glEnd();

    string h="Game Over";

     int l2=h.length();
    glColor3f(1.0,1.0,0.0);

    glRasterPos2f( getX(-20),getY(0));
    for(int i=0; i < l2; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, h[i]);

    }

    ostringstream ss;
    ss<<score_val;
    string sh = ss.str();
    string h1="Your Score  :";

     int l=sh.length();
    l2=h1.length();
    glColor3f(1.0,1.0,0.0);

    glRasterPos2f( getX(-30),getY(-30));
    for(int i=0; i < l2; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, h1[i]);

    }

    glRasterPos2f( getX(100),getY(-30));
    for(int i=0; i < l; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, sh[i]);

    }


    sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\exit.wav"), SND_ASYNC);



//    drawStrokeText("Osama Hosam's OpenGL Tutorials",200,200,0);



}


void level()
{
    int a=0;

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(300),getY(-120-a));
    glVertex2f(getX(500),getY(-120-a));
    glVertex2f(getX(500),getY(90-a));
    glVertex2f(getX(300),getY(90-a));
    glEnd();

    glLineWidth(10);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(getX(330),getY(80-a));
    glVertex2f(getX(330),getY(40-a));
    glVertex2f(getX(330),getY(45-a));
    glVertex2f(getX(350),getY(45-a)); //L

    glVertex2f(getX(360),getY(80-a));
    glVertex2f(getX(360),getY(40-a));

    glVertex2f(getX(360),getY(75-a));
    glVertex2f(getX(380),getY(75-a));

    glVertex2f(getX(360),getY(60-a));
    glVertex2f(getX(380),getY(60-a));

    glVertex2f(getX(360),getY(45-a));
    glVertex2f(getX(380),getY(45-a)); //E

    glVertex2f(getX(390),getY(80-a));
    glVertex2f(getX(400),getY(40-a));
    glVertex2f(getX(400),getY(40-a));
    glVertex2f(getX(410),getY(80-a));//V

    glVertex2f(getX(360+65),getY(80-a));
    glVertex2f(getX(360+65),getY(40-a));

    glVertex2f(getX(360+65),getY(75-a));
    glVertex2f(getX(380+65),getY(75-a));

    glVertex2f(getX(360+65),getY(60-a));
    glVertex2f(getX(380+65),getY(60-a));

    glVertex2f(getX(360+65),getY(45-a));
    glVertex2f(getX(380+65),getY(45-a)); //E

    glVertex2f(getX(455),getY(80-a));
    glVertex2f(getX(455),getY(40-a));
    glVertex2f(getX(455),getY(45-a));
    glVertex2f(getX(475),getY(45-a)); //L

    glLineWidth(40);
    if(levelval==1)
    {
    glVertex2f(getX(400),getY(5-a));
    glVertex2f(getX(400),getY(-60-a));

    glVertex2f(getX(380),getY(-60-a));
    glVertex2f(getX(420),getY(-60-a));

    glVertex2f(getX(398),getY(2-a));
    glVertex2f(getX(380),getY(-10-a));
    }

    if(levelval==2)
    {
    glVertex2f(getX(370),getY(0-a));
    glVertex2f(getX(430),getY(0-a));

    glVertex2f(getX(430),getY(5-a));
    glVertex2f(getX(430),getY(-40-a));

    glVertex2f(getX(370),getY(-35-a));
    glVertex2f(getX(430),getY(-35-a));

    glVertex2f(getX(375),getY(-30-a));
    glVertex2f(getX(375),getY(-70-a));

    glVertex2f(getX(370),getY(-65-a));
    glVertex2f(getX(430),getY(-65-a));
    }

     if(levelval==3)
    {
    glVertex2f(getX(430),getY(5-a));
    glVertex2f(getX(430),getY(-70-a));

    glVertex2f(getX(370),getY(0-a));
    glVertex2f(getX(430),getY(0-a));

    glVertex2f(getX(370),getY(-35-a));
    glVertex2f(getX(430),getY(-35-a));

    glVertex2f(getX(370),getY(-65-a));
    glVertex2f(getX(430),getY(-65-a));
    }

    if(levelval==4)
    {
    glVertex2f(getX(410),getY(5-a));
    glVertex2f(getX(410),getY(-70-a));


    glVertex2f(getX(410),getY(3-a));
    glVertex2f(getX(368),getY(-35-a));

    glVertex2f(getX(370),getY(-35-a));
    glVertex2f(getX(430),getY(-35-a));

    }


    glEnd();
}

void life()
{

    int a=10;

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);
    glVertex2f(getX(300),getY(160-a));
    glVertex2f(getX(500),getY(160-a));
    glVertex2f(getX(500),getY(210-a));
    glVertex2f(getX(300),getY(210-a));
    glEnd();
    int q1,q2,q3,p1;
    p1=0;
    q1=0; q2=q1+50; q3=q2+50;

    switch(life_val)
    {
    case 1:

    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(345+q1),getY(160+p1));
    glVertex2f(getX(360+q1),getY(180+p1));
    glVertex2f(getX(355+q1),getY(190+p1));
    glVertex2f(getX(350+q1),getY(190+p1));
    glVertex2f(getX(345+q1),getY(180+p1));
    glVertex2f(getX(340+q1),getY(190+p1));
    glVertex2f(getX(335+q1),getY(190+p1));
    glVertex2f(getX(330+q1),getY(180+p1));
    glEnd();

    break;

    case 2:
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(345+q1),getY(160+p1));
    glVertex2f(getX(360+q1),getY(180+p1));
    glVertex2f(getX(355+q1),getY(190+p1));
    glVertex2f(getX(350+q1),getY(190+p1));
    glVertex2f(getX(345+q1),getY(180+p1));
    glVertex2f(getX(340+q1),getY(190+p1));
    glVertex2f(getX(335+q1),getY(190+p1));
    glVertex2f(getX(330+q1),getY(180+p1));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(345+q2),getY(160+p1));
    glVertex2f(getX(360+q2),getY(180+p1));
    glVertex2f(getX(355+q2),getY(190+p1));
    glVertex2f(getX(350+q2),getY(190+p1));
    glVertex2f(getX(345+q2),getY(180+p1));
    glVertex2f(getX(340+q2),getY(190+p1));
    glVertex2f(getX(335+q2),getY(190+p1));
    glVertex2f(getX(330+q2),getY(180+p1));
    glEnd();

    break;

    case 3:
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(345+q1),getY(160+p1));
    glVertex2f(getX(360+q1),getY(180+p1));
    glVertex2f(getX(355+q1),getY(190+p1));
    glVertex2f(getX(350+q1),getY(190+p1));
    glVertex2f(getX(345+q1),getY(180+p1));
    glVertex2f(getX(340+q1),getY(190+p1));
    glVertex2f(getX(335+q1),getY(190+p1));
    glVertex2f(getX(330+q1),getY(180+p1));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(345+q2),getY(160+p1));
    glVertex2f(getX(360+q2),getY(180+p1));
    glVertex2f(getX(355+q2),getY(190+p1));
    glVertex2f(getX(350+q2),getY(190+p1));
    glVertex2f(getX(345+q2),getY(180+p1));
    glVertex2f(getX(340+q2),getY(190+p1));
    glVertex2f(getX(335+q2),getY(190+p1));
    glVertex2f(getX(330+q2),getY(180+p1));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(getX(345+q3),getY(160+p1));
    glVertex2f(getX(360+q3),getY(180+p1));
    glVertex2f(getX(355+q3),getY(190+p1));
    glVertex2f(getX(350+q3),getY(190+p1));
    glVertex2f(getX(345+q3),getY(180+p1));
    glVertex2f(getX(340+q3),getY(190+p1));
    glVertex2f(getX(335+q3),getY(190+p1));
    glVertex2f(getX(330+q3),getY(180+p1));
    glEnd();

    break;

    case 0:
        myhighscore=max(myhighscore,score_val);
        WRITE;
        cout<<myhighscore<<endl;
        endscreen();
        break;
    }
}
void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.85,0.85,0.85,0.0);
    glColor3ub(159,159,0);
    glBegin(GL_POLYGON);
    glVertex2f(getX(250),getY(-400));
    glVertex2f(getX(550),getY(-400));
    glVertex2f(getX(550),getY(400));
    glVertex2f(getX(250),getY(400));
    glEnd();
    score();
    buttons();
    glColor3ub(25,25,25);
    tim++;
    if(guliLagse()){
            //////////////////////////SOUND////////////////////////////
//        if(drawA)
//        cout<<rand_num<<endl;
        mysound();
//        cout<<"Lagse ";
//            cout<<tim<<endl;
        lagse=1;
        if(guliYaxis==0){if(life_val>=1){life_val-=1;}}
        else{
        if(rand_num==80){score_val+=10;}
        if(rand_num==78||rand_num==79){score_val-=10;}
        else{score_val+=1000;}
        }
       /* if(score_val==200 || score_val==400 || score_val==600 || score_val==800){

            sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\levelup.wav"), SND_ASYNC);
//            cout<<"LEVELUP"<<endl;
            if(levelval<4)
            {
                levelval++;
                totaltime-=20;
            }
            if(life_val<3)
            {
                life_val++;
            }
        }*/

        if(score_val>=200&&score_val<400)
        {
            levelval=2;
            totaltime=80;
            if(lifeflag[2]==0)
            {
                sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\levelup.wav"), SND_ASYNC);
                lifeflag[2]=1;
                if(life_val<3)
                {
                    life_val++;
                }
            }
        }

        if(score_val>=400&&score_val<600)
        {
            levelval=3;
            totaltime=60;
            if(lifeflag[3]==0)
            {
                sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\levelup.wav"), SND_ASYNC);
                lifeflag[3]=1;
                if(life_val<3)
                {
                    life_val++;
                }
            }
        }

        if(score_val>=600)
        {
            levelval=4;
            totaltime=40;
            if(lifeflag[4]==0)
            {
                sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\levelup.wav"), SND_ASYNC);
                lifeflag[4]=1;
                if(life_val<3)
                {
                    life_val++;
                }
            }
        }



    }

    if(lagse==1)
    {
        glColor3f(1,1,1);
    }
    else
        glColor3ub(25,25,25);
//    cout<<tim<<endl;
//    if(tim>=60)
//    {
//        cout<<"change "<<endl;
//        tim=0;
//        rand_num=rand()%2;
//    }
//    drawA();

//    drawAleft();
    drawKonta();
    guli();
    Tank();
    level();
    life();

    glutSwapBuffers();


}
void update(int value)
{
//    transFactor-=0.01f;
//    if(transFactor<getY(-400))
//       transFactor = 1 * getY(450);
    yaxis-=10;

    if(highflag==1){    crownblink();}

    if(yaxis<-500){
        yaxis=0;
        rand_num=rand()%81;
    }
    score();

    glutPostRedisplay();
    glutTimerFunc(totaltime,update,0);
    if(lagse==1)
    {
        rand_num=rand()%81;
        tim=0;
        yaxis=0;
        lagse=0;
        guliYaxis=0;
        guliX=movee;
    }
    if(guliYaxis>0)
        guliYaxis+=20;
    if(guliYaxis>=400){
        guliYaxis=0;
        guliX=movee;
    }
}
int main(int argc, char** argv) {
    READ;
    cin>>myhighscore;
//    cout<<myhighscore;
    highscore=myhighscore;
    score_val=0;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1100, 800);
	glutCreateWindow("ABCD");
//    if(PlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\C.wav"), NULL, SND_ASYNC))
//    {
//        cout<<"yo"<<endl;
//    }
//    else
//        cout<<"NO"<<endl;
	glutDisplayFunc(drawScene);
	glutSpecialFunc(specialKeys);
	glutKeyboardFunc(keyboard);
	glutTimerFunc(100,update,0);
    glutMouseFunc(mouse);
	glutPassiveMotionFunc(mouseMotion);
	glutMainLoop();
	return 0;
}
