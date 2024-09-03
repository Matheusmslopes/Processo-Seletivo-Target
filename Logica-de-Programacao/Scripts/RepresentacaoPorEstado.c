#include <stdio.h>

int main() {
    float SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, outros = 19849.53;
    
    float total = SP + RJ + MG + ES + outros;
    
    float percentualSP = (SP/total) * 100;
    float percentualRJ = (RJ/total) * 100;
    float percentualMG = (MG/total) * 100;
    float percentualES = (ES/total) * 100;
    float percentualOutros = (outros/total) * 100;
    
    printf("Representação percentual de cada estado: \n");
    printf("SP: %.2f%%\n", percentualSP);
    printf("RJ: %.2f%%\n", percentualRJ);
    printf("MG: %.2f%%\n", percentualMG);
    printf("ES: %.2f%%\n", percentualES);
    printf("Outros: %.2f%%\n", percentualOutros);
    
    return 0;
}

