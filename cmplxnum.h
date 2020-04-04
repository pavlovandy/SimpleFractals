//
// Created by Arin on 31/03/2020.
//

#ifndef SOMEFRACTS_CMPLXNUM_H
#define SOMEFRACTS_CMPLXNUM_H

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

inline cmplxnum    cmlxsqr(const cmplxnum& rhs) {
	return {(rhs.Re - rhs.Im) * (rhs.Re + rhs.Im) , 2 * rhs.Re * rhs.Im};
}

inline double      moduleSqr(const cmplxnum& rhs) {
	return rhs.Re * rhs.Re + rhs.Im * rhs.Im;
}

#endif //SOMEFRACTS_CMPLXNUM_H
