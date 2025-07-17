#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ALUNOS: MATHEUS SEIDEL E VICTOR GUIMARÃES
int main() {
    // VARIAVEIS DE ESCOLHA
    int opcao, dado = 0, produto = 0, limpe = 0, final = 0;

    // VARIAVEIS DE DADOS PESSOAIS
    char nome_dono[100], nome_pet[100], especie[100], raca[100];
    float peso = 0, idade = 0;

    // VARIAVEIS DE SERVICOS
    int banho = 0, tosa = 0, consul = 0, total = 0;

    while (final != 1) {
        dado = 0;
        produto = 0;

        printf("--BEM-VINDO AO SISTEMA PET AMIGO! :D --\n");
        printf("1- Inserir dados do Pet\n");
        printf("2- Escolher servicos desejados\n");
        printf("3- Limpar informacoes\n");
        printf("4- Finalizar pedido\n");
        scanf("%d", &opcao);
        system("cls"); // use "clear" se estiver no Linux/Mac

        switch (opcao) {
            case 1:
                while (dado != 1) {
                    printf("--INSIRA OS DADOS DO PET--\n");
                    printf("Nome do Dono: ");
                    scanf(" %[^\n]", nome_dono);
                    printf("Nome do Pet: ");
                    scanf(" %[^\n]", nome_pet);
                    printf("Especie do Pet: ");
                    scanf(" %[^\n]", especie);
                    printf("Raca do Pet: ");
                    scanf(" %[^\n]", raca);
                    printf("Peso do Pet (em Kg): ");
                    scanf("%f", &peso);
                    printf("Idade do Pet (em anos): ");
                    scanf("%f", &idade);

                    system("cls");

                    printf("--CONFIRME OS DADOS INSERIDOS--\n");
                    printf("Nome do Dono: %s\n", nome_dono);
                    printf("Nome do Pet: %s\n", nome_pet);
                    printf("Especie do Pet: %s\n", especie);
                    printf("Raca do Pet: %s\n", raca);
                    printf("Peso do Pet: %.2f\n", peso);
                    printf("Idade do Pet: %.2f\n", idade);
                    printf("Deseja confirmar esses dados? (1- SIM / 2- NAO)\n");
                    scanf("%d", &dado);

                    switch (dado) {
                        case 1:
                            break;
                        case 2:
                            strcpy(nome_dono, "");
                            strcpy(nome_pet, "");
                            strcpy(especie, "");
                            strcpy(raca, "");
                            peso = 0;
                            idade = 0;
                            break;
                        default:
                            printf("VALOR INVALIDO\n");
                            break;
                    }

                    system("cls");
                }
                break;

            case 2:
                while (produto != 4) {
                    printf("--ESCOLHA O SERVICO DESEJADO--\n");
                    printf("(Valor Total = R$%d,00)\n", total);
                    printf("1- Banho: R$40,00\n");
                    printf("2- Tosa: R$30,00\n");
                    printf("3- Consulta Veterinaria: R$100,00\n");
                    printf("4- Voltar\n");

                    scanf("%d", &produto);

                    switch (produto) {
                        case 1:
                            banho++;
                            total += 40;
                            break;
                        case 2:
                            tosa++;
                            total += 30;
                            break;
                        case 3:
                            consul++;
                            total += 100;
                            break;
                        case 4:
                            break;
                    }

                    system("cls");
                }
                break;

            case 3:
                printf("Tem certeza que deseja limpar as informacoes inseridas?\n");
                printf("1- Sim\n2- Nao\n");
                scanf("%d", &limpe);

                if (limpe == 1) {
                    total = 0;
                    banho = 0;
                    tosa = 0;
                    consul = 0;
                    strcpy(nome_dono, "");
                    strcpy(nome_pet, "");
                    strcpy(especie, "");
                    strcpy(raca, "");
                    peso = 0;
                    idade = 0;
                }

                system("cls");
                break;

            case 4:
                printf("Deseja finalizar seu pedido?\n");
                printf("1- Sim\n2- Nao\n");
                scanf("%d", &final);

                if (final == 1) {
                    system("cls");
                    printf("--DADOS PESSOAIS--\n");
                    printf("Nome do Cliente: %s\n", nome_dono);
                    printf("Nome do Pet: %s\n", nome_pet);
                    printf("Especie do Pet: %s\n", especie);
                    printf("Raca do Pet: %s\n", raca);
                    printf("Peso do Pet: %.2f\n", peso);
                    printf("Idade do Pet: %.2f\n", idade);
                    printf("--SERVICOS SOLICITADOS--\n");
                    if (banho >= 1) printf("Banho(s): %d\n", banho);
                    if (tosa >= 1) printf("Tosa(s): %d\n", tosa);
                    if (consul >= 1) printf("Consulta Veterinaria(s): %d\n", consul);
                    if (total == 0) printf("Nenhum :|\n");
                    printf("Valor Total: R$%d,00\n\n", total);
                    printf("Obrigado pela preferencia, seu pet esta em boas maos!\n");
                } else {
                    system("cls");
                }

                break;
        }
    }

    return 0;
}

