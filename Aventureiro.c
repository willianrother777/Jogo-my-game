#include <stdio.h>

int main (){

    
    char codigo1[10], codigo2[10];
    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    int area1, area2;
    long long int pib1, pib2;
    int p_turisticos1, p_turisticos2; 
    char opcao;
    int escolha, escolha2;

    
    printf("Bem vindo ao Super Trunfo - Cidades\n");
    printf("\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    printf("\n");

    switch (escolha){

        case 1:
    
    printf("Digite as informações, conforme solitado a seguir:\n");
    printf("Cadastro da primeira cidade:\n");

    printf("Digite o código da cidade:\n");
    scanf("%s", codigo1);

    getchar(); 
    printf("Digite o nome do estado:\n");
    scanf("%[^\n]", estado1); 

    getchar(); 

    printf("Digite o nome da cidade:\n");
    scanf("%[^\n]", cidade1); 

    printf("Digite o tamanho da população em milhões (exemplo, 1500000 milhões):\n");
    scanf("%d", &populacao1);

    printf("Digite a área em KM² (exemplo, 200 KM²):\n");
    scanf("%d", &area1);

    printf("Digite o PIB da cidade(exemplo, 1 bilhão = 1000000000):\n");
    scanf("%lld", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &p_turisticos1);

    printf("\n");

   
    printf("Cadastro da segunda cidade:\n");

    printf("Digite o código da segunda cidade:\n");
    scanf("%s", codigo2);

    getchar(); 

    printf("Digite o nome do estado:\n");
    scanf("%[^\n]", estado2);

    getchar(); 
    printf("Digite o nome da cidade:\n");
    scanf("%[^\n]", cidade2);

    printf("Digite o tamanho da população em milhões (exemplo, 1500000 milhões):\n");
    scanf("%d", &populacao2);

    printf("Digite a área em KM² (exemplo, 200 KM²):\n");
    scanf("%d", &area2);

    printf("Digite o PIB da cidade(exemplo, 1 bilhão = 1000000000):\n");
    scanf("%lld", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &p_turisticos2);

    printf("\n");

   
    float densidade1 = (float) populacao1 / area1; 
    float pibc1 = (float) pib1 / populacao1;       
    float densidade2 = (float) populacao2 / area2; 
    float pibc2 = (float) pib2 / populacao2;      

    
    printf("Verifique se os dados inseridos estão corretos\n");

    printf("\n");

    printf("Dados da primeira cidade:\n");
    printf("\n");
    printf("Código da cidade: %s\n", codigo1);
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
    printf("Código da cidade: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d milhões de pessoas\n", populacao2);
    printf("Área: %d KM²\n", area2);
    printf("Densidade Populacional: %.2f pessoas por KM²\n", densidade2);
    printf("PIB: %lld\n", pib2);
    printf("PIB per Capita: %.2f\n", pibc2);
    printf("Pontos Turísticos: %d\n", p_turisticos2);

    
    printf("\n");
    printf("Precione S para confirmar\n");
    scanf(" %c", &opcao);
    printf("Cadastro concluido!\n");
    printf("\n");

    

    printf("Escolha o atributo a ser comparado:\n");
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
    printf("Carta 1 - %s, (%s) - População: %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s, (%s) - População: %d\n", cidade2, estado2, populacao2);

    if (populacao1 == populacao2) {
        printf("O jogo empatou!!\n");
    } else if (populacao1 > populacao2) {
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
    } else{
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
    } break;



    case 2:
    printf("Carta 1 - %s, (%s) - Area: %d Km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s, (%s) - Area: %d Km²\n", cidade2, estado2, area2);

    if (area1 == area2) {
        printf("O jogo empatou!!\n");
    } else if (area1 > area2) {
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
    } else{
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
    } break;

    case 3:
    printf("Carta 1 - %s, (%s) - PIB: %lld\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s, (%s) - PIB: %lld\n", cidade2, estado2, pib2);

    if (pib1 == pib2) {
        printf("O jogo empatou!!\n");
    } else if (pib1 > pib2) {
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
    } else{
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
    } break;

    case 4:
    printf("Carta 1 - %s, (%s) - Pontos Turísticos: %d\n", cidade1, estado1, p_turisticos1);
    printf("Carta 2 - %s, (%s) - Pontos Turísticos: %d\n", cidade2, estado2, p_turisticos2);

    if (p_turisticos1 == p_turisticos2) {
        printf("O jogo empatou!!\n");
    } else if (p_turisticos1 > p_turisticos2) {
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
    } else{
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
    } break;

    case 5:
    printf("Carta 1 - %s, (%s) - Densidade Demográfica: %f\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s, (%s) - Densidade Demográfica: %f\n", cidade2, estado2, densidade2);

    if (densidade1 == densidade2) {
        printf("O jogo empatou!!\n");
    } else if (densidade1 < densidade2) {
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
    } else{
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
    } break;

    case 6:
    printf("Carta 1 - %s, (%s) - PIB Per Capita: %f\n", cidade1, estado1, pibc1);
    printf("Carta 2 - %s, (%s) - PIB Per Capita: %f\n", cidade2, estado2, pibc2);

    if (pibc1 == pibc2) {
        printf("O jogo empatou!!\n");
    } else if (pibc1 > pibc2) {
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade1, estado1);
    } else{
        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
    } break;

    default:
        printf("Opção invalida.\n");
        break;

    } break;

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
