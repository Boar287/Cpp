//---------------------------------------------------------------------------

#pragma hdrstop

#include "Parrent.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

	Rectanglee::Rectanglee(int x1,int y1,int x2, int y2)
	{
	this->x1=x1;
	this->x2=x2;
	this->y1=y1;
	this->y2=y2;
	}

	void Rectanglee::Show(TCanvas*Canvas)
	{
		 Canvas->Pen->Color=clBlue;
		 Canvas->Rectangle(x1,y1,x2,y2);
		 Canvas->Rectangle(x1+100,y1-70,x2,y1);
		 Canvas->Ellipse(x1+25,y2,x1+75,y2+50);
		 Canvas->Ellipse(x1+125,y2,x1+175,y2+50);
	}

	void Rectanglee::Hide(TCanvas*Canvas)
	{
		Canvas->Pen->Color=clWhite;
		Canvas->Rectangle(x1,y1,x2,y2);
		Canvas->Rectangle(x1+100,y1-70,x2,y1);
		Canvas->Ellipse(x1+25,y2,x1+75,y2+50);
		Canvas->Ellipse(x1+125,y2,x1+175,y2+50);
	}

	void Rectanglee::Return(TCanvas*Canvas)
	{
		x1=100;
		x2=300;
	}

	void Rectanglee::Move(TCanvas*Canvas)
	{
	if(x1>400)
		{
			Hide(Canvas);
			Return(Canvas);
		}
		 Hide(Canvas);

		 x1+=4; x2+=4;

		 Show(Canvas);
	}
