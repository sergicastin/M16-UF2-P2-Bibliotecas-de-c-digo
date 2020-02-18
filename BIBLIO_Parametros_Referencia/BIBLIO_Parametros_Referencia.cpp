// BIBLIOParametros Referencia.cpp : Este archivo contiene la implementación. La ejecución del programa comienza y termina ahí.
//
#include <math.h>
#include "BIBLIO_Parametros_Referencia.h"

int calculate(double ia, double ib, double ic, double& ox1, double& ox2)
{
	double discr1;
	int numSols;
	discr1 = ib * ib - 4 * ia * ic;

	if (discr1 < 0) {
		numSols = 0;
	}
	if (discr1 == 0) {
		numSols = 1;
		ox1 = (-ib + sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);
	}

	if (discr1 > 0) {
		numSols = 2;
		ox1 = (-ib + sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);
		ox2 = (-ib - sqrt(ib * ib - 4 * ia * ic)) / (2 * ia);
	}
	return numSols;
}
