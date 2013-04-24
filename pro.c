#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include "dda.c"
#include "md.c"
#include "sem12.c"
#include "sem14.c"
#include "sem34.c"
#include "sem23.c"
#include "q1.c"
#include "q5.c"
#include "ell.c"
#include "cir.c"
void aaa(float x,float y,float h,float w);
void bbb(float x,float y,float h,float w);
void ccc(float x,float y,float h,float w);
void ddd(float x,float y,float h,float w);
void eee(float x,float y,float h,float w);
void fff(float x,float y,float h,float w);
void ggg(float x,float y,float h,float w);
void hhh(float x,float y,float h,float w);
void iii(float x,float y,float h,float w);
void jjj(float x,float y,float h,float w);
void kkk(float x,float y,float h,float w);
void lll(float x,float y,float h,float w);
void mmm(float x,float y,float h,float w);
void nnn(float x,float y,float h,float w);
void ooo(float x,float y,float h,float w);
void ppp(float x,float y,float h,float w);
void qqq(float x,float y,float h,float w);
void rrr(float x,float y,float h,float w);
void sss(float x,float y,float h,float w);
void ttt(float x,float y,float h,float w);
void uuu(float x,float y,float h,float w);
void vvv(float x,float y,float h,float w);
void www(float x,float y,float h,float w);
void xxx(float x,float y,float h,float w);
void yyy(float x,float y,float h,float w);
void zzz(float x,float y,float h,float w);
void n1(float x,float y,float h,float w);
void n2(float x,float y,float h,float w);
void n3(float x,float y,float h,float w);
void n4(float x,float y,float h,float w);
void n5(float x,float y,float h,float w);
void n6(float x,float y,float h,float w);
void n7(float x,float y,float h,float w);
void n8(float x,float y,float h,float w);
void n9(float x,float y,float h,float w);
void n0(float x,float y,float h,float w);
void fs(float x,float y);

float s=40;
float sp=10;
float xnxt;
float ynxt;

 float w1,w2,w3,w4,w5,w6,w7,w8,w9,w0,h;
 float wa,wb,wc,wd,we,wf,wg,wh,wi,wj,wk,wl,wm;
 float wn,wo,wp,wq,wr,ws,wt,wu,wv,ww,wx,wy,wz;


void score()
{
 sss(xnxt,ynxt,h,ws);
ynxt-=3*s/2;
xnxt-=(ws+sp);
 ccc(xnxt,ynxt,h,ws);
ynxt-=3*s/2;
xnxt-=(ws+sp);
 ooo(xnxt,ynxt,h,ws);
ynxt-=3*s/2;
xnxt-=(ws+sp);
 rrr(xnxt,ynxt,h,ws);
ynxt-=3*s/2;
xnxt-=(ws+sp);
 eee(xnxt,ynxt,h,ws);
ynxt-=5*s/2;
xnxt-=(ws+sp);
}


void dispscore()
{
s=30;
 xnxt=400-45;
ynxt=400-60;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1
glColor3f(0,0,0);
glPointSize(2.0);
 score();
glFlush();
}

void sctensdigit(int a) //ten's place
{
 s=30;
 xnxt=400-45;
 ynxt=100;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1
glColor3f(0,0,0);
glPointSize(2.0);
switch(a)
{
case 0:n0(xnxt,ynxt,h,w0);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 1:n1(xnxt,ynxt,h,w1);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 2: n2(xnxt,ynxt,h,w2);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 3: n3(xnxt,ynxt,h,w3);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 4: n4(xnxt,ynxt,h,w4);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 5: n5(xnxt,ynxt,h,w5);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 6: n6(xnxt,ynxt,h,w6);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 7: n7(xnxt,ynxt,h,w7);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 8: n8(xnxt,ynxt,h,w8);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 9: n9(xnxt,ynxt,h,w9);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

default: break;
}
glFlush();
return ;
}

void scunitdigit(int b)//unit digit
{
 s=30;
 xnxt=400-45;
 ynxt=50;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1
 glColor3f(0,0,0);
 glPointSize(2.0);
 switch(b)
 {
 case 0:n0(xnxt,ynxt,h,w0);
 xnxt-=(w1+sp);
 ynxt-=3*s/2;
 break;

 case 1:n1(xnxt,ynxt,h,w1);
 xnxt-=(w1+sp);
 ynxt-=3*s/2;
 break;

case 2: n2(xnxt,ynxt,h,w2);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 3: n3(xnxt,ynxt,h,w3);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 4: n4(xnxt,ynxt,h,w4);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 5: n5(xnxt,ynxt,h,w5);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 6: n6(xnxt,ynxt,h,w6);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 7: n7(xnxt,ynxt,h,w7);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 8: n8(xnxt,ynxt,h,w8);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

case 9: n9(xnxt,ynxt,h,w9);
xnxt-=(w1+sp);
ynxt-=3*s/2;
break;

default: break;
}
glFlush();
ynxt+=3*s/2;
return ;
}

//For The Cover Page 

void computer()
{
 ccc(xnxt,ynxt,h,wc);
 ooo(xnxt,ynxt,h,wo);
 mmm(xnxt,ynxt,h,wm);
 ppp(xnxt,ynxt,h,wp);
 uuu(xnxt,ynxt,h,wu);
 ttt(xnxt,ynxt,h,wt);
 eee(xnxt,ynxt,h,we);
 rrr(xnxt,ynxt,h,wr);
}

void graphics()
{
 ggg(xnxt,ynxt,h,wg);
 rrr(xnxt,ynxt,h,wr);
 aaa(xnxt,ynxt,h,wa);
 ppp(xnxt,ynxt,h,wp);
 hhh(xnxt,ynxt,h,wh);
 iii(xnxt,ynxt,h,wi);
 ccc(xnxt,ynxt,h,wc);
 sss(xnxt,ynxt,h,ws);
}

void mini()
{
 mmm(xnxt,ynxt,h,wm);
 iii(xnxt,ynxt,h,wi);
 nnn(xnxt,ynxt,h,wn);
 iii(xnxt,ynxt,h,wi);
}

void project()
{
 ppp(xnxt,ynxt,h,wp);
 rrr(xnxt,ynxt,h,wr);
 ooo(xnxt,ynxt,h,wo);
 jjj(xnxt,ynxt,h,wj);
 eee(xnxt,ynxt,h,we);
 ccc(xnxt,ynxt,h,wc);
 ttt(xnxt,ynxt,h,wt);
}

void balloon1()
{
 bbb(xnxt,ynxt,h,wb);
 aaa(xnxt,ynxt,h,wa);
 lll(xnxt,ynxt,h,wl);
 lll(xnxt,ynxt,h,wl);
 ooo(xnxt,ynxt,h,wo);
 ooo(xnxt,ynxt,h,wo);
 nnn(xnxt,ynxt,h,wn);
}

void shooting()
{
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 ooo(xnxt,ynxt,h,wo);
 ooo(xnxt,ynxt,h,wo);
 ttt(xnxt,ynxt,h,wt);
 iii(xnxt,ynxt,h,wi);
 nnn(xnxt,ynxt,h,wn);
 ggg(xnxt,ynxt,h,wg);
}

void by()
{
 bbb(xnxt,ynxt,h,wb);
 yyy(xnxt,ynxt,h,wy);
}

void arahant()
{
 aaa(xnxt,ynxt,h,wa);
 rrr(xnxt,ynxt,h,wr);
 aaa(xnxt,ynxt,h,wa);
 hhh(xnxt,ynxt,h,wh);
 aaa(xnxt,ynxt,h,wa);
 nnn(xnxt,ynxt,h,wn);
 ttt(xnxt,ynxt,h,wt);
 xnxt+=s/2;
 aaa(xnxt,ynxt,h,wa);
 xnxt+=s/2;
 n1(xnxt,ynxt,h,w1);
 n1(xnxt,ynxt,h,w1);
 iii(xnxt,ynxt,h,wi);
 ttt(xnxt,ynxt,h,wt);
 n1(xnxt,ynxt,h,w1);
 n0(xnxt,ynxt,h,w0);
}

void ashrith()
{
 aaa(xnxt,ynxt,h,wa);
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 rrr(xnxt,ynxt,h,wr);
 iii(xnxt,ynxt,h,wi);
 ttt(xnxt,ynxt,h,wt);
 hhh(xnxt,ynxt,h,wh);
 xnxt+=s/2;
 hhh(xnxt,ynxt,h,wh);
 xnxt+=s/2;
 ccc(xnxt,ynxt,h,wc);
 xnxt+=s/2;
 n1(xnxt,ynxt,h,w1);
 n1(xnxt,ynxt,h,w1);
 iii(xnxt,ynxt,h,wi);
 ttt(xnxt,ynxt,h,wt);
 n1(xnxt,ynxt,h,w1);
 n1(xnxt,ynxt,h,w1);
}

void dhanush()
{
 ddd(xnxt,ynxt,h,wd);
 hhh(xnxt,ynxt,h,wh);
 aaa(xnxt,ynxt,h,wa);
 nnn(xnxt,ynxt,h,wn);
 uuu(xnxt,ynxt,h,wu);
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 xnxt+=s/2;
 aaa(xnxt,ynxt,h,wa);
 xnxt+=s/2;
 n1(xnxt,ynxt,h,w1);
 n1(xnxt,ynxt,h,w1);
 iii(xnxt,ynxt,h,wi);
 ttt(xnxt,ynxt,h,wt);
 n1(xnxt,ynxt,h,w1);
 n8(xnxt,ynxt,h,w8);
}

void harsha()
{
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 rrr(xnxt,ynxt,h,wr);
 eee(xnxt,ynxt,h,we);
 eee(xnxt,ynxt,h,we);
 hhh(xnxt,ynxt,h,wh);
 aaa(xnxt,ynxt,h,wa);
 rrr(xnxt,ynxt,h,wr);
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 aaa(xnxt,ynxt,h,wa);
 xnxt+=s/2;
 n1(xnxt,ynxt,h,w1);
 n1(xnxt,ynxt,h,w1);
 iii(xnxt,ynxt,h,wi);
 ttt(xnxt,ynxt,h,wt);
 n8(xnxt,ynxt,h,w8);
 n8(xnxt,ynxt,h,w8);
}

void shreeman()
{
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 rrr(xnxt,ynxt,h,wr);
 eee(xnxt,ynxt,h,we);
 eee(xnxt,ynxt,h,we);
 mmm(xnxt,ynxt,h,wm);
 aaa(xnxt,ynxt,h,wa);
 nnn(xnxt,ynxt,h,wn);
 xnxt+=s/2;
 n1(xnxt,ynxt,h,w1);
 n1(xnxt,ynxt,h,w1);
 iii(xnxt,ynxt,h,wi);
 ttt(xnxt,ynxt,h,wt);
 n8(xnxt,ynxt,h,w8);
 n9(xnxt,ynxt,h,w9);
}

void guidance()
{
 ggg(xnxt,ynxt,h,wg);
 uuu(xnxt,ynxt,h,wu);
 iii(xnxt,ynxt,h,wi);
 ddd(xnxt,ynxt,h,wd);
 aaa(xnxt,ynxt,h,wa);
 nnn(xnxt,ynxt,h,wn);
 ccc(xnxt,ynxt,h,wc);
 eee(xnxt,ynxt,h,we);
}

void sir()
{
 mmm(xnxt,ynxt,h,wm);
 rrr(xnxt,ynxt,h,wr);
 fs(xnxt,ynxt);
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 rrr(xnxt,ynxt,h,wr);
 iii(xnxt,ynxt,h,wi);
 ddd(xnxt,ynxt,h,wd);
 hhh(xnxt,ynxt,h,wh);
 aaa(xnxt,ynxt,h,wa);
 rrr(xnxt,ynxt,h,wr);
}

void madam()
{
 mmm(xnxt,ynxt,h,wm);
 rrr(xnxt,ynxt,h,wr);
 sss(xnxt,ynxt,h,ws);
 fs(xnxt,ynxt);
 ppp(xnxt,ynxt,h,wp);
 uuu(xnxt,ynxt,h,wu);
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 ppp(xnxt,ynxt,h,wp);
 aaa(xnxt,ynxt,h,wa);
 lll(xnxt,ynxt,h,wl);
 aaa(xnxt,ynxt,h,wa);
 ttt(xnxt,ynxt,h,wt);
 hhh(xnxt,ynxt,h,wh);
 aaa(xnxt,ynxt,h,wa);


}
void how()
{
 hhh(xnxt,ynxt,h,wh);
 ooo(xnxt,ynxt,h,wo);
 www(xnxt,ynxt,h,ww);
 xnxt+=s/2;
 ttt(xnxt,ynxt,h,wt);
 ooo(xnxt,ynxt,h,wo);
 xnxt+=s/2;
 ppp(xnxt,ynxt,h,wp);
 lll(xnxt,ynxt,h,wl);
 aaa(xnxt,ynxt,h,wa);
 yyy(xnxt,ynxt,h,wy);
}

void first()
{
 n1(xnxt,ynxt,h,w1);
 fs(xnxt,ynxt);
xnxt+=s/2;
 ppp(xnxt,ynxt,h,wp);
 rrr(xnxt,ynxt,h,wr);
 eee(xnxt,ynxt,h,we);
 sss(xnxt,ynxt,h,ws);
 sss(xnxt,ynxt,h,ws);
xnxt+=s/2;
 www(xnxt,ynxt,3*h/4,3*ww/4);
xnxt+=s/2;
 ttt(xnxt,ynxt,h,wt);
 ooo(xnxt,ynxt,h,wo);
xnxt+=s/2;
 mmm(xnxt,ynxt,h,wm);
 ooo(xnxt,ynxt,h,wo);
 vvv(xnxt,ynxt,h,wv);
 eee(xnxt,ynxt,h,we);
xnxt+=s/2;
 ttt(xnxt,ynxt,h,wt);
 hhh(xnxt,ynxt,h,wh);
 eee(xnxt,ynxt,h,we);
xnxt+=s/2;
 bbb(xnxt,ynxt,h,wb);
 ooo(xnxt,ynxt,h,wo);
 www(xnxt,ynxt,h,ww);
xnxt+=s/2;
 uuu(xnxt,ynxt,h,wu);
 ppp(xnxt,ynxt,h,wp);
}

second()
{
 n2(xnxt,ynxt,h,w2);
 fs(xnxt,ynxt);
xnxt+=s/2;
 ppp(xnxt,ynxt,h,wp);
 rrr(xnxt,ynxt,h,wr);
 eee(xnxt,ynxt,h,we);
 sss(xnxt,ynxt,h,ws);
 sss(xnxt,ynxt,h,ws);
xnxt+=s/2;
 sss(xnxt,ynxt,3*h/4,3*ws/4);
xnxt+=s/2;
 ttt(xnxt,ynxt,h,wt);
 ooo(xnxt,ynxt,h,wo);
xnxt+=s/2;
 mmm(xnxt,ynxt,h,wm);
 ooo(xnxt,ynxt,h,wo);
 vvv(xnxt,ynxt,h,wv);
 eee(xnxt,ynxt,h,we);
xnxt+=s/2;
 ttt(xnxt,ynxt,h,wt);
 hhh(xnxt,ynxt,h,wh);
 eee(xnxt,ynxt,h,we);
xnxt+=s/2;
 bbb(xnxt,ynxt,h,wb);
 ooo(xnxt,ynxt,h,wo);
 www(xnxt,ynxt,h,ww);
xnxt+=s/2;
 ddd(xnxt,ynxt,h,wd);
 ooo(xnxt,ynxt,h,wo);
 www(xnxt,ynxt,h,ww);
 nnn(xnxt,ynxt,h,wn);
}

third()
{
 n3(xnxt,ynxt,h,w3);
 fs(xnxt,ynxt);
xnxt+=s/2;
 ppp(xnxt,ynxt,h,wp);
 rrr(xnxt,ynxt,h,wr);
 eee(xnxt,ynxt,h,we);
 sss(xnxt,ynxt,h,ws);
 sss(xnxt,ynxt,h,ws);
xnxt+=s/2;
 eee(xnxt,ynxt,3*h/4,3*we/4);
 nnn(xnxt,ynxt,3*h/4,3*wn/4);
 ttt(xnxt,ynxt,3*h/4,3*wt/4);
 eee(xnxt,ynxt,3*h/4,3*we/4);
 rrr(xnxt,ynxt,3*h/4,3*wr/4);
xnxt+=s/2;
 ttt(xnxt,ynxt,h,wt);
 ooo(xnxt,ynxt,h,wo);
xnxt+=s/2;
 sss(xnxt,ynxt,h,ws);
 hhh(xnxt,ynxt,h,wh);
 ooo(xnxt,ynxt,h,wo);
 ooo(xnxt,ynxt,h,wo);
 ttt(xnxt,ynxt,h,wt);
xnxt+=s/2;
 ttt(xnxt,ynxt,h,wt);
 hhh(xnxt,ynxt,h,wh);
 eee(xnxt,ynxt,h,we);
xnxt+=s/2;
 aaa(xnxt,ynxt,h,wa);
 rrr(xnxt,ynxt,h,wr);
 rrr(xnxt,ynxt,h,wr);
 ooo(xnxt,ynxt,h,wo);
 www(xnxt,ynxt,h,ww);
}

fourth()
{
 n4(xnxt,ynxt,h,w4);
 fs(xnxt,ynxt);
xnxt+=s/2;
 ggg(xnxt,ynxt,h,wg);
 aaa(xnxt,ynxt,h,wa);
 mmm(xnxt,ynxt,h,wm);
 eee(xnxt,ynxt,h,we);
xnxt+=s/2;
 ooo(xnxt,ynxt,h,wo);
 vvv(xnxt,ynxt,h,wv);
 eee(xnxt,ynxt,h,we);
 rrr(xnxt,ynxt,h,wr);
xnxt+=s/2;
 iii(xnxt,ynxt,h,wi);
 fff(xnxt,ynxt,h,wf);
xnxt+=s/2;
 yyy(xnxt,ynxt,h,wy);
 ooo(xnxt,ynxt,h,wo);
 uuu(xnxt,ynxt,h,wu);
xnxt+=s/2;
 mmm(xnxt,ynxt,h,wm);
 iii(xnxt,ynxt,h,wi);
 sss(xnxt,ynxt,h,ws);
 sss(xnxt,ynxt,h,ws);
xnxt+=s/2;
 n5(xnxt,ynxt,h,w5);
xnxt+=s/2;
 bbb(xnxt,ynxt,h,wb);
 aaa(xnxt,ynxt,h,wa);
 lll(xnxt,ynxt,h,wl);
 lll(xnxt,ynxt,h,wl);
 ooo(xnxt,ynxt,h,wo);
 ooo(xnxt,ynxt,h,wo);
 nnn(xnxt,ynxt,h,wn);
 sss(xnxt,ynxt,h,ws);
  
}

void game()
{
 ggg(xnxt,ynxt,h,wg);
 aaa(xnxt,ynxt,h,wa);
 mmm(xnxt,ynxt,h,wm);
 eee(xnxt,ynxt,h,we);
ynxt-=3*s/2;xnxt-=3*s;
 ooo(xnxt,ynxt,h,wo);
 vvv(xnxt,ynxt,h,wv);
 eee(xnxt,ynxt,h,we);
 rrr(xnxt,ynxt,h,wr);
}


void cover()
{
 s=18;sp=6;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1

///////////////////

 xnxt=-52;ynxt=370;
 computer();
 xnxt+=s/2;
 graphics();

 xnxt=0;ynxt-=2*s-4;
 mini();
 xnxt+=s/2;
 project();

 /////////////////

 s=28;sp=8;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1

///////////////////
 glPointSize(3.0);
 xnxt=-100;ynxt-=2*s;
 balloon1();
 xnxt+=s/2;
 shooting();

////////////////

 s=16;sp=4;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1

//////////////
 glPointSize(2.0);
 xnxt=320;ynxt-=4*s;
 glPointSize(1.5);
 by();

////////////////

 s=16;sp=6;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1

 xnxt=170;ynxt-=3*s;
 arahant();

 xnxt=160;ynxt-=2*s;
 ashrith();

 xnxt=170;ynxt-=2*s;
 dhanush();

 xnxt=138;ynxt-=2*s;
 harsha();
 
 xnxt=184;ynxt-=2*s;
 shreeman();
///////////////////////////
 
 xnxt=-190;ynxt=124;
 guidance();

 xnxt=-190;ynxt-=3*s;
 sir();

 xnxt=-190;ynxt-=2*s;
 madam();
}


void instrn()
{
 s=18;sp=6;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1

 xnxt=-190;ynxt=320;
 how();
////////////////

 s=18;sp=6;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1
 
 xnxt=-190;ynxt-=4*s;
 first();

 xnxt=-190;ynxt-=2*s;
 second();

 xnxt=-190;ynxt-=2*s;
 third();

 xnxt=-190;ynxt-=2*s;
 fourth();

}

void coverpage()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glPointSize(2.0);
 cover(); 
glFlush();
}

void end()
{
 s=60;sp=20;
 w9=w8=w4=w6=w5=w2=w3=w7=w0=wk=we=wf=wj=wl=wp=wr=ws=s/2;//1/2
 w1=wi=s/4;
 wg=wc=wh=wn=wb=wu=wt=wv=wx=wy=2*s/3;//2/3
 ww=wm=wa=wd=wo=wq=wz=3*s/4;//3/4
 h=s;//1

 xnxt=-60;ynxt=200;
 game();
}

void theend()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glPointSize(8.0);
 end();
 glFlush();
}

void aaa(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x+w/2,y+h);
 mid(x+w/2,y+h,x+w,y);
 mid(x+w/4,y+h/2,x+3*w/4,y+h/2);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void bbb(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y,x+w/2,y);
 mid(x,y+h/2,x+w/2,y+h/2);
 mid(x,y+h,x+w/2,y+h);
 sem14(x+w/2,y+3*h/4,h/4);
 sem14(x+w/2,y+h/4,h/4);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void ccc(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 sem23(x+h/2,y+h/2,h/2);
 mid(x+h/2,y,x+w,y);
 mid(x+h/2,y+h,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void ddd(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y,x+h/4,y);
 mid(x,y+h,x+h/4,y+h);
 sem14(x+h/4,y+h/2,h/2);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void eee(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y,x+w,y);
 mid(x,y+h/2,x+w-3,y+h/2);
 mid(x,y+h,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void fff(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y+h/2,x+w-2,y+h/2);
 mid(x,y+h,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void ggg(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 sem23(x+h/2,y+h/2,h/2);
 mid(x+h/2,y,x+w,y);
 mid(x+h/2,y+h,x+w,y+h);
 mid(x+w,y,x+w,y+h/3+2);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void hhh(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x+w,y,x+w,y+h);
 mid(x,y+h/2,x+w,y+h/2);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void iii(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x+w,y);
 mid(x+w/2,y,x+w/2,y+h);
 mid(x,y+h,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void jjj(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 sem34(x+w/2,y+h/4,h/4);
 glVertex2f(x+w/2,y);
 mid(x+w,y+h/4,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void kkk(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x+w/4,y+2*h/3,x+w,y);
 mid(x,y+h/2,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void lll(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y,x+w,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void mmm(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y+h,x+w/2,y+h/2);
 mid(x+w/2,y+h/2,x+w,y+h);
 mid(x+w,y+h,x+w,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void nnn(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y+h,x+w,y);
 mid(x+w,y,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void ooo(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 ell(x+w/2,y+h/2,w/2,h/2);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void ppp(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y+h/2,x+h/4,y+h/2);
 mid(x,y+h,x+h/4,y+h);
 sem14(x+h/4,y+3*h/4,h/4);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void qqq(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 ell(x+w/2,y+h/2,w/2,h/2);
 mid(x+w/2,y+h/3,x+w,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void rrr(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y+h/2,x+h/4,y+h/2);
 mid(x,y+h,x+h/4,y+h);
 sem14(x+h/4,y+3*h/4,h/4);
 mid(x+h/8,y+h/2,x+w,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void sss(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 q1(x+3*w/4,y+7*h/8,h/8);
 mid(x+w/2,y+h,x+3*w/4,y+h);
 sem23(x+w/2,y+3*h/4,h/4);
 sem14(x+w/2,y+h/4,h/4);
 mid(x+w/4,y,x+w/2,y);
 q5(x+w/4,y+h/8,h/8);
 glVertex2f(x,y+h/16);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void ttt(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y+h,x+w,y+h);
 mid(x+w/2,y,x+w/2,y+h-1);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void uuu(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y+h,x,y+h/3);
 mid(x+w,y+h,x+w,y+h/3);
 sem34(x+w/2,y+h/3,w/2);
 glVertex2f(x+w/2,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void vvv(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y+h,x+w/2,y);
 mid(x+w/2,y,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void www(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x,y+h);
 mid(x,y,x+w/2,y+h/2);
 mid(x+w/2,y+h/2,x+w,y);
 mid(x+w,y+h,x+w,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void xxx(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y,x+w,y+h);
 mid(x,y+h,x+w,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void yyy(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y+h,x+w/2,y+h/2);
 mid(x+w/2,y+h/2,x+w,y+h);
 mid(x+w/2,y+h/2,x+w/2,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void zzz(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y+h,x+w,y+h);
 mid(x,y,x+w,y+h);
 mid(x,y,x+w,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n1(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x+w,y,x+w,y+h);
 mid(x,y+3*h/4,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n2(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 sem12(x+w/2,y+3*h/4,w/2);
 mid(x,y,x+w,y+3*h/4);
 mid(x,y,x+w,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n3(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y+h,x+w,y+h);
 mid(x+w,y+h,x+w/3,y+2*h/3);
 sem14(x+w/3,y+h/3,h/3);
 q5(x+w/3,y+h/3,h/3);
 glVertex2f(x+w/3,y);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n4(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x+w,y,x+w,y+h);
 mid(x,y+h/4,x+w,y+h);
 mid(x,y+h/4,x+w,y+h/4);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n5(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y+h,x+w,y+h);
 mid(x,y+h,x,y+2*h/3+1);
 mid(x,y,x+w/3+1,y);
 mid(x,y+2*h/3,x+w/3+1,y+2*h/3);
 sem14(x+w/3,y+h/3,h/3);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n6(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 sem12(x+w/2,y+3*h/4,h/4);
 cir(x+w/2,y+h/4,h/4);
 mid(x,y+h/4,x,y+3*h/4);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n7(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 mid(x,y+h,x+w,y+h);
 mid(x+w/4,y,x+w,y+h);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n8(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 cir(x+w/2,y+3*h/4,h/4);
 cir(x+w/2,y+h/4,h/4);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n9(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 cir(x+w/2,y+3*h/4,h/4);
 sem34(x+w/2,y+h/4,h/4);
 mid(x+w,y+h/4,x+w,y+3*h/4);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void n0(float x,float y,float h,float w)
{
 glBegin(GL_POINTS);
 ell(x+w/2,y+h/2,w/2,h/2);
 glEnd();
 xnxt+=w;
 xnxt+=sp;
}

void fs(float x,float y)
{
 glBegin(GL_POINTS);
 glVertex2f(x,y);
 xnxt+=2;
 xnxt+=sp; 
 glEnd();
}
