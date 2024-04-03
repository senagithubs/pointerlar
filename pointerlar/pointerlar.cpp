#include<stdio.h>

int main() {
	// pointerlar adres bilgisi tutar
	
	int j;
	//printf("Lütfen bir sayı girin: ");


	//scanf_s("%d",&j);     //& işareti bize j nin adres bilgisini verir.


	//i nin adresini almak istiyorum. bunun için i nin adresini pointera atamalıyım.
	// peki nasıl?
	//1.   pointer tanımlanır. ve hangi tipte değerin  adresini tutacaksa o tipte tanımlanır.

	int i = 5;  // bunun adresini tutan pointer i olacak

	int* p = &i;    // pointerim i nin adresini tuttu.(ramde kapladığı bytelarda başlangıç adresini)
	printf("%p\n", p);   // i nin gerçekteki adresini vverir


	// *p  olduğunda , * pointerin tanımladığı adresteki değeriverir.
	printf("%d", *p);




	










	return 0;
}