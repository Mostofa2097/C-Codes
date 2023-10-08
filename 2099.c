int main(void)
{
int a[] = { 1, 2, 3, 4, 5, 6, 7 };
int b[] = { 2, 4, 6, 8, 10 };
int i;

add_half_of_middle(a, 7);
add_half_of_middle(b, 5);

printf("a: ");
for (i = 0; i < 7; i++)
printf("%d ", a[i]);
printf("\n");

printf("b: ")
for (i = 0; i < 5; i++)
printf("%d ", b[i]);
printf("\n");
}