#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect * R1,Rect * R2){
	Rect Overlap;
	Overlap.x = max(R1->x,R2->x);
	Overlap.y = min(R1->y,R2->y);
	Overlap.w = min(R1->x + R1->w,R2->x + R2->w) - Overlap.x;
	Overlap.h = Overlap.y - max(R1->y - R1->h,R2->y - R2->h);

	if(Overlap.w > 0 && Overlap.h > 0){
		return Overlap.h * Overlap.w;
	}
	return 0;
}
