//Them thu vien ho tro cac ham nhap xuat chuan: stdio.h
#include <stdio.h>
int main(){
	int age = 20;
	float avgMark = 9.5;
	char sex = 'F';
	//1. In ra thong tin sinh vien voi ham scanf
	//Syntax: printf("Control String",value1,value2...,valueN)
	printf("Tuoi sinh vien: %d - Diem TB: [%10.3f]- Gioi tinh: %c\n",age,avgMark,sex);
	//2. In ra gioi tinh sinh vien voi cau lenh getchar
	printf("Gioi tinh cua sinh vien la: ");
	putchar(sex);
	//3. Nhap vao mot so nguyen tu ban phim va luu ra bien number
	//Syntax: scanf("Control String",&variable1, &variable2,...,&variableN)
	/*
		Cac buoc nhap du lieu:
		B1: Khai bao bien chua du lieu nhap
		B2: Thong bao nhap
		B3: Su dung scanf lay du lieu nhap va luu vao DIA CHI cua bien
	*/
	int number;
	printf("\nNhap vao mot so nguyen:");
	scanf("%d",&number);
	
	//In ra gia tri vua nhap
	printf("Gia tri so nguyen vua nhap la: %d\n",number);
	//4. Nhap vao 2 so thuc su dung ham scanf
	float firstNumber, secondNumber;
	printf("Nhap vao 2 so thuc:");
	scanf("%f %f",&firstNumber,&secondNumber);
	//In ra gia tri vua nhap
	printf("Gia tri so thuc thu nhat: %f - So nguyen thu hai: %f\n",firstNumber,secondNumber);
	//5. Su dung cau lenh getchar() de nhap 1 ky tu	
	//Xoa phim enter trong bo nho dem
	fflush(stdin);
	printf("Thay Quang co dep zai khong?");
	char answer = getchar();
	//In gia tri vua nhap
	printf("Cac ban sinh vien tra loi cau hoi thay Quang dep zai khong: %c\n",answer);
	
	
	
	 
	
}
