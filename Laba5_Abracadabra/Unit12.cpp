//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "TwoList.h"
#include "TwoList.cpp"
#include "Queue.cpp"
#include "Unit12.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int Index=-1;
TwoList<String>GoodLuck;
TForm12 *Form12;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm12::FormCreate(TObject *Sender)
{
	for(int i=0;i<Memo2->Lines->Count;i++)
	{
		GoodLuck.push_back(Memo2->Lines->Strings[i]);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm12::SeeAllClick(TObject *Sender)
{
Memo1->Lines->Clear();
String temp=Show->Text;
if(temp=="")
{
	ShowMessage("Wrong input data\nOnly numbers and \"All\" are avelaible");
	return;
}
	if(temp=="All")
	{
		for(int i=0;i<GoodLuck.GetSize();i++)
		{
			Memo1->Lines->Add(IntToStr(i+1)+")"+GoodLuck[i]);
		}
		Index=-1;
	return;
	}
	else if(temp!="All")
	{
	for(int k=1;k<=temp.Length();k++)
		{
			if(((temp[k]>='0')&&(temp[k]<='9'))==false)
			{
				ShowMessage("Wrong input data\nOnly numbers and \"All\" are avelaible");
				return;
			}
		}

	}
	Memo1->Lines->Add(Show->Text+")"+GoodLuck[StrToInt(Show->Text)-1]);
	Index=StrToInt(StrToInt(Show->Text)-1);

}
//---------------------------------------------------------------------------

void __fastcall TForm12::ClearClick(TObject *Sender)
{
	Memo1->Lines->Clear();
	Show->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm12::LastClick(TObject *Sender)
{
Memo1->Lines->Clear();
Show->Text=IntToStr(GoodLuck.GetSize());
Memo1->Lines->Add(IntToStr(GoodLuck.GetSize())+")"+GoodLuck[GoodLuck.GetSize()-1]);
Index=StrToInt(GoodLuck.GetSize()-1);
}
//---------------------------------------------------------------------------

void __fastcall TForm12::NextClick(TObject *Sender)
{
if(Index>-1)
{
Memo1->Lines->Clear();
	Index++;
}
else
	return;
Memo1->Lines->Add(IntToStr(Index+1)+")"+GoodLuck[Index]);
Show->Text=IntToStr(Index+1);
}
//---------------------------------------------------------------------------

void __fastcall TForm12::PreviousClick(TObject *Sender)
{
if(Index>0)
{
Memo1->Lines->Clear();
	Index--;
}
else
{
	return;
}
Memo1->Lines->Add(IntToStr(Index+1)+")"+GoodLuck[Index]);
Show->Text=IntToStr(Index+1);
}
//---------------------------------------------------------------------------

