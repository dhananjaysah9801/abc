main()
{
int a[ ]={13,19,29,38,42,49,52,74,82,94};
int key,l=0,m,f=0,h=10;
printf("Enter data to search");
scanf("%d",&key);
while(l<=h)
{
m=(l+h)/2;
if(a[m]>key)
h=m-1;
if(a[m]<key)
l=m+1;
if(a[m]==key)
{
printf("\nData found at position=%d",m+1);
f++;
break;
}
}
if(f==0)
printf("\ndata not foound");


}
