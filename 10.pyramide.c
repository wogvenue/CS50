#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int euyg = get_int("Eşkenar eşkenar üçgenin yüksekliği/genişliği: ");
    while (euyg < 1 || euyg > 8)
    {
        euyg = get_int("Geçersiz değer! 1-8 arasında bir değer giriniz: ");
    }
    for (int sn = 1; sn <= euyg; sn++)
    {
        for (int sbs = 0; sbs < euyg - sn; sbs++)
        {
            printf(" ");
        }
        for (int sts = 0; sts < sn; sts++)
        {
            printf("#");
        }
        printf("  ");

        for (int sts2 = 0; sts2 < sn; sts2++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/*****************************************************************************************************************************************************************\

euyg:...Eşkenar üçgenin yüksekliği/genişliği: Bu bir karenin sağ üstünden başlayıp sol altında biten bir eşkenar üçgendir. Dolayısıyla da
        yüksekliği ve genişliği eşittir. Kod kısalığı için iki farklı değişken atamaya gerek duyulmamıştır.

sn:.....Satır numarası: Bu sadece satır numarasını değil, her satırda yazılacak "#" miktarını da belirler. Çünkü eşkenar eşkenar üçgen çizmek için ilk
        satırda 1 adet "#" bulunmalıdır. Bu sayı da sonraki her satırda 1 artmalıdır. Arttırma işini satır atladıkça (dış döngünün içindeki
        iç döngüler tamamlandıktan sonra en sondaki printf fonksiyonu yazdırıldıktan sonra),  dış döngüdeki "sn++" ibaresi yapar. Aslında döngüyü
        0'la da başlatabilirdik ama daha anlaşılır olması için 1'le başlatıp aşağıdaki döngüleri de ona göre değiştirdim, gayet de iyi oldu.

sbs:....Satırdaki boşluk sayısı: Aslında bu ilk iç for döngüsünde satırdaki boşluk sayısını belirleyen şey "euyg - sn" ibaresidir. Yani
        "eşkenar üçgenin genişliğinden satır numarasını, dolayısıyla da o satırdaki tuğla sayısını çıkart, böylece satırı tamamlamak için gereken
        boşluk sayısını bul ve o miktarda boşluğu tuğlayı yazdırmadan önce yazdır" demiş oluyoruz.

sts:....Satırdaki tuğla sayısı: yazdırılmak istenen eşkenar eşkenar üçgenin başlangıcı soldan değil sağdan ve program çalıştırıldığında doğal olarak
        yazdırma işi soldan başladığından öncelikli olarak boşluklar yazdırılmalıydı, dolayısıyla da gerekli miktarda boşluk yazdırma döngüsü
        tuğla yazdırma döngüsünün önüne alındı. Her satırdaki tuğla sayısı o satır numarası miktarınca olacağından satırdaki tuğla sayısını belirleyen
        ibare "sts < sn" ibaresi olmuştur.

!.......Gereken miktarda boşluk ve tuğla yazdırılıp bir alt satıra geçildikten sonra dış döngüdeki sn 1 artar (sn++) ve bu kez aşağıda sn'ye bağlı 
        değişkenler de buna göre değişiklik gösterir:

        - Her satırdaki boşluk sayısını belirleyen iç döngünün çalışma miktarı "euyg - sn" kadardı. Dolayısıyla sn arttıkça sbs'den çıkacak miktar da artmış,
          yani sbs'nin değeri azalmış olur. Böylece her satır atlanıldığında boşluk sayısı 1 azalmış olur.

        - Her satırdaki tuğla sayısını belirleyen ikinci for döngüsünün çalışma miktarıysa "sn" kadardı. Dolayısıyla sn arttıkça tuğla sayısı da artmış olur.
        
        = Sonuç itibariyle her bir satırdaki boşluk miktarı önceki satırdan 1 azalmış, tuğla miktarı 1 artmış olur ki istediğimiz de buydu. Bu olay başta
          girilen eşkenar üçgen yüksekliği değerine ulaşana dek devam eder, yani toplam satır miktarı = euyg olduğunda döngüden çıkılır ve argüman tamalanır.

Not:....Eğer ödevlerden yan yana iki adet üçgen çizilenini yapmak istiyorsanız yapacağınız şey çok basit: Yukarıda da yapılmışını göreceğiniz üzere:

        - İki üçgen arasında boşluk bırakmak için ilk tuğla sayısı döngüsünden hemen sonra bir printf komutuyla iki boşluk yazdırır,

        - Satır atlama komutundan hemen önce tuğla sayısı için yazdığınız döngünün aynını yazarsınız ve "sts" değişkeninin ismini karışıklığı önlemek adına başka
          bir şeyle değiştirirsiniz.

          KOLAY GELSİN BREMIN!
        
\*****************************************************************************************************************************************************************/