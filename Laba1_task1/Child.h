//---------------------------------------------------------------------------
#include "Parrent.h"
#ifndef ChildH
#define ChildH
//---------------------------------------------------------------------------
#endif

class CarBody:public Rectanglee
{


public:
CarBody(int x1,int y1, int x2, int y2):Rectanglee(x1,y1,x2,y2)
{

}

	void Show(TCanvas *Canvas);

	void Hide(TCanvas *Canvas);

	void Return(TCanvas*Canvas);

	void Move(TCanvas* Canvas);

	void BodyUpHide(TCanvas* Canvas);

	void BodyUpShow(TCanvas* Canvas);

	void BodyUpMove(TCanvas* Canvas,int yn);

	int GetY();
};
