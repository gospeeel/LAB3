#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>
#include "nomer1.h"
#include "nomer2.h"
#include "nomer2a.h"

void main()
{
	setlocale(LC_ALL, "RUS");
	nomer2a();
}