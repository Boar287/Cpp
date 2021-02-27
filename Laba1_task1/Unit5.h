//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TTimer *Timer1;
	TButton *Go;
	TButton *Stop;
    TButton *Gas;
	TButton *Brake;
	TTimer *Timer2;
	TButton *BodyUp;
	TTimer *Timer3;

	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall GoClick(TObject *Sender);
	void __fastcall StopClick(TObject *Sender);
	void __fastcall GasClick(TObject *Sender);
	void __fastcall BrakeClick(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall BodyUpClick(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
