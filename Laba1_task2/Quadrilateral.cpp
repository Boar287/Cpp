//---------------------------------------------------------------------------

#pragma hdrstop

#include "Quadrilateral.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

	Quadrilateral::Quadrilateral(){}

	Quadrilateral::Quadrilateral(int x1,int y1,int x2,int y2)
	{
	a=abs(x1-x2);
	b=abs(y1-y2);
	this->x1=x1;
	this->x2=x2;
	this->y1=y1;
	this->y2=y2;
	}

	 void Quadrilateral::Show(TCanvas *Canvas,TImage *Image1)
	 {
		 Image1->Canvas->Rectangle(x1,y1,x2,y2);
	 }

	 void Quadrilateral::Hide(TCanvas* Canvas, TImage *Image1)
	 {
		 Canvas->Pen->Color=clWhite;
		 Image1->Canvas->Rectangle(x1,y1,x2,y2);
		 Canvas->Pen->Color=clBlue;
	 }

	 double Quadrilateral::CalculateS()
	 {
	 this->S=a*b/10000;
	 return S;
	 }

	 double Quadrilateral::CalculateP()
	 {
		 this->P=(a+b)*2/100;
		 return P;
	 }

	 int Quadrilateral::CalculateXC()
	 {
		 this->xc=(x1+x2)/2;
		 return xc;
	 }

	 void Quadrilateral::NewMassCenter(int xc, int yc)
	 {
	 this->xc=xc;
	 this->yc=yc;

	 this->x1=xc-a/2;
	 this->x2=xc+a/2;
	 this->y1=yc-b/2;
	 this->y2=yc+b/2;
	 }

	 int Quadrilateral::CalculateYC()
	 {
		 this->yc=(y1+y2)/2;
		 return yc;
	 }

	 Quadrilateral&Quadrilateral::operator=(const Quadrilateral&other)
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
		 return *this;
	 }
