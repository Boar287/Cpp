//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#ifndef CircusH
#define CircusH
//---------------------------------------------------------------------------
class Circus
{
private:
	double R;
	int x1,y1,x2,y2;
	double S,P;
	int xc,yc;
	double a,b;
public:
	Circus();

Circus(int x1,int y1,int x2,int y2);

void CalculateRadius();

void Show(TCanvas *Canvas,TImage *Image1);

void Hide(TCanvas* Canvas, TImage *Image1);

double CalculateS();

double CalculateP();

int CalculateXC();

int CalculateYC();

void NewMassCenter(int xc, int yc);

Circus &operator=(const Circus&other);

void NewANewB(int a, int b);
};
#endif


