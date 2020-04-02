//
// Created by Arin on 31/03/2020.
//

#include "mandelbrhot.h"
#include <cmath>
#include <array>
#include <vector>

std::array<unsigned, 5> colors = {0x002F2F, 0x046380, 0xEFECCA, 0xA7A37E, 0xE6E2AF};

//static unsigned Color(unsigned x,unsigned y, double iter)
//{
//	static const unsigned char r[]{0x00,0x40,0x7E,0x11,0x16,0x38,0xFC,0xD0,0x5F,0xDC,0xFF,0x6B};
//	static const unsigned char g[]{0x00,0x40,0x9F,0x90,0x68,0xCF,0xFF,0x99,0x00,0x37,0x8E,0x14};
//	static const unsigned char b[]{0x00,0xE0,0xFF,0x9F,0x18,0x3F,0x00,0x24,0x09,0x0A,0xFE,0xBC};
//	constexpr int k = 1, m = 0x3F;
//	//constexpr int k = 96, m = 0x30;
//	double d = ((((x&4)/4u + (x&2)*2u + (x&1)*16u) + (((x^y)&4)/2u + ((x^y)&2)*4u + ((x^y)&1)*32u))&m)/64.;
//	auto lerp = [d,k](int a,int b,double p) -> unsigned { return int(a/k + (b/k-a/k) * p + d)*255/(255/k); };
//	return lerp(r[int(iter)%sizeof r], r[int(iter+1)%sizeof r], iter-int(iter))*0x10000u
//	       + lerp(g[int(iter)%sizeof r], g[int(iter+1)%sizeof r], iter-int(iter))*0x100u
//	       + lerp(b[int(iter)%sizeof r], b[int(iter+1)%sizeof r], iter-int(iter))*0x1u;
//}
static unsigned Color(unsigned x,unsigned y, double iter)
{
	static const unsigned char r[]{0x00,0x40,0x7E,0x11,0x16,0x38,0xFC,0xD0,0x5F,0xDC,0xFF,0x6B};
	static const unsigned char g[]{0x00,0x40,0x9F,0x90,0x68,0xCF,0xFF,0x99,0x00,0x37,0x8E,0x14};
	static const unsigned char b[]{0x00,0xE0,0xFF,0x9F,0x18,0x3F,0x00,0x24,0x09,0x0A,0xFE,0xBC};

	auto lerp = [](int a,int b,double p) -> unsigned { return int(a + (b-a) * p); };
	return lerp(r[int(iter)%sizeof r], r[int(iter+1)%sizeof r], iter-int(iter))*0x10000u
	       + lerp(g[int(iter)%sizeof r], g[int(iter+1)%sizeof r], iter-int(iter))*0x100u
	       + lerp(b[int(iter)%sizeof r], b[int(iter+1)%sizeof r], iter-int(iter))*0x1u;
}


void    MandelbrhotSet::ChangeFirstValue(double x, double y) {
	zstart = MapScreenCoordsWithPlane(x, y);
}

void    MandelbrhotSet::IterateThroughArray(std::vector<unsigned >&  pixels) {
	constexpr unsigned maxiter = 30;
	for (unsigned y = 0; y < WIN_HEIGHT; y++) {
		for (unsigned x = 0; x < WIN_WIDTH; x++) {
			cmplxnum c = zstart;
			double dist = 0;
			cmplxnum zprev = MapScreenCoordsWithPlane(x, y);
			unsigned iteration = 0;
			while (dist < 4.0) {
				if (iteration > maxiter)
					break;
				cmplxnum znext = sqrt(zprev) + c;

				iteration++;
				zprev = znext;
				dist = std::abs(zprev.Re) + std::abs(zprev.Im);
			}

			pixels[y * WIN_WIDTH + x] = iteration > 10 ? Color(x, y, std::log( maxiter-iteration + 1 - std::log2(std::log2(dist) / 2)) * 4) : 0x0;
		}
	}
}