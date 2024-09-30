/*Un altro problema di Number theory che si trova qui:
https://codeforces.com/problemset/problem/1520/B
cosa ho imparato ?
PER FAVORE ARGOMENTA...
1.
*/
int main()
{
	int a,b,c,i,u,j;
	scanf("%d",&j);
	for(;j>0;j--) // Questa forma è abbastanza interessante per descrivere [while(j--)]
	{
		u=1;
		scanf("%d",&a);
	    b=a;
        c=0;
        u=1;

	while(b>=10) // la variabile b descrive quante volte bisogna iterare ? ma POURQUOI ?
	{
		b=b/10;
		c++;
		u=u*10+1;
	}
	printf("%d\n",c*9+a/u);
	}
	
}