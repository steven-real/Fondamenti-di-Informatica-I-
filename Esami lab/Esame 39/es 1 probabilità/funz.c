//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//#include <stdint.h>
//double *probabilita(const uint32_t *v, size_t n)
//{
//	if (v == NULL || n == 0)
//	{
//		return NULL;
//	}
//	double val = 0;
//	double tot = 0;
//	double *vett = malloc(n * sizeof(double));
//	for (size_t i = 0; i < n; ++i)
//	{
//		vett[i] = v[i];
//
//	}
//	double *p = malloc(n * sizeof(double));
//	for (size_t i = 0; i < n; ++i)
//	{
//
//		tot += (vett[i] / n);
//
//	}
//	int i = 0;
//	for (size_t k = 0; k < n - 1; ++k)
//	{
//
//		val += k * vett[i];
//		++i;
//
//
//	}
//	*p = tot / val;
//	free(vett);
//	return p;
//
//
//}