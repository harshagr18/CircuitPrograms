// For sneaky usage only
#include<stdio.h>
#include<math.h>
 int main()
 {
 int stages,i;
 float gain[10],Rc,C[10],min,R1,R2,hie,R,Amax=1;
 double fh,fl,bw;
 printf("\nEnter number of stages\n");
 scanf("%d",&stages);
 for(i=0;i<stages;i++)
 {
  printf("\nEnter the gain of %d stage ",i+1);
  scanf("%f",&gain[i]);
 Amax*=gain[i];
 }
 printf("\nEnter the value or Rc");
 scanf("%f",&Rc);
 fh=1/(2*3.14*Rc*0.00000000001);
 printf("\nEnter capacitor values");
 for(i=0;i<stages*2+1;i++)
 {
  scanf("%f",&C[i]);
 }
 min=C[1];
  for(i=0;i<stages*2+1;i++)
 {
  if(C[i]<=C[i+1])
  min=C[i];
 }
 printf("\nEnter the value of R1, R2, hie");
 scanf("%f%f%f",&R1,&R2,&hie);
 R=R1*R2*hie/(R1*R2+R2*hie+hie*R1);
 fl=1/(2*3.14*R*min);
 bw=fh-fl;
 printf("Amax is %f\n Amax in decibels is %f\n A3 in decibels is %f\n Fl is %f\n Fh is %f \nBandwidth is %f",Amax,20*log10(Amax),20*log10(Amax)-3,fl,fh,bw);
}
