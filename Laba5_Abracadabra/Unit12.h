//---------------------------------------------------------------------------

#ifndef Unit12H
#define Unit12H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm12 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TMemo *Memo2;
	TButton *Previous;
	TButton *Next;
	TButton *Last;
	TButton *SeeAll;
	TButton *Clear;
	TEdit *Show;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall SeeAllClick(TObject *Sender);
	void __fastcall ClearClick(TObject *Sender);
	void __fastcall LastClick(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall PreviousClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm12(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm12 *Form12;
//---------------------------------------------------------------------------
#endif
