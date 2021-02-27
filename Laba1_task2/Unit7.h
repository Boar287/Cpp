//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TRadioGroup *Figures;
	TPanel *S;
	TPanel *P;
	TPanel *CenterX;
	TPanel *CenterY;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TButton *Clear;
	TButton *Change;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *NewX;
	TEdit *NewY;
	TButton *ManualControl;
	TPanel *Temp;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TEdit *X1;
	TEdit *X2;
	TEdit *Y1;
	TEdit *Y2;
	TButton *OK;
	TPanel *Temp2;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TEdit *R1;
	TEdit *XC;
	TEdit *R2;
	TEdit *YC;
	TButton *Close;
	TButton *Close2;
	TButton *OK2;

	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall Image1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall ClearClick(TObject *Sender);
	void __fastcall ChangeClick(TObject *Sender);
	void __fastcall ManualControlClick(TObject *Sender);
	void __fastcall OKClick(TObject *Sender);
	void __fastcall CloseClick(TObject *Sender);
	void __fastcall Close2Click(TObject *Sender);
	void __fastcall OK2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
