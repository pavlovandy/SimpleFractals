//
// Created by Arin on 31/03/2020.
//

#ifndef SOMEFRACTS_MANDELBRHOT_H
#define SOMEFRACTS_MANDELBRHOT_H

#include "cmplxnum.h"
#include <cstdlib>
#include <vector>
#include <iostream>
#include <cmath>

extern const std::size_t    WIN_WIDTH;
extern const std::size_t    WIN_HEIGHT;

class MandelbrhotSet {
public:
	MandelbrhotSet(cmplxnum start) : zstart(start) {}
	void    IterateThroughArray(std::vector<unsigned > &  pixels);

	void    ChangeFirstValue(double x, double y);

	inline void ChangeMeasures(double dy, int x, int y) {
		cmplxnum newMiddle = MapScreenCoordsWithPlane(x, y);
		ScreenScale[0] /= (1 - dy / 20);
		ScreenScale[1] /= (1 - dy / 20);
		LeftTopCornerCoord.Re = newMiddle.Re - ScreenScale[0] * x;
		LeftTopCornerCoord.Im = newMiddle.Im - ScreenScale[1] * y;
	}

	inline cmplxnum    MapScreenCoordsWithPlane(unsigned x, unsigned y) const {
		return {LeftTopCornerCoord.Re + x * ScreenScale[0],
				         LeftTopCornerCoord.Im + y * ScreenScale[1]};
	}

	inline cmplxnum     GetRotation() const { return rotation; }

	inline void     ChangeRotationByAngle(double angle) {
		angle *= M_PI / 180;
		rotation = rotation * cmplxnum{std::cos(angle), std::sin(angle)};
	}

private:
	cmplxnum    zstart;
	cmplxnum LeftTopCornerCoord = {-2.0, 1.0};
	double    ScreenScale[2] = {-(LeftTopCornerCoord.Re - 2.0) / WIN_WIDTH, -(LeftTopCornerCoord.Im + 1.0) / WIN_HEIGHT};
	cmplxnum    rotation{1, 0};
};

#endif //SOMEFRACTS_MANDELBRHOT_H
