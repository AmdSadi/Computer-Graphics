#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
#include<Windows.h>
#include<MMSystem.h>
void mysound()
{
    int l=0,r=2;
    if(rand_num>=0 && rand_num<=2)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\A.wav"), SND_ASYNC);
    }
    else if(rand_num>=3 && rand_num<=5)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\B.wav"), SND_ASYNC);
    }else if(rand_num>=6 && rand_num<=8)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\C.wav"), SND_ASYNC);
    }else if(rand_num>=9 && rand_num<=11)
    {

        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\D.wav"), SND_ASYNC);
    }else if(rand_num>=12 && rand_num<=14)
    {

        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\E.wav"), SND_ASYNC);
    }else if(rand_num>=15 && rand_num<=17)
    {

        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\F.wav"), SND_ASYNC);
    }else if(rand_num>=18 && rand_num<=20)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\G.wav"), SND_ASYNC);
    }else if(rand_num>=21 && rand_num<=23)
    {

        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\H.wav"), SND_ASYNC);
    }else if(rand_num>=24 && rand_num<=26)
    {

        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\I.wav"), SND_ASYNC);
    }else if(rand_num>=27 && rand_num<=29)
    {

        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\J.wav"), SND_ASYNC);
    }else if(rand_num>=30 && rand_num<=32)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\K.wav"), SND_ASYNC);
    }else if(rand_num>=33 && rand_num<=35)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\L.wav"), SND_ASYNC);
    }else if(rand_num>=36 && rand_num<=38)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\M.wav"), SND_ASYNC);
    }else if(rand_num>=39 && rand_num<=41)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\N.wav"), SND_ASYNC);
    }else if(rand_num>=42 && rand_num<=44)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\O.wav"), SND_ASYNC);
    }else if(rand_num>=45 && rand_num<=47)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\P.wav"), SND_ASYNC);
    }else if(rand_num>=48 && rand_num<=50)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\Q.wav"), SND_ASYNC);
    }else if(rand_num>=51 && rand_num<=53)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\R.wav"), SND_ASYNC);
    }else if(rand_num>=54 && rand_num<=56)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\S.wav"), SND_ASYNC);
    }else if(rand_num>=57 && rand_num<=59)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\T.wav"), SND_ASYNC);
    }else if(rand_num>=60 && rand_num<=62)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\U.wav"), SND_ASYNC);
    }else if(rand_num>=63 && rand_num<=65)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\V.wav"), SND_ASYNC);
    }else if(rand_num>=66 && rand_num<=68)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\W.wav"), SND_ASYNC);
    }else if(rand_num>=69 && rand_num<=71)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\X.wav"), SND_ASYNC);
    }else if(rand_num>=72 && rand_num<=74)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\Y.wav"), SND_ASYNC);
    }else if(rand_num>=75 && rand_num<=77)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\Z.wav"), SND_ASYNC);
    }else if(rand_num>=78 && rand_num<=79)
    {
        sndPlaySound(TEXT("C:\\Users\\ASUS\\Desktop\\Sound\\box.wav"), SND_ASYNC);
    }
}
