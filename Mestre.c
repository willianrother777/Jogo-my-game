#include <stdio.h>

int main (){

    // Variáveis 
    char codigo1[10], codigo2[10];
    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    int area1, area2;
    long long int pib1, pib2;
    int p_turisticos1, p_turisticos2; // Pontos turísticos
    char opcao;
    int escolha, escolha2, escolha3, resultado1, resultado2;

    // Menu do Jogo 
    printf("### Bem vindo ao Super Trunfo - Cidades ###\n");
    printf("\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    printf("\n");

    switch (escolha){

            case 1:
        //Cadastro das cartas
        printf("### Cadastro das cartas ###\n");
        printf("\n");
        // Cadastro das informações da primeira cidade
        printf("Digite as informações, conforme solitado a seguir:\n");
        printf("Cadastro da primeira cidade:\n");

        printf("Digite o código da cidade:\n");
        scanf("%s", codigo1);

        getchar(); // Limpa o "\n", para não pular a próxima linha

        printf("Digite o nome do estado:\n");
        scanf("%[^\n]", estado1); // Usei essa função para permitir que seja possivel escrever mais de uma palavra

        getchar(); // Limpa o "\n", para não pular a próxima linha

        printf("Digite o nome da cidade:\n");
        scanf("%[^\n]", cidade1); // Usei essa função para permitir que seja possivel escrever mais de uma palavra

        printf("Digite o tamanho da população em milhões (exemplo, 1500000 milhões):\n");
        scanf("%d", &populacao1);

        printf("Digite a área em KM² (exemplo, 200 KM²):\n");
        scanf("%d", &area1);

        printf("Digite o PIB da cidade(exemplo, 1 bilhão = 1000000000):\n");
        scanf("%lld", &pib1);

        printf("Digite a quantidade de pontos turísticos da cidade:\n");
        scanf("%d", &p_turisticos1);

        printf("\n");

        // Cadastro das informações da segunda cidade
        printf("Cadastro da segunda cidade:\n");

        printf("Digite o código da segunda cidade:\n");
        scanf("%s", codigo2);

        getchar(); // Limpa o "\n", para não pular a próxima linha

        printf("Digite o nome do estado:\n");
        scanf("%[^\n]", estado2); // Usei essa função para permitir que seja possivel escrever mais de uma palavra

        getchar(); // Limpa o "\n", para não pular a próxima linha

        printf("Digite o nome da cidade:\n");
        scanf("%[^\n]", cidade2); // Usei essa função para permitir que seja possivel escrever mais de uma palavra

        printf("Digite o tamanho da população em milhões (exemplo, 1500000 milhões):\n");
        scanf("%d", &populacao2);

        printf("Digite a área em KM² (exemplo, 200 KM²):\n");
        scanf("%d", &area2);

        printf("Digite o PIB da cidade(exemplo, 1 bilhão = 1000000000):\n");
        scanf("%lld", &pib2);

        printf("Digite a quantidade de pontos turísticos da cidade:\n");
        scanf("%d", &p_turisticos2);

        printf("\n");

        // Calculos necessários, após a inserção dos dados das duas cidades
        float densidade1 = (float) populacao1 / area1; // Desidade populacional
        float pibc1 = (float) pib1 / populacao1;       // PIB per capita
        float densidade2 = (float) populacao2 / area2; // Desidade populacional
        float pibc2 = (float) pib2 / populacao2;       // PIB per capita

        // Exibição e conferencia dos dados inseridos
        printf("Verifique se os dados inseridos estão corretos\n");

        printf("\n");

        printf("Dados da primeira cidade:\n");
        printf("\n");
        printf("Código da carta: %s\n", codigo1);
        printf("Estado: %s\n", estado1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d milhões de pessoas\n", populacao1);
        printf("Área: %d KM²\n", area1);
        printf("Densidade Populacional: %.2f pessoas por KM²\n", densidade1);
        printf("PIB: %lld\n", pib1);
        printf("PIB per Capita: %.2f\n", pibc1);
        printf("Pontos Turísticos: %d\n", p_turisticos1);

        printf("\n");

        printf("Dados da segunda cidade:\n");
        printf("\n");
        printf("Código da carta: %s\n", codigo2);
        printf("Estado: %s\n", estado2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d milhões de pessoas\n", populacao2);
        printf("Área: %d KM²\n", area2);
        printf("Densidade Populacional: %.2f pessoas por KM²\n", densidade2);
        printf("PIB: %lld\n", pib2);
        printf("PIB per Capita: %.2f\n", pibc2);
        printf("Pontos Turísticos: %d\n", p_turisticos2);

        // Confirmação
        printf("\n");
        printf("Precione S para confirmar\n");
        scanf(" %c", &opcao);
        printf("Cadastro concluido!\n");
        printf("\n");
        printf("\n");
        printf("\n");

        //Comparação do primeiro atributo

        printf("### Comparação dos atributos ###\n");
        printf("\n");
        printf("Escolha o primeiro atributo a ser comparado:\n");
        printf("\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("6. PIB Per Capita\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha2);
        printf("\n");

        switch (escolha2){

            case 1:
                printf("Você escolheu população!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - População: %d\n", cidade1, estado1, populacao1);
                printf("Carta 2 - %s, (%s) - População: %d\n", cidade2, estado2, populacao2);

                printf("\n");
                
                resultado1 = populacao1 > populacao2 ? 1 : 0;

                    if (populacao1 == populacao2) {
                        printf("O jogo empatou!!\n");
                    } else if (populacao1 > populacao2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;



            case 2:
                printf("Você escolheu área!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - Area: %d Km²\n", cidade1, estado1, area1);
                printf("Carta 2 - %s, (%s) - Area: %d Km²\n", cidade2, estado2, area2);

                printf("\n");

                resultado1 = area1 > area2 ? 1 : 0;

                    if (area1 == area2) {
                        printf("O jogo empatou!!\n");
                    } else if (area1 > area2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            case 3:
                printf("Você escolheu PIB!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - PIB: %lld\n", cidade1, estado1, pib1);
                printf("Carta 2 - %s, (%s) - PIB: %lld\n", cidade2, estado2, pib2);

                printf("\n");

                resultado1 = pib1 > pib2 ? 1 : 0;

                    if (pib1 == pib2) {
                        printf("O jogo empatou!!\n");
                    } else if (pib1 > pib2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            case 4:
                printf("Você escolheu pontos turísticos!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - Pontos Turísticos: %d\n", cidade1, estado1, p_turisticos1);
                printf("Carta 2 - %s, (%s) - Pontos Turísticos: %d\n", cidade2, estado2, p_turisticos2);

                printf("\n");

                resultado1 = p_turisticos1 > p_turisticos2 ? 1 : 0;

                    if (p_turisticos1 == p_turisticos2) {
                        printf("O jogo empatou!!\n");
                    } else if (p_turisticos1 > p_turisticos2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            case 5:
                printf("Você escolheu densidade demográfica!\n");

                printf("\n");
                
                printf("Carta 1 - %s, (%s) - Densidade Demográfica: %f\n", cidade1, estado1, densidade1);
                printf("Carta 2 - %s, (%s) - Densidade Demográfica: %f\n", cidade2, estado2, densidade2);

                printf("\n");

                resultado1 = densidade1 < densidade2 ? 1 : 0;

                    if (densidade1 == densidade2) {
                        printf("O jogo empatou!!\n");
                    } else if (densidade1 < densidade2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            case 6:
                printf("Você escolheu PIB per capita!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - PIB Per Capita: %f\n", cidade1, estado1, pibc1);
                printf("Carta 2 - %s, (%s) - PIB Per Capita: %f\n", cidade2, estado2, pibc2);

                printf("\n");

                resultado1 = pibc1 > pibc2 ? 1 : 0;

                    if (pibc1 == pibc2) {
                        printf("O jogo empatou!!\n");
                    } else if (pibc1 > pibc2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            default:
                printf("Opção invalida.\n");

                printf("\n");
            break;

        } 
        
        printf("\n");
        printf("\n");
        printf("\n");
            //Comparação do segundo atributo

            printf("Escolha o segundo atributo a ser comparado, não pode ser o mesmo do primeiro:\n");
            printf("\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade demográfica\n");
            printf("6. PIB Per Capita\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &escolha3);
            printf("\n");

            if (escolha2 == escolha3) {
                printf("Você escolheu o mesmo atributo, opção invalida!!");
                printf("\n");
            } else { switch (escolha3){
        
                        case 1:
                            printf("Você escolheu população!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - População: %d\n", cidade1, estado1, populacao1);
                            printf("Carta 2 - %s, (%s) - População: %d\n", cidade2, estado2, populacao2);

                            printf("\n");
                    
                            resultado2 = populacao1 > populacao2 ? 1 : 0;
        
                                if (populacao1 == populacao2) {
                                    printf("O jogo empatou!!\n");
                                } else if (populacao1 > populacao2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
        
        
                        case 2:
                            printf("Você escolheu área!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - Area: %d Km²\n", cidade1, estado1, area1);
                            printf("Carta 2 - %s, (%s) - Area: %d Km²\n", cidade2, estado2, area2);

                            printf("\n");
        
                            resultado2 = area1 > area2 ? 1 : 0;
        
                                if (area1 == area2) {
                                    printf("O jogo empatou!!\n");
                                } else if (area1 > area2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        case 3:
                            printf("Você escolheu PIB!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - PIB: %lld\n", cidade1, estado1, pib1);
                            printf("Carta 2 - %s, (%s) - PIB: %lld\n", cidade2, estado2, pib2);

                            printf("\n");
        
                            resultado2 = pib1 > pib2 ? 1 : 0;
        
                                if (pib1 == pib2) {
                                    printf("O jogo empatou!!\n");
                                } else if (pib1 > pib2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        case 4:
                            printf("Você escolheu pontos turísticos!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - Pontos Turísticos: %d\n", cidade1, estado1, p_turisticos1);
                            printf("Carta 2 - %s, (%s) - Pontos Turísticos: %d\n", cidade2, estado2, p_turisticos2);

                            printf("\n");
        
                            resultado2 = p_turisticos1 > p_turisticos2 ? 1 : 0;
        
                                if (p_turisticos1 == p_turisticos2) {
                                    printf("O jogo empatou!!\n");
                                } else if (p_turisticos1 > p_turisticos2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                                    } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        case 5:
                            printf("Você escolheu densidade demográfica!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - Densidade Demográfica: %f\n", cidade1, estado1, densidade1);
                            printf("Carta 2 - %s, (%s) - Densidade Demográfica: %f\n", cidade2, estado2, densidade2);

                            printf("\n");
        
                            resultado2 = densidade1 < densidade2 ? 1 : 0;
        
                                if (densidade1 == densidade2) {
                                    printf("O jogo empatou!!\n");
                                } else if (densidade1 < densidade2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        case 6:
                            printf("Você escolheu PIB per capita!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - PIB Per Capita: %f\n", cidade1, estado1, pibc1);
                            printf("Carta 2 - %s, (%s) - PIB Per Capita: %f\n", cidade2, estado2, pibc2);

                            printf("\n");
        
                            resultado2 = pibc1 > pibc2 ? 1 : 0;
        
                                if (pibc1 == pibc2) {
                                    printf("O jogo empatou!!\n");
                                } else if (pibc1 > pibc2) {
                                printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        default:
                            printf("Opção invalida.\n");

                            printf("\n");
                        break;
            } 
            }
            printf("\n");
            printf("\n");
            printf("\n");

            //Apresentação dos resultados
            printf("### Resultado do Jogo: ###\n");
            printf("\n");
            if (resultado1 && resultado2) {
                printf("A Carta 1 - %s, (%s), ganhou a partida!\n", cidade1, estado1);
            } else if (resultado1 != resultado2) {
                printf("O jogo empatou!!\n");
            } else {
                printf("A Carta 2 - %s, (%s), ganhou a partida!\n", cidade2, estado2);
            }
        

        break;

        //Regras
    case 2:
        printf("Super Trunfo: Cidades - Regras\n");
        printf("1. Cada jogador cadastra uma cidade com os seguintes atributos:\n");
        printf("   - Código, Estado, Nome, População, Área, PIB, Pontos Turísticos.\n");
        printf("2. O jogo calcula automaticamente:\n");
        printf("   - Densidade Demográfica\n");
        printf("   - PIB per Capita.\n");
        printf("3. O jogador escolhe um atributo para competir:\n");
        printf("   - População (vence o maior).\n");
        printf("   - Área (vence o maior).\n");
        printf("   - PIB (vence o maior).\n");
        printf("   - Pontos Turísticos (vence o maior).\n");
        printf("   - Densidade Demográfica (vence o menor).\n");
        printf("   - PIB Per Capita (vence o maior).\n");
        printf("4. As cidades são comparadas e o jogo anuncia a vencedora.\n");
        printf("5. Em caso de empate, ninguém vence.\n");
        printf("Objetivo: Escolher os melhores atributos e vencer as comparações!\n");
            break;
        
    case 3:
        printf ("Saindo do jogo.\n");
        break;
    
    default:
        printf("Opcao invalida.\n");
        break;

    }

    
return 0;

}
