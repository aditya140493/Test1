#include<stdio.h>
#include<conio.h>
void main(){
   int m,i,a[20],b[20],x[20],y[20],n,d,d1,d2,j,po,ne,z;
   clrscr();
   printf("\n Enter number:");
   scanf("%d",&m);
   for(i=1;i<=m;i++){
      printf("\n Enter the co-ordinates %d:",i);
      scanf("%d%d",&a[i],&b[i]);
     }
     printf("\n Enter how many points to be sorted:");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
     printf("\n Enter the co-ordinates %d:",i);
     scanf("%d%d",&x[i],&y[i]);
     }
     for(i=1;i<=n;i++){
     po=0;
     ne=0;
     z=0;
     for(j=1;j<=m;j++){
     d1=(x[i]-a[j])*(y[i]-b[j+1]);
     d2=(x[i]-a[j+1])*(y[i]-b[j]);
     d=d1-d2;
     if(d>0)
     po++;
     else
     z++;
     }
     if((po==m)||(ne==m))
     printf("\n pt(%d,%d) lies inside the polygon",x[i],y[i]);
     else if(po+ne==m)
     printf("\n pt(%d,%d) lies outside the polygon",x[i],y[i]);
     else
     printf("\n pt(%d,%d) lies on the polygon",x[i],y[i]);
     }
     getch();
}