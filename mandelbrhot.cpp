//
// Created by Arin on 31/03/2020.
//

#include "mandelbrhot.h"
#include "cmath"
#include <array>

std::array<unsigned, 5> colors = {0x002F2F, 0x046380, 0xEFECCA, 0xA7A37E, 0xE6E2AF};

void    MandelbrhotSet::ChangeFirstValue(double x, double y) {
	zstart = {0, 0};
}

void    MandelbrhotSet::IterateThroughArray(unsigned*  pixels) {
	for (int y = 0; y < WIN_HEIGHT; y++) {
		for (int x = 0; x < WIN_WIDTH; x++) {
			cmplxnum c = MapScreenCoordsWithPlane(x, y);
			cmplxnum zprev = zstart;
			unsigned iteration = 0;
			while (moduleSqr(zprev) < 4.0) {
				if (iteration > 40)
					break;
				cmplxnum znext = zprev * zprev + c;
				iteration++;
				zprev = znext;
			}
//			double smoothed = log2(log2(moduleSqr(zprev)) / 2);
//			int colorI = (int)(sqrt(iteration + 10 - smoothed) * 256) % (int)colors.size();
			pixels[y * WIN_WIDTH + x] = iteration > 20 ? colors[iteration % colors.size()] : 0x0;
		}
	}
}