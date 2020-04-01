//
// Created by Arin on 31/03/2020.
//

#ifndef SOMEFRACTS_CMPLXNUM_H
#define SOMEFRACTS_CMPLXNUM_H


#define WITHATTRIBUTE

#ifdef WITHATTRIBUTE
typedef double v2d_t __attribute__ ((vector_size (16)));
struct cmplxnum {
	v2d_t   number;

	cmplxnum(v2d_t z) : number(z) {}

	cmplxnum(double x, double y) {
		number[0] = x;
		number[1] = y;
	}
};

inline cmplxnum    operator+(const cmplxnum& rhs, const cmplxnum& lhs) {
	return {rhs.number + lhs.number};
}

inline cmplxnum    operator-(const cmplxnum& rhs, const cmplxnum& lhs) {
	return {rhs.number - lhs.number};
}

inline cmplxnum    operator*(const cmplxnum& rhs, const cmplxnum& lhs) {
	v2d_t    res;
	res[0] = rhs.number[0] * lhs.number[0] - rhs.number[1] * rhs.number[1];
	res[1] = rhs.number[0] * lhs.number[1] + rhs.number[1] * lhs.number[0];
	return {res};
}

inline double      moduleSqr(const cmplxnum& rhs) {
	return rhs.number[0] * rhs.number[0] + rhs.number[1] * rhs.number[1];
}
#else

struct cmplxnum {
	double   Re;
	double   Im;
};

inline cmplxnum    operator+(const cmplxnum& rhs, const cmplxnum& lhs) {
	return {rhs.Re + lhs.Re, rhs.Im + lhs.Im};
}

inline cmplxnum    operator-(const cmplxnum& self) {
	return {-self.Re, -self.Im};
}

inline cmplxnum    operator-(const cmplxnum& rhs, const cmplxnum& lhs) {
	return {rhs.Re - lhs.Re, rhs.Im - lhs.Im};
}

inline cmplxnum    operator*(const cmplxnum& rhs, const cmplxnum& lhs) {
	return {rhs.Re * lhs.Re - rhs.Im * lhs.Im, rhs.Re * lhs.Im + rhs.Im * lhs.Re };
}

inline double      moduleSqr(const cmplxnum& rhs) {
	return rhs.Re * rhs.Re + rhs.Im * rhs.Im;
}

#endif

#endif //SOMEFRACTS_CMPLXNUM_H
