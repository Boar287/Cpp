//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit7.h"
#include "Quadrilateral.h"
#include "Circus.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int x_1,y_1,x_2,y_2;
int xc, yc;
Quadrilateral Quad(0,0,0,0);
Circus Circ(0,0,0,0);
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormCreate(TObject *Sender)
{
Image1->Canvas->Pen->Color=clBlue;
Temp->Hide();
Temp2->Hide();
}
//---------------------------------------------------------------------------




void __fastcall TForm7::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
x_1=X;
y_1=Y;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
x_2=X;
y_2=Y;

Circus Ctemp(x_1,y_1,x_2,y_2);
Quadrilateral Qtemp(x_1,y_1,x_2,y_2);
Circ=Ctemp;
Quad=Qtemp;
switch(Figures->ItemIndex)
{
	case 1:
	NewX->Enabled=true;
	NewY->Enabled=true;
	Ctemp.Show(Canvas, Image1);
	S->Caption=FloatToStrF(Circ.CalculateS(),ffFixed,10,2);
	P->Caption=FloatToStrF(Circ.CalculateP(),ffFixed,10,2);
	CenterX->Caption=IntToStr(Circ.CalculateXC());
	CenterY->Caption=IntToStr(Circ.CalculateYC());
	break;
	case 0:
	NewX->Enabled=true;
	NewY->Enabled=true;
	Qtemp.Show(Canvas, Image1);
	S->Caption=FloatToStrF(Quad.CalculateS(),ffFixed,10,2);
	P->Caption=FloatToStrF(Quad.CalculateP(),ffFixed,10,2);
	CenterX->Caption=IntToStr(Quad.CalculateXC());
	CenterY->Caption=IntToStr(Quad.CalculateYC());
	break;

}
//---------------------------------------------------------------------------
}
void __fastcall TForm7::ClearClick(TObject *Sender)
{
Image1->Canvas->FillRect(Rect(0,0,Image1->Width,Image1->Height));
S->Caption="0.0";
P->Caption="0.0";
CenterX->Caption="0.0";
CenterY->Caption="0.0";
NewX->Text="0.0";
NewY->Text="0.0";
NewX->Enabled=false;
NewY->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm7::ChangeClick(TObject *Sender)
{
xc=StrToInt(NewX->Text);
yc=StrToInt(NewY->Text);
Circus Ctemp(x_1,y_1,x_2,y_2);
Quadrilateral Qtemp(x_1,y_1,x_2,y_2);
Ctemp.NewMassCenter(xc,yc);
Qtemp.NewMassCenter(xc,yc);
Circ=Ctemp;
Quad=Qtemp;
Image1->Canvas->FillRect(Rect(0,0,Image1->Width,Image1->Height));
switch(Figures->ItemIndex)
{
case 1:
Circ.Show(Canvas, Image1);
CenterX->Caption=IntToStr(xc);
CenterY->Caption=IntToStr(yc);
break;
case 0:
Quad.Show(Canvas, Image1);
CenterX->Caption=IntToStr(xc);
CenterY->Caption=IntToStr(yc);
break;
}
}
//---------------------------------------------------------------------------



void __fastcall TForm7::ManualControlClick(TObject *Sender)
{
switch(Figures->ItemIndex)
{
case 0:
Temp->Show();
NewX->Enabled=true;
NewY->Enabled=true;
break;
case 1:
Temp2->Show();
NewX->Enabled=true;
NewY->Enabled=true;
break;
}
}

//---------------------------------------------------------------------------

void __fastcall TForm7::OKClick(TObject *Sender)
{
x_1=StrToInt(X1->Text);
x_2=StrToInt(X2->Text);
y_1=StrToInt(Y1->Text);
y_2=StrToInt(Y2->Text);
Quadrilateral Qtemp(x_1,y_1,x_2,y_2);
Quad=Qtemp;
Qtemp.Show(Canvas,Image1);
S->Caption=FloatToStrF(Quad.CalculateS(),ffFixed,10,2);
P->Caption=FloatToStrF(Quad.CalculateP(),ffFixed,10,2);
CenterX->Caption=IntToStr(Quad.CalculateXC());
CenterY->Caption=IntToStr(Quad.CalculateYC());
NewX->Text="0.0";
NewY->Text="0.0";
Temp->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::CloseClick(TObject *Sender)
{
Temp2->Hide();
NewX->Enabled=false;
NewY->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Close2Click(TObject *Sender)
{
Temp->Hide();
NewX->Enabled=false;
NewY->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::OK2Click(TObject *Sender)
{
x_1=StrToInt(XC->Text)-StrToInt(R1->Text)/2;
x_2=StrToInt(XC->Text)+StrToInt(R1->Text)/2;
y_1=StrToInt(YC->Text)-StrToInt(R2->Text)/2;
y_2=StrToInt(YC->Text)+StrToInt(R2->Text)/2;
Circ.NewANewB(StrToInt(R1->Text),StrToInt(R2->Text));
Circ.NewMassCenter(StrToInt(XC->Text),StrToInt(YC->Text));
Circ.Show(Canvas,Image1);
S->Caption=FloatToStrF(Circ.CalculateS(),ffFixed,10,2);
P->Caption=FloatToStrF(Circ.CalculateP(),ffFixed,10,2);
CenterX->Caption=IntToStr(Circ.CalculateXC());
CenterY->Caption=IntToStr(Circ.CalculateYC());
NewX->Text="0.0";
NewY->Text="0.0";
Temp2->Hide();
}
//---------------------------------------------------------------------------

