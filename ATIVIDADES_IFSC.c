//Questão 1 — Cálculo das expressões e tipo de resultado
c
Copiar
Editar
#include <stdio.h>
#include <math.h>

int main() {
    printf("a) (20 - 15)/2 = %d (inteiro)\n", (20 - 15) / 2);
    printf("b) 20 - 15/2 = %d (inteiro)\n", 20 - 15 / 2);
    printf("c) 2*5/20 + 30/15*2 = %d (inteiro)\n", 2 * 5 / 20 + 30 / 15 * 2);
    printf("d) 2*(5/20) + 30/(15*2) = %d (inteiro)\n", 2 * (5 / 20) + 30 / (15 * 2));
    printf("e) 23 / 4 = %.2f (real)\n", 23 / 4.0); // precisa forçar divisão real
    printf("f) 23 %% 4 = %d (inteiro)\n", 23 % 4);
    printf("g) 35 / 6 + 2 = %d (inteiro)\n", 35 / 6 + 2);
    printf("h) 35 / 6 - 2 = %d (inteiro)\n", 35 / 6 - 2);
    printf("i) 35 / 6 * 2 = %d (inteiro)\n", 35 / 6 * 2);
    printf("j) sqrt(625) = %.0f (real)\n", sqrt(625));
    printf("k) sqrt(20) = %.2f (real)\n", sqrt(20));
    printf("l) 2 + sqrt(21 / 5) = %.2f (real)\n", 2 + sqrt(21 / 5.0));

    return 0;
}
//Questão 2 — Tradução para pseudocódigo em C
Expressões matemáticas escritas como código em C:

c
Copiar
Editar
#include <math.h>

int main() {
    int A, B, C, D, E, N;
    float resultado;

    // a) (A + B) * C
    resultado = (A + B) * C;

    // b) TOTAL / N
    resultado = (float)A / N; // supondo TOTAL = A

    // c) A - B(C + D²) / E
    resultado = A - (B * (C + pow(D, 2))) / E;

    // d) base^expoente
    resultado = pow(A, B); // supondo base = A, expoente = B

    // e) a * b^c
    resultado = A * pow(B, C); // a = A, b = B, c = C

    return 0;
}
//Questão 3 — Avaliação de expressões lógicas (C)
c
Copiar
Editar
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    struct Dados {
        float A;
        int B;
        char nome[10];
        char profissao[15];
    };

    struct Dados dados[3] = {
        {3, 16, "MIRIAM", "ADVOGADO"},
        {5, 64, "PEDRO", "MEDICO"},
        {2.5, 9, "ANA", "PROFESSOR"}
    };

    bool TESTE = false;

    for (int i = 0; i < 3; i++) {
        float A = dados[i].A;
        int B = dados[i].B;
        char* NOME = dados[i].nome;
        char* PROFISSAO = dados[i].profissao;

        printf("Caso 0%d:\n", i + 1);

        bool a = (A + 1 >= pow(B, 0.5)) || (strcmp(NOME, "ANA") != 0);
        bool b = (A + 1 >= pow(B, 0.5)) && (strcmp(PROFISSAO, "MEDICO") == 0);
        bool c = (strcmp(NOME, "ANA") != 0) || (strcmp(PROFISSAO, "MEDICO") == 0) && (A + 1 >= pow(B, 0.5));
        bool d = (!TESTE && (A + 1 >= pow(B, 0.5))) || !(strcmp(PROFISSAO, "MEDICO") == 0);
        bool e = !(A + 1 >= pow(B, 0.5)) && TESTE;

        printf("a) %s\n", a ? "VERDADEIRO" : "FALSO");
        printf("b) %s\n", b ? "VERDADEIRO" : "FALSO");
        printf("c) %s\n", c ? "VERDADEIRO" : "FALSO");
        printf("d) %s\n", d ? "VERDADEIRO" : "FALSO");
        printf("e) %s\n\n", e ? "VERDADEIRO" : "FALSO");
    }

    return 0;
}
//Questão 4 — Avaliação de expressões (V/F)
Avaliação direta em C:

c
Copiar
Editar
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    printf("a) 6 <= 7: %s\n", 6 <= 7 ? "VERDADEIRO" : "FALSO");

    printf("b) 64^(1/2) > 5*2: %s\n", pow(64, 0.5) > (5*2) ? "VERDADEIRO" : "FALSO");

    printf("c) 'Pseudocódigo' < 'PSEUDOCÓDIGO': %s\n", strcmp("Pseudocódigo", "PSEUDOCÓDIGO") < 0 ? "VERDADEIRO" : "FALSO");

    printf("d) 'Pseudocódigo' > 'turbo': %s\n", strcmp("Pseudocódigo", "turbo") > 0 ? "VERDADEIRO" : "FALSO");

    printf("e) 3 + 5 <= 2 * 4: %s\n", 3 + 5 <= 2 * 4 ? "VERDADEIRO" : "FALSO");

    return 0;
}
//Questão 5 — Resultados das expressões Escreva
Tradução para printf():

c
Copiar
Editar
#include <stdio.h>
#include <string.h>

int main() {
    // a)
    printf("a) %s\n", strcmp("mario", "maria") == 0 ? "VERDADEIRO" : "FALSO");

    // b)
    printf("b) %s\n", (2 + 4 == 6) ? "VERDADEIRO" : "FALSO");

    // c)
    printf("c) %s\n", (10 - 4 > 7) ? "VERDADEIRO" : "FALSO");

    // d)
    printf("d) %s\n", ((2 * 3) > (3 * 2)) ? "VERDADEIRO" : "FALSO");

    // e)
    printf("e) %s\n", !('a' > 'A') ? "VERDADEIRO" : "FALSO");

    return 0;
}
//Questão 6 — Comandos de atribuição válidos
Tradução para C com validação:

c
Copiar
Editar
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    float soma, x;
    char nome[50], cor[50];
    bool cod, teste, tudo;

    // 1) teste = cod OU ((x)*2 <> soma)
    // → cod || (x*2 != soma)
    teste = cod || ((x)*2 != soma); // VÁLIDO

    // 2) tudo = soma
    // → bool = float => INVÁLIDO

    // 3) x = nome >= cor
    // → comparar strings diretamente não é válido em C (INVÁLIDO)

    // 4) cod = cor = 'verde'
    // → atribuição de string para bool = INVÁLIDO

    // 5) tudo = NÃO teste OU cod E (soma < x)
    tudo = (!teste) || (cod && soma < x); // VÁLIDO

    return 0;
}
//Questão 7 — Área da Circunferência
c
Copiar
Editar
#include <stdio.h>

int main() {
    float AREA, RAIO;
    const float PI = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%f", &RAIO);

    AREA = PI * RAIO * RAIO;

    printf("Área da circunferência = %.2f\n", AREA);
    return 0;
}
//Questão 8 — Área do Triângulo
c
Copiar
Editar
#include <stdio.h>

int main() {
    float AREA, BASE, ALTURA;

    printf("Digite a base do triângulo: ");
    scanf("%f", &BASE);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &ALTURA);

    AREA = (BASE * ALTURA) / 2;

    printf("Área do triângulo = %.2f\n", AREA);
    return 0;
}
//Questão 9 — Nome Completo (concatenação)
c
Copiar
Editar
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], nomeCompleto[100];

    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    strcpy(nomeCompleto, nome);         // Copia nome
    strcat(nomeCompleto, " ");          // Adiciona espaço
    strcat(nomeCompleto, sobrenome);    // Adiciona sobrenome

    printf("Nome completo: %s\n", nomeCompleto);
    return 0;
}
//Questão 10 — Soma de Dois Números
c
Copiar
Editar
#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Soma dos valores = %d\n", soma);
    return 0;
}
//Questão 11 — Cálculo de Salário
c
Copiar
Editar
#include <stdio.h>

int main() {
    float HT, VH, PD;
    float SB, TD, SL;

    printf("Horas trabalhadas no mês (HT): ");
    scanf("%f", &HT);

    printf("Valor da hora trabalhada (VH): ");
    scanf("%f", &VH);

    printf("Percentual de desconto (PD): ");
    scanf("%f", &PD);

    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;

    printf("\n--- RESULTADO ---\n");
    printf("Horas Trabalhadas: %.2f\n", HT);
    printf("Salário Bruto: R$ %.2f\n", SB);
    printf("Desconto: R$ %.2f\n", TD);
    printf("Salário Líquido: R$ %.2f\n", SL);
    
    return 0;
}
//Questão 12 — Converter Celsius para Fahrenheit
c
Copiar
Editar
#include <stdio.h>

int main() {
    float C, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("Temperatura em Fahrenheit = %.2f\n", F);
    return 0;
}
//Questão 13 — Converter Fahrenheit para Celsius
c
Copiar
Editar
#include <stdio.h>

int main() {
    float F, C;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) * (5.0 / 9);

    printf("Temperatura em Celsius = %.2f\n", C);
    return 0;
}
//Questão 14 — Volume de uma lata de óleo (cilindro)
c
Copiar
Editar
#include <stdio.h>

int main() {
    float VOLUME, RAIO, ALTURA;
    const float PI = 3.14159;

    printf("Digite o raio da lata: ");
    scanf("%f", &RAIO);

    printf("Digite a altura da lata: ");
    scanf("%f", &ALTURA);

    VOLUME = PI * RAIO * RAIO * ALTURA;

    printf("Volume da lata de óleo = %.2f\n", VOLUME);
    return 0;
}
//Questão 15 — Litros de combustível em uma viagem
c
Copiar
Editar
#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    printf("Velocidade média = %.2f km/h\n", velocidade);
    printf("Tempo gasto = %.2f horas\n", tempo);
    printf("Distância percorrida = %.2f km\n", distancia);
    printf("Litros usados = %.2f litros\n", litros);
    return 0;
}
//Questão 16 — Troca de valores entre A e B
c
Copiar
Editar
#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("Valores trocados:\nA = %d\nB = %d\n", A, B);
    return 0;
}
//Questão 17 — Propriedade distributiva com 4 números
c
Copiar
Editar
#include <stdio.h>

int main() {
    int A, B, C, D;

    printf("Digite os quatro números inteiros (A B C D): ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    printf("A + B = %d\tA * B = %d\n", A + B, A * B);
    printf("A + C = %d\tA * C = %d\n", A + C, A * C);
    printf("A + D = %d\tA * D = %d\n", A + D, A * D);
    printf("B + C = %d\tB * C = %d\n", B + C, B * C);
    printf("B + D = %d\tB * D = %d\n", B + D, B * D);
    printf("C + D = %d\tC * D = %d\n", C + D, C * D);
    return 0;
}
//Questão 18 — Volume de uma caixa retangular
c
Copiar
Editar
#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("Volume da caixa = %.2f\n", volume);
    return 0;
}
//Questão 19 — Quadrado e cubo de um número
c
Copiar
Editar
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    printf("Quadrado = %d\n", num * num);
    printf("Cubo = %d\n", num * num * num);
    return 0;
}
//Questão 20 — Quadrado da soma de dois inteiros
c
Copiar
Editar
#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("Digite dois valores inteiros (A e B): ");
    scanf("%d %d", &A, &B);

    resultado = (A + B) * (A + B);

    printf("O quadrado da soma = %d\n", resultado);
    return 0;
}
//Questão 21 — Soma dos quadrados de dois inteiros
c
Copiar
Editar
#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("Digite dois valores inteiros (A e B): ");
    scanf("%d %d", &A, &B);

    resultado = (A * A) + (B * B);

    printf("Soma dos quadrados = %d\n", resultado);
    return 0;
}
//Questão 22 — Média de dois números
c
Copiar
Editar
#include <stdio.h>

int main() {
    float Val1, Val2, Media;

    printf("Digite dois valores: ");
    scanf("%f %f", &Val1, &Val2);

    Media = (Val1 + Val2) / 2;

    printf("A média é = %.2f\n", Media);
    return 0;
}
//Questão 23 — Imprimir dois números em ordem inversa
c
Copiar
Editar
#include <stdio.h>

int main() {
    int NumA, NumB;

    printf("Digite dois valores (NumA e NumB): ");
    scanf("%d %d", &NumA, &NumB);

    printf("Ordem inversa: %d %d\n", NumB, NumA);
    return 0;
}
//Questão 24 — Converter km/h para m/s
c
Copiar
Editar
#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s = %.2f\n", ms);
    return 0;
}
//Questão 25 — Divisão inteira: quociente e resto
c
Copiar
Editar
#include <stdio.h>

int main() {
    int Int1, Int2, quociente, resto;

    printf("Digite dois números inteiros (Int1 e Int2): ");
    scanf("%d %d", &Int1, &Int2);

    quociente = Int1 / Int2;
    resto = Int1 % Int2;

    printf("Quociente = %d\n", quociente);
    printf("Resto = %d\n", resto);
    return 0;
}
//Questão 26 — Cálculo de salário líquido com dois descontos
c
Copiar
Editar
#include <stdio.h>

int main() {
    float salarioBruto, salarioLiquido;

    printf("Digite o salário bruto: ");
    scanf("%f", &salarioBruto);

    // Desconto de 10%
    float desconto1 = salarioBruto * 0.10;

    // Desconto de 5% sobre o valor restante
    float restante = salarioBruto - desconto1;
    float desconto2 = restante * 0.05;

    salarioLiquido = restante - desconto2;

    printf("Salário líquido = %.2f\n", salarioLiquido);
    return 0;
}
//Questão 27 — Cálculo do dígito verificador módulo 7
c
Copiar
Editar
#include <stdio.h>

int main() {
    int Codigo, A, B, C, D, E, S, DigitoV;

    printf("Digite um código de 5 dígitos (ABCDE): ");
    scanf("%d", &Codigo);

    A = Codigo / 10000;
    B = (Codigo / 1000) % 10;
    C = (Codigo / 100) % 10;
    D = (Codigo / 10) % 10;
    E = Codigo % 10;

    S = 6*A + 5*B + 4*C + 3*D + 2*E;
    DigitoV = S % 7;

    printf("Dígito verificador = %d\n", DigitoV);
    return 0;
}
//Questão 28 — Inversão de número de 3 dígitos (CDU → UDC)
c
Copiar
Editar
#include <stdio.h>

int main() {
    int N, C, D, U, M;

    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &N);

    C = N / 100;
    D = (N / 10) % 10;
    U = N % 10;

    M = U * 100 + D * 10 + C;

    printf("Número invertido = %d\n", M);
    return 0;
}
//Questão 29 — Reorganizar data de DDMMYY para AAMMDD
c
Copiar
Editar
#include <stdio.h>

int main() {
    int data, dia, mes, ano, novaData;

    printf("Digite a data no formato DDMMYY: ");
    scanf("%d", &data);

    dia = data / 10000;
    mes = (data / 100) % 100;
    ano = data % 100;

    novaData = ano * 10000 + mes * 100 + dia;

    printf("Data no formato AAMMDD = %06d\n", novaData);
    return 0;
}
//Questão 30 — Extrair ano e semestre do número de matrícula (formato AASDDD)
c
Copiar
Editar
#include <stdio.h>

int main() {
    int matricula, ano, semestre;

    printf("Digite a matrícula no formato AASDDD (ex: 241234): ");
    scanf("%d", &matricula);

    // Extrai os dois primeiros dígitos (últimos do ano)
    ano = matricula / 10000;

    // Extrai o terceiro dígito (semestre)
    semestre = (matricula / 1000) % 10;

    printf("Ano de matrícula: 20%02d\n", ano);
    printf("Semestre: %dº semestre\n", semestre);

    return 0;
}
//Questão 31 — Imprimir o maior de dois números
c
Copiar
Editar
#include <stdio.h>

int main() {
    int A, B;

    printf("Digite dois números: ");
    scanf("%d %d", &A, &B);

    if (A > B)
        printf("O maior número é: %d\n", A);
    else
        printf("O maior número é: %d\n", B);

    return 0;
}
//Questão 32 — Imprimir "F1", "F2" ou "F3" com base no valor de N
c
Copiar
Editar
#include <stdio.h>

int main() {
    int N;

    printf("Digite um número: ");
    scanf("%d", &N);

    if (N <= 10)
        printf("F1\n");
    else if (N <= 100)
        printf("F2\n");
    else
        printf("F3\n");

    return 0;
}
//Questão 33 — Média final com pesos 2, 3 e 5
c
Copiar
Editar
#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("Média final: %.2f\n", media);

    return 0;
}
//Questão 34 — Imprimir três valores em ordem crescente
c
Copiar
Editar
#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordenação simples
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}
//Questão 35 — Dados e aprovação de candidato
c
Copiar
Editar
#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do candidato: ");
    scanf(" %[^\n]", nome); // lê nome com espaços

    printf("Digite as três notas (Port, Mat, CG): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("\nNome: %s\n", nome);
    printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3);
    printf("Média: %.2f\n", media);

    if (media > 7.0 && nota1 >= 5.0 && nota2 >= 5.0 && nota3 >= 5.0)
        printf("Situação: Aprovado\n");
    else
        printf("Situação: Reprovado\n");

    return 0;
}
//Questão 36 — Comissão de Corretores e Total de Vendas
c
Copiar
Editar
#include <stdio.h>

int main() {
    char nome[3][50];
    float vendas[3], comissao[3], total = 0;

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do corretor %d: ", i + 1);
        scanf(" %[^\n]", nome[i]);
        printf("Digite o valor da venda do corretor %d: R$ ", i + 1);
        scanf("%f", &vendas[i]);

        if (vendas[i] > 50000)
            comissao[i] = vendas[i] * 0.12;
        else if (vendas[i] >= 30000)
            comissao[i] = vendas[i] * 0.095;
        else
            comissao[i] = vendas[i] * 0.07;

        total += vendas[i];
    }

    printf("\nRelatório de Vendas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s | Venda: R$ %.2f | Comissão: R$ %.2f\n", nome[i], vendas[i], comissao[i]);
    }
    printf("Total de vendas da empresa: R$ %.2f\n", total);

    return 0;
}
//Questão 37 — Dias de vida com base na idade
c
Copiar
Editar
#include <stdio.h>

int main() {
    int idade, dias;

    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);

    dias = idade * 365; // Considerando 12 meses de 30 dias
    printf("Você já viveu aproximadamente %d dias.\n", dias);

    return 0;
}
//Questão 38 — Soma de A + B em relação a C
c
Copiar
Editar
#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    int soma = A + B;

    if (soma > C)
        printf("A + B é maior que C.\n");
    else if (soma < C)
        printf("A + B é menor que C.\n");
    else
        printf("A + B é igual a C.\n");

    return 0;
}
//Questão 39 — Troco com notas de 1, 10 e 100 reais
c
Copiar
Editar
#include <stdio.h>

int main() {
    int compra, pago, troco;
    int nota100, nota10, nota1;

    printf("Digite o valor da compra: ");
    scanf("%d", &compra);
    printf("Digite o valor pago: ");
    scanf("%d", &pago);

    troco = pago - compra;

    if (troco < 0) {
        printf("Valor pago insuficiente.\n");
        return 1;
    }

    nota100 = troco / 100;
    troco %= 100;
    nota10 = troco / 10;
    troco %= 10;
    nota1 = troco;

    printf("Valor da compra: %d\n", compra);
    printf("Troco: %d\n", pago - compra);
    printf("Notas de 100: %d\n", nota100);
    printf("Notas de 10: %d\n", nota10);
    printf("Notas de 1: %d\n", nota1);

    return 0;
}
//Questão 40 — Compra de peças com descontos
c
Copiar
Editar
#include <stdio.h>

int main() {
    char nome[50];
    int qtd_parafusos, qtd_porcas, qtd_arruelas;
    float preco_parafuso = 1.5, preco_porca = 2.0, preco_arruela = 0.5;
    float total_bruto, desconto, total_final;

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", nome);

    printf("Quantidade de parafusos: ");
    scanf("%d", &qtd_parafusos);
    printf("Quantidade de porcas: ");
    scanf("%d", &qtd_porcas);
    printf("Quantidade de arruelas: ");
    scanf("%d", &qtd_arruelas);

    float total_parafuso = qtd_parafusos * preco_parafuso * 0.80;
    float total_porca = qtd_porcas * preco_porca * 0.90;
    float total_arruela = qtd_arruelas * preco_arruela * 0.70;

    total_bruto = qtd_parafusos * preco_parafuso + qtd_porcas * preco_porca + qtd_arruelas * preco_arruela;
    total_final = total_parafuso + total_porca + total_arruela;
    desconto = total_bruto - total_final;

    printf("\nCliente: %s\n", nome);
    printf("Total de desconto: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f\n", total_final);

    return 0;
}
//Questão 41 — Salário de vendedor de carros
c
Copiar
Editar
#include <stdio.h>

int main() {
    int carros;
    float salario_minimo, salario_total;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de carros vendidos: ");
    scanf("%d", &carros);

    float comissao_fixa = carros * 50.0;
    float comissao_variavel = carros * salario_minimo * 0.05; // supondo 5% sobre valor do carro igual ao salário mínimo
    salario_total = 2 * salario_minimo + comissao_fixa + comissao_variavel;

    printf("Salário total do vendedor: R$ %.2f\n", salario_total);

    return 0;
}
//Questão 42 — Descontos em 4 artigos
c
Copiar
Editar
#include <stdio.h>

int main() {
    char nome[4][50];
    float preco[4], desconto[4], preco_desc[4], total = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite o nome do artigo %d: ", i + 1);
        scanf(" %[^\n]", nome[i]);
        printf("Digite o preço do artigo %d: ", i + 1);
        scanf("%f", &preco[i]);
        printf("Digite o percentual de desconto do artigo %d: ", i + 1);
        scanf("%f", &desconto[i]);

        preco_desc[i] = preco[i] * (1 - desconto[i] / 100);
        total += preco_desc[i];
    }

    printf("\nResumo da compra:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s | Preço original: R$ %.2f | Preço com desconto: R$ %.2f\n",
               nome[i], preco[i], preco_desc[i]);
    }
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
//Questão 43 — Reajuste de salário por categoria
c
Copiar
Editar
#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[50], categoria;
    float salario, novo_salario, aumento;

    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]", nome);
    printf("Digite a categoria (letra): ");
    scanf(" %c", &categoria);
    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    categoria = toupper(categoria);

    if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'E' || categoria == 'H') {
        aumento = 0.10;
    } else if (categoria == 'B' || categoria == 'D' || categoria == 'I' || categoria == 'J' || categoria == 'T') {
        aumento = 0.15;
    } else if (categoria == 'K' || categoria == 'R') {
        aumento = 0.25;
    } else if (categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S') {
        aumento = 0.35;
    } else if (categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z') {
        aumento = 0.50;
    } else {
        aumento = 0.0;
    }

    novo_salario = salario * (1 + aumento);

    printf("Nome: %s\n", nome);
    printf("Categoria: %c\n", categoria);
    printf("Salário reajustado: R$ %.2f\n", novo_salario);

    return 0;
}
//Questão 44 — Venda de picolés
c
Copiar
Editar
#include <stdio.h>

int main() {
    int qtd1, qtd2, qtd3;
    float preco1 = 0.50, preco2 = 0.60, preco3 = 0.75;
    
    printf("Quantidade vendida do tipo 1: ");
    scanf("%d", &qtd1);
    printf("Quantidade vendida do tipo 2: ");
    scanf("%d", &qtd2);
    printf("Quantidade vendida do tipo 3: ");
    scanf("%d", &qtd3);
    
    float total1 = qtd1 * preco1;
    float total2 = qtd2 * preco2;
    float total3 = qtd3 * preco3;

    printf("\nTipo 1: %d unidades - Total: R$ %.2f\n", qtd1, total1);
    printf("Tipo 2: %d unidades - Total: R$ %.2f\n", qtd2, total2);
    printf("Tipo 3: %d unidades - Total: R$ %.2f\n", qtd3, total3);

    return 0;
}
//Questão 45 — Operações em conta bancária
c
Copiar
Editar
#include <stdio.h>
#include <string.h>

int main() {
    int numero;
    float saldo, valor;
    char operacao[10];

    printf("Número da conta: ");
    scanf("%d", &numero);
    printf("Saldo atual: R$ ");
    scanf("%f", &saldo);
    printf("Operação (deposito ou retirada): ");
    scanf("%s", operacao);
    printf("Valor da operação: R$ ");
    scanf("%f", &valor);

    if (strcmp(operacao, "deposito") == 0) {
        saldo += valor;
    } else if (strcmp(operacao, "retirada") == 0) {
        saldo -= valor;
    } else {
        printf("Operação inválida.\n");
        return 1;
    }

    printf("Novo saldo: R$ %.2f\n", saldo);
    if (saldo < 0) {
        printf("Conta estourada\n");
    }

    return 0;
}
//Questão 46 — Conta de hotel
c
Copiar
Editar
#include <stdio.h>

int main() {
    char nome[50];
    int diarias;
    float diaria = 60.0, taxa, total;

    printf("Nome do cliente: ");
    scanf(" %[^\n]", nome);
    printf("Número de diárias: ");
    scanf("%d", &diarias);

    if (diarias > 15) {
        taxa = 5.50;
    } else if (diarias == 15) {
        taxa = 6.00;
    } else {
        taxa = 8.00;
    }

    total = diarias * (diaria + taxa);

    printf("Cliente: %s\n", nome);
    printf("Total da conta: R$ %.2f\n", total);

    return 0;
}
//Questão 47 — Três valores em ordem crescente
c
Copiar
Editar
#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite três valores distintos:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Troca para ordenar (bubble sort com 3 elementos)
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
//Questão 48 — Menor entre três inteiros distintos
c
Copiar
Editar
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite três números inteiros distintos:\n");
    scanf("%d %d %d", &a, &b, &c);

    int menor = a;

    if (b < menor) menor = b;
    if (c < menor) menor = c;

    printf("O menor número é: %d\n", menor);

    return 0;
}
//Questão 49 — Verificação de tipo de triângulo
c
Copiar
Editar
#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Triângulo Equilátero\n");
        } else if (x == y || x == z || y == z) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os valores não formam um triângulo\n");
    }

    return 0;
}
//Questão 50 — Conceito do aluno
c
Copiar
Editar
#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota do aluno (0 a 100): ");
    scanf("%d", &nota);

    if (nota >= 0 && nota <= 49) {
        printf("Nota: %d - Conceito: Insuficiente\n", nota);
    } else if (nota <= 64) {
        printf("Nota: %d - Conceito: Regular\n", nota);
    } else if (nota <= 84) {
        printf("Nota: %d - Conceito: Bom\n", nota);
    } else if (nota <= 100) {
        printf("Nota: %d - Conceito: Ótimo\n", nota);
    } else {
        printf("Nota inválida\n");
    }

    return 0;
}