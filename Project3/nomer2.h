#define D 2.54
#define S 2.7076
void nomer2()
{
	int dym;
	float result, result2;
	puts("¬ведите число");
	scanf("%d", &dym);
	result = D * dym;
	result2 = S * dym;
	printf("%d дюймов Ц это % 4.1f см", dym, result);
	printf("\n%d старолитовских дюймов - это %4.4f см", dym, result2);
}
