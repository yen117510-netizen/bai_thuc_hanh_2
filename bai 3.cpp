#include <stdio.h>
#include<stdlib.h>
typedef struct{
 char hoten[30];
 int masv;
 float d1,d2,d3; 
}SV;
void nhap(SV*x){
 printf("Nhap ma sv: ");
 scanf ("%d",&(x->masv));
printf("Nhap ho ten sv: ");
    scanf(" %29[^\n]", x->hoten);
 printf ("Nhap diem mon 1: ");
 scanf ("%f",&(x->d1)); 
 printf ("Nhap diem mon 2: ");
 scanf ("%f",&(x->d2)); 
 printf ("Nhap diem mon 3: ");
 scanf ("%f",&(x->d3)); 
} 
void in (SV x){
 printf ("Ten: %s,Ma: %d,Diem1: %.2f,Diem2: %.2f,Diem3: %.2f\n",x.hoten,x.masv,x.d1,x.d2,x.d3); 
} 
int main(){
 int n ;
 printf("Nhap so luong sinh vien: ");
 scanf ("%d",&n);
 SV*ds=(SV*)malloc(n*sizeof(SV));
 if (ds==NULL){
  printf("Khong du bo nho!\n");
  return 1; 
 } 
 for (int i=0;i<n;i++){
  printf ("\nNhap thong tin sinh vien thu %d:\n",i+1);
  nhap(&ds[i]);
 }
 printf("\nNhap danh sach sinh vien vua nhap:\n");
 for(int i=0;i<n;i++){
  in(ds[i]);
 }
 free(ds);
 return 0; 
 }