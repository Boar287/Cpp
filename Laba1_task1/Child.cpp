//---------------------------------------------------------------------------

#pragma hdrstop

#include "Child.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void CarBody::Show(TCanvas*Canvas)
{
  		 Canvas->Pen->Color=clBlue;
		 Canvas->Rectangle(x1,y1,x2,y2);
}

void CarBody::Hide(TCanvas*Canvas)
{
 		Canvas->Pen->Color=clWhite;
		Canvas->Rectangle(x1,y1,x2,y2);
}

void CarBody::Return(TCanvas*Canvas)
	{
        BodyUpHide(Canvas);
		x1=80;
		x2=200;

	}

void CarBody::Move(TCanvas* Canvas)
	{
		if(x1>380)
		{
			Hide(Canvas);
			Return(Canvas);
		}
		 Hide(Canvas);
		 BodyUpHide(Canvas);
		 x1+=4; x2+=4;
         BodyUpShow(Canvas);
		 Show(Canvas);
	}

void CarBody::BodyUpHide(TCanvas* Canvas)
	{
		Canvas->Pen->Color=clWhite;
		Canvas->Rectangle(x1+30,y2,x1+40,150);
		Canvas->Rectangle(x1+100,y2,x1+110,150);
	}

void CarBody::BodyUpShow(TCanvas* Canvas)
	{
		Canvas->Pen->Color=clBlue;
		Canvas->Rectangle(x1+30,y2,x1+40,150);
		Canvas->Rectangle(x1+100,y2,x1+110,150);

	}

void CarBody::BodyUpMove(TCanvas* Canvas,int yn)
	{

		Hide(Canvas);
		BodyUpHide(Canvas);
		this->y2-=yn;
		this->y1-=yn;
		Show(Canvas);
		BodyUpShow(Canvas);
	}

int CarBody::GetY()
	{
		return y1;
	}