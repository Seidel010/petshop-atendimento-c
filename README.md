# Sistema de Atendimento - Pet Amigo 🐾 (C)

Este projeto foi desenvolvido como atividade acadêmica para praticar lógica de programação em linguagem C, simulando o atendimento de um petshop com cadastro de clientes, seleção de serviços e geração de relatório final.

---

## 📚 Base de estudo

**Trabalho Acadêmico**  
Curso: Lógica de Programação em C  
Alunos: Matheus Seidel e Victor Guimarães

---

## 💡 Como funciona

1. Solicita os dados do dono e do pet: nome, espécie, raça, peso e idade.  
2. Permite escolher os serviços desejados:
   - Banho: R$ 40,00  
   - Tosa: R$ 30,00  
   - Consulta Veterinária: R$ 100,00  
3. Calcula o custo total dos serviços selecionados.  
4. Gera um relatório final com os dados e valor total.

---

## 🖥️ Código principal (trecho)

```c
printf("--BEM-VINDO AO SISTEMA PET AMIGO! :D --\n");
printf("1- Inserir dados do Pet\n");
printf("2- Escolher servicos desejados\n");
printf("3- Limpar informacoes\n");
printf("4- Finalizar pedido\n");
scanf("%d", &opcao);
...
printf("Valor Total: R$%d,00\n", total);
printf("Obrigado pela preferencia, seu pet esta em boas maos!\n");

