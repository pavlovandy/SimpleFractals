//
// Created by Arin on 31/03/2020.
//

#ifndef SOMEFRACTS_MANDELBRHOT_H
#define SOMEFRACTS_MANDELBRHOT_H

#include "cmplxnum.h"
#include <cstdlib>

extern const std::size_t    WIN_WIDTH;
extern const std::size_t    WIN_HEIGHT;

class MandelbrhotSet {
public:
	MandelbrhotSet(cmplxnum start) : zstart(start) {}
	void    IterateThroughArray(unsigned*  pixels);

	void    ChangeFirstValue(double x, double y);

	inline cmplxnum    MapScreenCoordsWithPlane(int x, int y) {
		return {LeftTopCornerCoord[0] + x * ScreenScale[0],
				         LeftTopCornerCoord[1] + y * ScreenScale[1]};
	}

private:
	cmplxnum    zstart;
	double    LeftTopCornerCoord[2] = {-2.0, 1.0};
	double    ScreenScale[2] = {-(LeftTopCornerCoord[0] - 1.0) / WIN_WIDTH, -(LeftTopCornerCoord[1] + 1.0) / WIN_HEIGHT};
};

#endif //SOMEFRACTS_MANDELBRHOT_H
