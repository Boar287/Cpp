//---------------------------------------------------------------------------

#pragma hdrstop

#include "Circus.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Circus::Circus(){}

Circus::Circus(int x1,int y1,int x2,int y2)
{
	a=abs(x1-x2);
	b=abs(y1-y2);
	this->x1=x1;
	this->x2=x2;
	this->y1=y1;
	this->y2=y2;
}

void Circus::CalculateRadius()
	{
	this->R=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
	}

void Circus::Show(TCanvas *Canvas,TImage *Image1)
	{
	CalculateRadius();
	Image1->Canvas->Ellipse(x1,y1,x2,y2);
	}

void Circus::Hide(TCanvas* Canvas, TImage *Image1)
	 {
		 Canvas->Pen->Color=clWhite;
		 Image1->Canvas->Ellipse(x1,y1,x2,y2);
		 Canvas->Pen->Color=clBlue;
	 }

double Circus::CalculateS()
	{
	CalculateRadius();
	S=3.14*R*R/10000;
	return S;
	}

double Circus::CalculateP()
	{
    CalculateRadius();
	P=2*3.14*R/100;
	return P;
	}

int Circus::CalculateXC()
	 {
		 this->xc=(x1+x2)/2;
		 return xc;
	 }

int Circus::CalculateYC()
	 {
		 this->yc=(y1+y2)/2;
		 return yc;
	 }

void Circus::NewMassCenter(int xc, int yc)
	 {
	 this->xc=xc;
	 this->yc=yc;
	 this->x1=xc-a/2;
	 this->x2=xc+a/2;
	 this->y1=yc-b/2;
	 this->y2=yc+b/2;
	 }

Circus&Circus::operator=(const Circus&other)
	 {
		 this->x1=other.x1;
		 this->x2=other.x2;
		 this->y1=other.y1;
		 this->y2=other.y2;
		 this->a=other.a;
		 this->b=other.b;
		 this->S=other.S;
		 this->P=other.P;
		 this->xc=other.xc;
		 this->yc=other.yc;
		 this->R=other.R;
		 return *this;
	 }

void Circus::NewANewB(int a, int b)
	{
		this->a=a;
		this->b=b;
	}
