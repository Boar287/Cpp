//---------------------------------------------------------------------------
#include <vcl.h>
#ifndef ParrentH
#define ParrentH
//---------------------------------------------------------------------------
#endif

class Rectanglee
{
	protected:
	double x1,y1,x2,y2;
	public:

	Rectanglee(int x1,int y1,int x2, int y2);

	void Show(TCanvas*Canvas);

	void Hide(TCanvas*Canvas);

	void Return(TCanvas*Canvas);

	void Move(TCanvas*Canvas);
};
