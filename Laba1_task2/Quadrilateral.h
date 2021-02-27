//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#ifndef QuadrilateralH
#define QuadrilateralH
//---------------------------------------------------------------------------
class Quadrilateral
{
private:
	double a,b;
	int x1,y1,x2,y2;
	double S,P;
	int xc,yc;

public:
	Quadrilateral();

	Quadrilateral(int x1,int y1,int x2,int y2);

	 void Show(TCanvas *Canvas,TImage *Image1);

	 void Hide(TCanvas* Canvas, TImage *Image1);

	 double CalculateS();

	 double CalculateP();

	 int CalculateXC();

	 void NewMassCenter(int xc, int yc);

	 int CalculateYC();

	 Quadrilateral &operator=(const Quadrilateral&other);
};
#endif


