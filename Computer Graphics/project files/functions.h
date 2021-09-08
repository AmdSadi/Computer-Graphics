#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
using namespace std;
void drawA()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-20-cent),getY(30+hu+yaxis));
    glVertex2f(getX(20-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-20-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(20-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(0+hu+yaxis));
    glEnd();
    return;
}
void drawAleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-20-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-20-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glEnd();

}

void drawAright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-20-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-20-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glEnd();

}

void drawB()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(15+hu+yaxis));
    glVertex2f(getX(20-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-15+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(20-cent),getY(0+hu+yaxis));
    glEnd();

}

void drawBleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(0+hu+yaxis));
    glEnd();

}

void drawBright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(0+hu+yaxis));
    glEnd();

}

void drawC()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glEnd();
}
void drawCleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawCright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawD()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(15-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(15+hu+yaxis));
    glEnd();
}

void drawDleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(15-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(15+hu+yaxis));
    glEnd();
}
void drawDright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(15-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(15+hu+yaxis));
    glEnd();
}

void drawE()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(15-cent),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glEnd();
}

void drawEleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(15-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawEright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(15-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawF()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(15-cent),getY(0+hu+yaxis));
    glEnd();
}

void drawFleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(15-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}
void drawFright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(15-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}
void drawG()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glEnd();
}

void drawGleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawGright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glEnd();
    return;
}

void drawH()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(0+hu+yaxis));
    glEnd();
}

void drawHleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawHright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}
void drawI()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(0-cent),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-10-cent),getY(30+hu+yaxis));
    glVertex2f(getX(10-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-10-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(10-cent),getY(-30+hu+yaxis));
    glEnd();
}
void drawIleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-10-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-10-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}
void drawIright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-10-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-10-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawJ()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-5+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glEnd();
}

void drawJleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-5+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawJright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-5+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}
void drawK()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(10+hu+yaxis));
    glVertex2f(getX(10-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent),getY(10+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));

    glEnd();
}

void drawKleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(10+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));

    glEnd();
}

void drawKright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(10+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));

    glEnd();
}

void drawL()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));


    glEnd();
}

void drawLleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));

    glEnd();
}
void drawLright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));

    glEnd();
}


void drawM()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glEnd();
}

void drawMleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawMright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawN()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glEnd();
}

void drawNleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}
void drawNright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawO()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glEnd();
}

void drawOleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glEnd();
}
void drawOright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glEnd();
}

void drawP()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glEnd();
}

void drawPleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawPright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawQ()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glEnd();
}
void drawQleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawQright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawR()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(10+hu+yaxis));
    glVertex2f(getX(10-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent),getY(10+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glEnd();
}

void drawRleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(10+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glEnd();
}

void drawRright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(10+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-10+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glEnd();
}

void drawS()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glEnd();
}
void drawSleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawSright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}


void drawT()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(0-cent),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glEnd();
}

void drawTleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glEnd();
}

void drawTright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glEnd();
}

void drawU()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glEnd();
}

void drawUleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawUright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawV()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-15+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-15+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-15+hu+yaxis));
    glVertex2f(getX(0-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-15+hu+yaxis));
    glVertex2f(getX(0-cent),getY(-30+hu+yaxis));
    glEnd();
}

void drawVleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawVright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawW()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glEnd();
}
void drawWleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawWright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}

void drawX()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glEnd();
}

void drawXleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawXright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawY()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(15+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(15+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(15+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent),getY(15+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent),getY(-30+hu+yaxis));
    glEnd();
}

void drawYleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}
void drawYright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(15+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}


void drawZ()
{
    xMove=0;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent),getY(-30+hu+yaxis));
    glEnd();
}
void drawZleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}

void drawZright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(getX(-30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(-30+hu+yaxis));
    glEnd();
}


void drawBoxright()
{
    xMove=250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glEnd();
}

void drawBoxleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glEnd();
}


void drawStarleft()
{
    xMove=-250;
    xmax=30-150+xMove;
    xmin=-30-150+xMove;
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(getX(0-cent+xMove),getY(30+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(10-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(20-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(0-cent+xMove),getY(20+hu+yaxis));
    glVertex2f(getX(-20-cent+xMove),getY(-30+hu+yaxis));
    glVertex2f(getX(-10-cent+xMove),getY(-15+hu+yaxis));
    glVertex2f(getX(-30-cent+xMove),getY(0+hu+yaxis));
    glVertex2f(getX(-10-cent+xMove),getY(0+hu+yaxis));
    glEnd();
}









