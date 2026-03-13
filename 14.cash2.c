#include <stdio.h>
#include <cs50.h>
int kac200(float paraustu);
int kac100(float paraustu);
int kac50(float paraustu);
int kac20(float paraustu);
int kac10(float paraustu);
int kac5(float paraustu);
int kac1(float paraustu);
float kac50k(float paraustu);
float kac25k(float paraustu);
float kac10k(float paraustu);
float kac5k(float paraustu);
float kac1k(float paraustu);
int main(void) {
    float paraustu = get_float("\nPara üstü: ");
    while (paraustu < 0.01)
    {
        paraustu = get_float("Geçersiz değer! En az 1 kuruş giriniz: ");
    }
    int ikiyuz = kac200(paraustu);
    paraustu = paraustu - ikiyuz * 200;
    int yuz = kac100(paraustu);
    paraustu = paraustu - yuz * 100;
    int elli = kac50(paraustu);
    paraustu = paraustu - elli * 50;
    int yirmi = kac20(paraustu);
    paraustu = paraustu - yirmi * 20;
    int on = kac10(paraustu);
    paraustu = paraustu - on * 10;
    int bes = kac5(paraustu);
    paraustu = paraustu - bes * 5;
    int bir = kac1(paraustu);
    paraustu = paraustu - bir;
    int ellik = kac50k(paraustu);
    paraustu = paraustu - ellik * 0.50;
    int yirmibesk = kac25k(paraustu);
    paraustu = paraustu - yirmibesk * 0.25;
    int onk = kac10k(paraustu);
    paraustu = paraustu - onk * 0.10;
    int besk = kac5k(paraustu);
    paraustu = paraustu - besk * 0.05;
    int birk = kac1k(paraustu);
    paraustu = paraustu - birk * 0.01;
    printf("\nVerilecek toplam para parçası sayısı: %i\n", ikiyuz + yuz + elli + yirmi + on + bes + bir + ellik + yirmibesk + onk + besk + birk);
    printf("\nVerilecek para parçası türleri:\n\n%i x 200 lira\n%i x 100 lira\n%i x 50 lira\n%i x 20 lira\n%i x 10 lira\n%i x 5 lira\n%i x 1 lira\n%i x 50 kuruş\n%i x 25 kuruş\n%i x 10 kuruş\n%i x 5 kuruş\n%i x 1 kuruş.\n", ikiyuz, yuz, elli, yirmi, on, bes, bir, ellik, yirmibesk, onk, besk, birk);
}
int kac200(float paraustu) {
    return paraustu / 200;
}
int kac100(float paraustu) {
    return paraustu / 100;
}
int kac50(float paraustu) {
    return paraustu / 50;
}
int kac20(float paraustu) {
    return paraustu / 20;
}
int kac10(float paraustu) {
    return paraustu / 10;
}
int kac5(float paraustu) {
    return paraustu / 5;
}
int kac1(float paraustu) {
    return paraustu / 1;
}
float kac50k(float paraustu) {
    return paraustu / 0.50;
}
float kac25k(float paraustu) {
    return paraustu / 0.25;
}
float kac10k(float paraustu) {
    return paraustu / 0.10;
}
float kac5k(float paraustu) {
    return paraustu / 0.05;
}
float kac1k(float paraustu) {
    return paraustu / 0.01;
}