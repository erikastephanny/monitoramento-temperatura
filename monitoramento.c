#include <stdio.h>

int main() {
    float limite, temperatura;
    int cont_acima = 0;
    int cont_consecutivas = 0;

    // Leitura do limite — usando do...while
    do {
        printf("=========================================\n");
        printf("      SISTEMA DE MONITORAMENTO          \n");
        printf("=========================================\n");
        printf("Informe o limite de temperatura (maior que 0): ");
        
        if (scanf("%f", &limite) != 1 || limite <= 0) {
            while (getchar() != '\n'); // limpa buffer
            printf("\n❌ Entrada inválida! Digite um valor MAIOR QUE ZERO.\n\n");
        }
    } while (limite <= 0);

    printf("\n✅ Limite definido: %.1f °C\n", limite);
    printf("🔹 Digite 000 para encerrar manualmente.\n");
    printf("🔹 3 valores consecutivos acima = ENCERRAMENTO AUTOMÁTICO.\n");
    printf("-----------------------------------------\n\n");

    // Monitoramento contínuo — usando while
    while (1) {
        printf("Digite a temperatura atual: ");
        
        if (scanf("%f", &temperatura) != 1) {
            while (getchar() != '\n');
            printf("⚠️ Entrada inválida! Digite um valor numérico.\n\n");
            continue;
        }

        // Encerramento manual (000 = 0 em float)
        if (temperatura == 0) {
            printf("\n🛑 Encerramento solicitado pelo usuário.\n");
            break;
        }

        // Temperatura acima do limite
        if (temperatura > limite) {
            cont_acima++;
            cont_consecutivas++;
            printf("⚠️ ALERTA! %.1f °C ACIMA do limite (%.1f °C)\n", temperatura, limite);
            printf("   → Sequência: %d/3\n", cont_consecutivas);

            // Encerramento automático
            if (cont_consecutivas == 3) {
                printf("\n🚨 3 consecutivas acima do limite!\n🔌 Encerrando automaticamente...\n");
                break;
            }
        }
        // Dentro do limite → zera contador de consecutivas
        else {
            printf("✅ %.1f °C dentro do limite.\n", temperatura);
            cont_consecutivas = 0;
        }
        printf("\n");
    }

    // Relatório final
    printf("\n=========================================\n");
    printf("            RELATÓRIO FINAL              \n");
    printf("=========================================\n");
    printf("Limite: %.1f °C\n", limite);
    printf("Acima do limite: %d vez(es)\n", cont_acima);
    printf("Status: Encerrado com sucesso.\n");
    printf("=========================================\n");

    return 0;
}