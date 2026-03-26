#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // Kullanıcıdan kredi kartı numarasını alıyoruz (long olarak çünkü 10 haneden fazla)
    long number = get_long("Number: ");

    // Değişkenlerimizi başlatıyoruz
    int sum = 0;              // Luhn algoritmasındaki toplamı tutacak
    int second_sum = 0;       // Sondan başlayarak her ikinci rakamın 2 ile çarpılıp basamaklarının toplamı
    int first_sum = 0;        // Sondan başlayarak her ikinci rakamın dışında kalan rakamların toplamı
    int count = 0;            // Kart numarasının kaç hane olduğunu tutacak
    long temp = number;       // Kart numarasını bozmamak için geçici bir değişken

    // Kart numarasını sağdan sola doğru işlerken ilk rakamları tutmak için değişken
    int first_digit = 0;
    int first_two_digits = 0;

    // Luhn algoritmasını uygulamak ve haneyi saymak için döngü
    while (temp > 0)
    {
        int digit = temp % 10;  // Son haneyi alırız

        // Pozisyona göre farklı işleme sokarız (Luhn algoritması)
        if (count % 2 == 0)
        {
            // SON hanelerden başlarken (0. hane, 2. hane, 4. ...)
            first_sum += digit;
        }
        else
        {
            // Her İKİNCİ hanedeysek (1. hane, 3. hane, 5. ...)
            // Rakamı 2 ile çarpıyoruz
            int doubled = digit * 2;
            // 2 ile çarpılan rakam 10'dan büyükse, basamaklarını topluyoruz (ör: 8*2=16 -> 1+6=7)
            second_sum += (doubled / 10) + (doubled % 10);
        }

        // temp'i bir hane sağa kaydırıyoruz
        temp /= 10;
        count++;

        // İlerlediğimizde ilk iki veya ilk rakamı almak için hem one hem two kontrolü
        if (temp < 100 && temp > 9)
        {
            // İlk iki hane (en baştaki iki rakam)
            first_two_digits = temp;
        }
        if (temp < 10 && temp > 0)
        {
            // En baştaki (ilk) rakam
            first_digit = temp;
        }
    }

    // Tüm basamakların toplamı
    sum = first_sum + second_sum;

    // Geçerli kart mı (Luhn algoritmasına göre: toplamın sonu 0 olmalı)
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Kartın tipini kontrol etme:
    // American Express: 15 hane ve 34 ya da 37 ile başlar
    // MasterCard: 16 hane ve 51-55 ile başlar
    // Visa: 13 ya da 16 hane ve 4 ile başlar
    if (count == 15 && (first_two_digits == 34 || first_two_digits == 37))
    {
        printf("AMEX\n");
    }
    else if (count == 16 && (first_two_digits >= 51 && first_two_digits <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((count == 13 || count == 16) && first_digit == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

}