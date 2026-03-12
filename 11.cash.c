#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /*
    Amaç: Bir kasiyere verilecek paranın üstünün en az adet para parçası kullanılarak ödenmesidir.

    Mevcut para parçası çeşitleri: 200 lira, 100 lira, 50 lira, 20 lira, 10 lira, 5 lira, 1 lira, 50 kuruş, 25 kuruş, 10 kuruş, 5 kuruş ve 1 kuruştur.
    Yani toplamda 12 adet para parçamız var.

    1. Müşteri almak istediği şeyi getirir.
    2. Alacağı şeyin ücreti hesaplanır. (İnput --get_int-- buradadır.)
    3. Müşteri alacağı şeyin ücretinden fazla tam para verir.
    4. Tüm paradan alacağı şeyin ücreti çıkarılarak para üstü bulunur.
    5. Para üstü için kaç adet para parçası kullanılacağı hesaplanır:
       a. Sırasıyla 200 liradan başlanıp 1 kuruşta bitmek üzere; o sırada sözkonusu değerden   

    Örnek: Birisi 300 lira para verip (verilen para miktarı --vpm-- bir değişkendir) 20 liralık alışveriş yaparsa
    (yapılan alışveriş miktarı --yam-- bir değişkendir) bu kişiye para üstü (para üstü --pu-- bir değişkendir) verilecektir:

    - Eğer vpm - yam (burada 280) >= 200 ise en az bir 200 pu verilir (vpm'den pu çıkarılır) (yeni vpm = 80'dir). (Burası condition'dur.)

    - Şimdi ilk döngü yazılır: vpm >= 200 ise en az bir 200 pu verilir (vpm'den pu çıkarılır). Döngü başa döner, vpm >= 200 olmayana dek
      devam eder. Değilse döngüden çıkılıp sonraki döngüye geçilir.

    - Bu kez vpm (80) >= 100 ise en az bir 100 pu verilir (vpm'den pu çıkarılır). Döngü başa döner, vpm >= 100 olmayana dek
      devam eder. Değilse döngüden çıkılıp sonraki döngüye geçilir.

    - Sonra vpm (halen 80) >= 50 ise en az bir 50 pu verilir (vpm'den pu çıkarılır) (yeni vpm 30'dur). Döngü başa döner, vpm >= 50 olmayana dek
      devam eder. Değilse döngüden çıkılıp sonraki döngüye geçilir.

    - Sonra vpm (30) >= 20 ise en az bir 20 pu verilir (vpm'den pu çıkarılır) (yeni vpm 10'dur). Döngü başa döner, vpm >= 20 olmayana dek
      devam eder. Değilse döngüden çıkılıp sonraki döngüye geçilir.
      
    - Sonra vpm (10) >= 10 ise en az bir 10 pu verilir (vpm'den pu çıkarılır) (yeni vpm 0'dır). Döngü başa döner, vpm >= 10 olmayana dek
      devam eder. Değilse döngüden çıkılıp sonraki döngüye geçilir.  

    */
}