//#include "path_split.h"
//#include <stdint.h>
//#include <string.h>
//#include <stdlib.h>
//void path_split(const char *str, char **path, char **filename)
//{
//	if (str == NULL)
//	{
//		*path = NULL;
//	*filename = NULL;
//		return;
//	}
//	size_t n = strlen(str);
//	size_t cnt = 0;
//	for (size_t i = 0; i <n; i++)
//	{
//		if (str[i] == '\\')
//		{
//			++cnt;
//		}
//	}	
//	char *p = malloc(n * sizeof(char));
//	int barra = 0;
//	size_t x = 0;
//	size_t j = 0;
//	size_t i = 0;
//	char *f = malloc(n*sizeof(char *));
//	for (i= 0; i<n; i++)
//	{
//		if (str[i] == '\\')
//		{
//			p[x] = str[i];
//			++x;
//			++i;
//			++barra;
//		}
//		if (barra == cnt)
//		{
//		
//			while (str[i] != '\0')
//			{
//				f[j] = str[i];
//				++j;
//		
//				++i;
//			}
//			break;
//		}
//		else
//		{
//
//			p[x]=str[i];
//			++x;
//		
//		}
//		
//
//	}
//	p = realloc(p, sizeof(char)*(x + 1));
//	f = realloc(f, sizeof(char)*(j + 1));
//	p[x] = 0;
//	f[j] = 0;
//	*path =p;
//	*filename =f;
//	return;
//
//}