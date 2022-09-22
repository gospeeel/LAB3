#define D 0.1852
#define M 1.609
#define S 1.475
#define Y 7.468
#define L 7412.6
void nomer2a()
{
	int mile;
	float result1, result2, result3, result4,result5;
	puts("¬ведите кол-во миль");
	scanf("%d", &mile);
	result1 = mile * D;
	result2 = mile * M;
	result3 = mile * S;
	result4 = mile * Y;
	result5 = mile * L;
	printf("%d мил€ Ц это %5.3f км", mile, result1);
	printf("\n%d сухопутна€ мил€ - это %5.3f км", mile, result2);
	printf("\n%d римска€ мил€ Ц это % 5.3f км", mile , result3);
	printf("\n%d старорусска€ мил€ - это %4.4f км", mile, result4);
	printf("\n%d географическа€ мил€ - это %6.1F км", mile, result5);
}