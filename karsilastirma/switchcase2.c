// Hesap makinesi uygulamasý 

#include <stdio.h>
main()
{
	int sayi1, sayi2;
	float sonuc;
	char islem_turu;
	printf("Hesap makinesi uygulamasina hosgeldiniz...\n");
	
	printf("Lutfen yapmak istediginiz islemi seciniz:\n");
	printf("[+] = Toplama Islemi\n");
	printf("[-] = Cikarma Islemi\n");
	printf("[*] = Carpma Islemi\n");
	printf("[/] = Bolme Islemi\n");
	printf("[Y] = Yuzde Islemi\n");
	printf("[M] = Mod Islemi\n");
	islem_turu = getchar();
	
	printf("Islem yapabilmek icin lutfen 2 sayi degerini giriniz:\n");
	scanf("%d %d",&sayi1,&sayi2);	
	switch (islem_turu)
	{
		case '+':
			sonuc = sayi1 + sayi2;
			printf("%d + %d = %.0f\n",sayi1, sayi2, sonuc);
			break;
		case '-':
			sonuc = sayi1 - sayi2;
			printf("%d - %d = %.0f\n",sayi1, sayi2, sonuc);
			break;			
		case '*':
			sonuc = sayi1 * sayi2;
			printf("%d * %d = %.0f\n",sayi1, sayi2, sonuc);
			break;			
		case '/':
			sonuc = sayi1 / sayi2;
			printf("%d / %d = %.2f\n",sayi1, sayi2, sonuc);
			break;			
		case 'Y':
			sonuc = sayi1 * sayi2 / 100;
			printf("%d YUZDE %d = %.2f\n",sayi1, sayi2, sonuc);
			break;			
		case 'M':
			sonuc = sayi1 % sayi2;
			printf("%d MOD %d = %.0f\n",sayi1, sayi2, sonuc);
			break;
		default:
			printf("Hatali islem istegi\n");
			break;						
	}
	printf("Uygulamamizi kullandiginiz icin tesekkurler");
}
