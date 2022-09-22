void nomer1()
{
	int num1, num2;
	puts("Введите числа");
	scanf("%d%d", &num1, &num2);
	float num3=num1, num4=num2;
	printf("Введены числа x = %d и y = %d", num1,num2);
	printf("\nСумма: %d\nРазность: %d\nПроизведение: %d\nЧастное и остаток от деления: %d\n", num1 + num2, num1 - num2, num1 * num2, num3/num4);
}