/**
*main - main block
*Decription: Get a random number and check its last digit,
*Retur: 0
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
