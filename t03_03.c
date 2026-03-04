#include <stdio.h> 
#include <float.h> 

int main() {
    int jumlahAngka; 
    
    printf("Masukkan jumlah angka yang akan diinput: ");
    scanf("%d", &jumlahAngka);
    
    if (jumlahAngka <= 0 || jumlahAngka > 100) {
        printf("Jumlah angka tidak valid. Masukkan angka antara 1 sampai 100.\n");
        return 1;
    }

    int angka[jumlahAngka]; 
    
    int minAngka = 101; 
    int maxAngka = -101; 
    
    printf("Masukkan angka-angka (antara -100 sampai 100):\n");
    
    for (int i = 0; i < jumlahAngka; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
        
       
        if (angka[i] < -100 || angka[i] > 100) {
            printf("Angka di luar batasan (-100 sampai 100). Mohon masukkan ulang.\n");
            i--; 
            continue; 
        
        if (angka[i] < minAngka) {
            minAngka = angka[i];
        }
        
        if (angka[i] > maxAngka) {
            maxAngka = angka[i];
        }
    }

    printf("%d\n", minAngka); 
    printf("%d\n", maxAngka); 

    if (jumlahAngka >= 2) { 
        float minRataRataBerturutTurut = FLT_MAX; 
        float maxRataRataBerturutTurut = -FLT_MAX; 
        
        for (int i = 0; i < jumlahAngka - 1; i++) { 
            float currentRataRata = (float)(angka[i] + angka[i+1]) / 2.0;
            
            if (currentRataRata < minRataRataBerturutTurut) {
                minRataRataBerturutTurut = currentRataRata;
            }
            
            if (currentRataRata > maxRataRataBerturutTurut) {
                maxRataRataBerturutTurut = currentRataRata;
            }
        }
        printf("%.2f\n", minRataRataBerturutTurut); 
        printf("%.2f\n", maxRataRataBerturutTurut); 
    } else {
        printf("\n"); 
        printf("\n"); 
    }
    
    return 0; 
}