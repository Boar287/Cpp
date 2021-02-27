//---------------------------------------------------------------------------


#pragma hdrstop
#include "Child.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Rectanglee rec(100,150,300,210);
CarBody carb(80,105,200,150);
TForm5 *Form5;


//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}


//---------------------------------------------------------------------------

void __fastcall TForm5::FormCreate(TObject *Sender)
{
Timer1->Enabled=false;
rec.Show(Canvas);
carb.Show(Canvas);

}
//---------------------------------------------------------------------------

void __fastcall TForm5::Timer1Timer(TObject *Sender)
{
rec.Move(Canvas);
carb.Move(Canvas);

}
//---------------------------------------------------------------------------

void __fastcall TForm5::GoClick(TObject *Sender)
{
Timer1->Enabled=true;
if(carb.GetY()>70)
Timer2->Enabled=true;
else
Timer3->Enabled=true;

BodyUp->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::StopClick(TObject *Sender)
{
  Timer1->Enabled=false;
  Timer2->Enabled=false;
  Timer3->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::GasClick(TObject *Sender)
{

Timer1->Interval-=50;
if(Timer1->Interval<=0)
Timer1->Interval=25;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BrakeClick(TObject *Sender)
{
  Timer1->Interval+=50;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Timer2Timer(TObject *Sender)
{
if(carb.GetY()>70)
{

carb.BodyUpMove(Canvas,5);
}
else
{
	Timer2->Enabled=false;
	Timer3->Enabled=true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BodyUpClick(TObject *Sender)
{

Timer2->Enabled=true;


}
//---------------------------------------------------------------------------
void __fastcall TForm5::Timer3Timer(TObject *Sender)
{
if(carb.GetY()<105)
{

carb.BodyUpMove(Canvas,-5);
}
else
{
	Timer2->Enabled=true;
	Timer3->Enabled=false;
}
}
