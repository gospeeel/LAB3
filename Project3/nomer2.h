#define D 2.54
#define S 2.7076
void nomer2()
{
	int dym;
	float result, result2;
	puts("������� �����");
	scanf("%d", &dym);
	result = D * dym;
	result2 = S * dym;
	printf("%d ������ � ��� % 4.1f ��", dym, result);
	printf("\n%d �������������� ������ - ��� %4.4f ��", dym, result2);
}
