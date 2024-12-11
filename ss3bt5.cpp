#include<stdio.h>
int main(){
	int a,b,c;
	printf("moi nhap vao so nguyen a: ");
	scanf("%d",&a);
	printf("moi nhap vao so nguyen b: ");
	scanf("%d",&b);
	printf("moi nhap vao so nguyen c: ");
	scanf("%d",&c);
	if(a<=b&&b<=c&&a!=c){
		printf("%d nam trong khoang (%d, %d)",b,a,c);
		
	}
	else if(a>=b||b>=c&&a!=c){
	
		printf("%d khong nam trong khoang (%d, %d)",b,a,c);
	}
	else{
		printf("khong hop le");
	}
	return 0;
}
