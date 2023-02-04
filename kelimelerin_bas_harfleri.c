#include <stdio.h>
// klavyeden girilen metindeki kelimelerin baş harflerini ekrana yazdır

int main()

{
  
 char metin[50];
 int i;
 
 printf("metin girin: ");
 gets(metin);
 
 printf("%c ",metin[0]);
 
 for(i = 0 ; i < strlen(metin) ; i++)
 {
  if(metin[i] == ' ') 
  {
   printf("%c ",metin[i + 1]); // boşluktan sonraki karakteri ekrana yazdır
  }
 }
 
 return 0;
 
}