#include <stdio.h>
#include <cs50.h>
int main(void) {
  int cents; 
  do {
    cents = get_int("Change owned: ");
  }
  while (cents < 0);
  int coins = 0;
  for (cents; cents > 24; cents = cents - 25) {
    coins++;
  }
  for (cents; cents > 9; cents = cents - 10) {
    coins++;
  }
  for (cents; cents > 4; cents = cents - 5) {
    coins++;
  }
  for (cents; cents > 0; cents = cents - 1) {
    coins++;
  }
  printf("%i\n", coins);
}

/*
Gemini'ye benim yazdığım bu cevap mı yoksa orijinal yanıt olan "cash_answer.c" dosyasındaki yanıt mı daha iyi diye sordum.
İlk bakışta benim kodum daha iyi gibi gelebilir çünkü yazılan satır sayısı orijinal yanıttan tam 13 satır daha az.
Fakat durum böyle değil. Şöyle ki: orijinal cevapta yapılan işlem sayısı statiktir. Toplamda 16 işlem yapılır. Bunlardan
3 tanesi asıl meseleye dahil bile değildir. Sadece baştaki hata yönetimi amaçlı yazılan do-while loopu için gereklidir.
Yani orijinal cevap asıl iş için bilgisayara 13 işlem yaptırır. İstenen sayı ne kadar büyük olursaolsun durum budur.
Benim kodumsa sayı büyüdükçe artacak bir işlemler mahşeridir. Her bir katmanda bir döngü vardır. 25 cent için yapılacak işlem
sayısı 5'tir ki bu yapacağı en az sayıdaki işlemdir. 1000 cent için yapacağı işlem sayısı 41'dir. 2887 için bu sayı 121'dir.
1.000.000 cent yani 10.000 dolar için yapılacak işlem sayısı 40.000 olacaktır. Orijinal cevaptaysa bu sayı hep 13'tür. Yani
1.000.000 sayısında benim kodumdan yaklaşık olarak 3077 kat daha verimli çalışacaktır.
*/