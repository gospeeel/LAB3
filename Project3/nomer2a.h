#define D 0.1852
#define M 1.609
#define S 1.475
#define Y 7.468
#define L 7412.6
void nomer2a()
{
	int mile;
	float result1, result2, result3, result4,result5;
	puts("������� ���-�� ����");
	scanf("%d", &mile);
	result1 = mile * D;
	result2 = mile * M;
	result3 = mile * S;
	result4 = mile * Y;
	result5 = mile * L;
	printf("%d ���� � ��� %5.3f ��", mile, result1);
	printf("\n%d ���������� ���� - ��� %5.3f ��", mile, result2);
	printf("\n%d ������� ���� � ��� % 5.3f ��", mile , result3);
	printf("\n%d ������������ ���� - ��� %4.4f ��", mile, result4);
	printf("\n%d �������������� ���� - ��� %6.1F ��", mile, result5);
}