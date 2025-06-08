/*1. Contar valores negativos entre 5 números*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int a, negativos = 0;
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &a);
        if (a < 0) {
            negativos++;
        }
    }
    printf("Quantidade de valores negativos: %d\n", negativos);
    return 0;
}
/*2. Calcular o valor de E*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int N, i, fat = 1;
    float E = 1.0;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fat *= i;
        E += 1.0 / fat;
    }

    printf("Valor de E: %.6f\n", E);
    return 0;
}
/*3. Estatísticas da prefeitura*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    float salario, totalSalario = 0, maiorSalario = 0;
    int filhos, totalFilhos = 0, pessoas = 0, ate100 = 0;

    printf("Digite o salario (valor negativo para encerrar): ");
    scanf("%f", &salario);

    while (salario >= 0) {
        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        totalSalario += salario;
        totalFilhos += filhos;
        pessoas++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100) {
            ate100++;
        }

        printf("Digite o salario (valor negativo para encerrar): ");
        scanf("%f", &salario);
    }

    if (pessoas > 0) {
        printf("Media salarial: %.2f\n", totalSalario / pessoas);
        printf("Media de filhos: %.2f\n", (float)totalFilhos / pessoas);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual com salario até R$100,00: %.2f%%\n", (float)ate100 / pessoas * 100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
/*4. Anos até Zé ser mais alto que Chico*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    float chico = 1.5, ze = 1.1;
    int anos = 0;

    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("Anos necessários: %d\n", anos);
    return 0;
}
/* 5. Média de valores positivos*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int valor, soma = 0, count = 0;

    printf("Digite um valor (negativo para encerrar): ");
    scanf("%d", &valor);

    while (valor >= 0) {
        soma += valor;
        count++;
        printf("Digite um valor (negativo para encerrar): ");
        scanf("%d", &valor);
    }

    if (count > 0) {
        printf("Media: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }

    return 0;
}
/*6. Contagem de votos para candidatos*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int voto, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulos = 0, brancos = 0;

    printf("Digite o código do voto (0 para encerrar): ");
    scanf("%d", &voto);

    while (voto != 0) {
        switch (voto) {
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
            case 5: nulos++; break;
            case 6: brancos++; break;
            default: printf("Código inválido!\n"); break;
        }

        printf("Digite o código do voto (0 para encerrar): ");
        scanf("%d", &voto);
    }

    printf("Votos para candidato 1: %d\n", c1);
    printf("Votos para candidato 2: %d\n", c2);
    printf("Votos para candidato 3: %d\n", c3);
    printf("Votos para candidato 4: %d\n", c4);
    printf("Votos nulos: %d\n", nulos);
    printf("Votos em branco: %d\n", brancos);

    return 0;
}
/*7. Média aritmética de 3 notas por aluno (encerra com código 0)*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;

    printf("Digite o código do aluno (0 para encerrar): ");
    scanf("%d", &codigo);

    while (codigo != 0) {
        printf("Digite as três notas do aluno:\n");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        media = (nota1 + nota2 + nota3) / 3;
        printf("Média do aluno %d: %.2f\n", codigo, media);

        printf("\nDigite o código do próximo aluno (0 para encerrar): ");
        scanf("%d", &codigo);
    }

    return 0;
}
/*8. Contar números pares digitados pelo usuário*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int numero, pares = 0;

    do {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero != 0 && numero % 2 == 0) {
            pares++;
        }

    } while (numero != 0);

    printf("Total de números pares: %d\n", pares);
    return 0;
}
/*9. Ler 50 valores e mostrar o maior e o menor*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int i, valor, maior, menor;

    printf("Digite o valor 1: ");
    scanf("%d", &valor);
    maior = menor = valor;

    for (i = 2; i <= 50; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        }
        if (valor < menor) {
            menor = valor;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
/*10. Média ponderada com três notas e pesos (4, 3, 3) com mensagem*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, media;

    printf("Digite o código do aluno (0 para encerrar): ");
    scanf("%d", &codigo);

    while (codigo != 0) {
        printf("Digite as três notas do aluno:\n");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 * 4 + n2 * 3 + n3 * 3) / 10;

        printf("Código do aluno: %d\n", codigo);
        printf("Notas: %.2f, %.2f, %.2f\n", n1, n2, n3);
        printf("Média ponderada: %.2f\n", media);

        if (media >= 5.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }

        printf("\nDigite o código do próximo aluno (0 para encerrar): ");
        scanf("%d", &codigo);
    }

    return 0;
}
/*11. Progressão aritmética (PA) — mostrar termos e soma*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n, a1, r, i, termo, soma = 0;

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);

    printf("Digite a razão (r): ");
    scanf("%d", &r);

    printf("Termos da PA: ");
    for (i = 0; i < n; i++) {
        termo = a1 + i * r;
        printf("%d ", termo);
        soma += termo;
    }

    printf("\nSoma dos termos: %d\n", soma);
    return 0;
}
/*12. Tabuada de 1 a n para 20 valores*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n;

    for (int i = 1; i <= 20; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &n);

        printf("Tabuada de 1 a %d:\n", n);
        for (int j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
        printf("\n");
    }

    return 0;
}
/*13. Fatorial para n números*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n, fat;

    printf("Quantos números deseja calcular o fatorial? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int valor;
        fat = 1;
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);

        for (int j = 1; j <= valor; j++) {
            fat *= j;
        }

        printf("Valor: %d - Fatorial: %d\n", valor, fat);
    }

    return 0;
}
/*14. Média e percentuais de valores positivos e negativos*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int valor, count = 0, pos = 0, neg = 0, soma = 0;

    printf("Digite valores (0 para encerrar):\n");
    do {
        scanf("%d", &valor);
        if (valor != 0) {
            soma += valor;
            count++;
            if (valor > 0) pos++;
            else neg++;
        }
    } while (valor != 0);

    if (count > 0) {
        printf("Média: %.2f\n", (float)soma / count);
        printf("Positivos: %d (%.2f%%)\n", pos, (float)pos / count * 100);
        printf("Negativos: %d (%.2f%%)\n", neg, (float)neg / count * 100);
    } else {
        printf("Nenhum valor foi lido.\n");
    }

    return 0;
}
/*15. Intervalos de porcentagem*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    float valor;
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0, total = 0;

    do {
        printf("Digite um valor [0-100] (negativo para encerrar): ");
        scanf("%f", &valor);
        if (valor >= 0 && valor <= 100) {
            total++;
            if (valor <= 25) t1++;
            else if (valor <= 50) t2++;
            else if (valor <= 75) t3++;
            else t4++;
        }
    } while (valor >= 0);

    printf("[0-25]: %.2f%%\n", (float)t1 / total * 100);
    printf("[26-50]: %.2f%%\n", (float)t2 / total * 100);
    printf("[51-75]: %.2f%%\n", (float)t3 / total * 100);
    printf("[76-100]: %.2f%%\n", (float)t4 / total * 100);

    return 0;
}
/*16. Tabela de valor, quadrado, cubo e raiz*/
c
Copiar
Editar
#include <stdio.h>
#include <math.h>

int main() {
    int valor;

    for (int i = 1; i <= 100; i++) {
        if ((i - 1) % 20 == 0) {
            printf("Valor\tQuadrado\tCubo\t\tRaiz\n");
        }

        printf("%d\t%d\t\t%d\t\t%.2f\n", i, i*i, i*i*i, sqrt(i));
    }

    return 0;
}
/*17. Soma dos n pares consecutivos*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int m, n, soma = 0;

    printf("Digite m (quantidade): ");
    scanf("%d", &m);

    printf("Digite n (a partir de qual número par somar): ");
    scanf("%d", &n);

    if (n % 2 != 0) n++;  // Garante que n seja par

    for (int i = 0; i < m; i++) {
        soma += n + i * 2;
    }

    printf("Soma dos %d pares consecutivos a partir de %d: %d\n", m, n, soma);

    return 0;
}
/*18. Par ou ímpar: divisores ou soma*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int m;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &m);

    if (m % 2 == 0) {
        printf("Divisores de %d: ", m);
        for (int i = 1; i <= m; i++) {
            if (m % i == 0) printf("%d ", i);
        }
        printf("\n");
    } else {
        if (m >= 10) {
            int soma = 0;
            for (int i = 1; i <= m; i++) soma += i;
            printf("Soma dos inteiros de 1 até %d = %d\n", m, soma);
        } else {
            int fat = 1;
            for (int i = 1; i <= m; i++) fat *= i;
            printf("Fatorial de %d = %d\n", m, fat);
        }
    }

    return 0;
}
/*19. Média dos pares, ímpares e geral*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n, pares = 0, impares = 0, somaP = 0, somaI = 0;

    printf("Digite números (0 para encerrar):\n");

    do {
        scanf("%d", &n);
        if (n != 0) {
            if (n % 2 == 0) {
                pares++;
                somaP += n;
            } else {
                impares++;
                somaI += n;
            }
        }
    } while (n != 0);

    int total = pares + impares;
    float mediaGeral = (float)(somaP + somaI) / total;

    printf("Quantidade pares: %d\n", pares);
    printf("Quantidade ímpares: %d\n", impares);
    printf("Média pares: %.2f\n", pares ? (float)somaP / pares : 0);
    printf("Média ímpares: %.2f\n", impares ? (float)somaI / impares : 0);
    printf("Média geral: %.2f\n", mediaGeral);

    return 0;
}
/*20. Soma dos números negativos*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite números inteiros (0 encerra):\n");
    do {
        scanf("%d", &n);
        if (n < 0) soma += n;
    } while (n != 0);

    printf("Soma dos negativos: %d\n", soma);
    return 0;
}
/*21. Contar números pares*/
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n, pares = 0;

    printf("Digite números inteiros positivos (0 encerra):\n");

    do {
        scanf("%d", &n);
        if (n > 0 && n % 2 == 0) pares++;
    } while (n != 0);

    printf("Total de números pares: %d\n", pares);
    return 0;
}
//22. Análise de dados de habitantes (idade, sexo, salário)
c
Copiar
Editar
#include <stdio.h>

int main() {
    int idade, total = 0, menorIdade = 999, maiorIdade = 0;
    float salario, somaSalario = 0;
    char sexo;
    int ate100 = 0;

    printf("Digite idade (negativa para encerrar): ");
    scanf("%d", &idade);

    while (idade >= 0) {
        printf("Digite sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite salário: ");
        scanf("%f", &salario);

        somaSalario += salario;
        if (idade < menorIdade) menorIdade = idade;
        if (idade > maiorIdade) maiorIdade = idade;
        if (salario <= 100) ate100++;
        total++;

        printf("Digite idade (negativa para encerrar): ");
        scanf("%d", &idade);
    }

    if (total > 0) {
        printf("Média de salário: %.2f\n", somaSalario / total);
        printf("Maior idade: %d\n", maiorIdade);
        printf("Menor idade: %d\n", menorIdade);
        printf("Pessoas com salário até R$100: %.2f%%\n", (float)ate100 / total * 100);
    } else {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}
//23. Pesquisa de características físicas da população
c
Copiar
Editar
#include <stdio.h>

int main() {
    int sexo, olhos, cabelos, idade;
    int total = 0;

    printf("Digite sexo (1=M, 2=F), olhos (1=azuis, 2=verdes, 3=castanhos), cabelos (1=louros, 2=castanhos, 3=pretos), idade. (idade negativa encerra):\n");

    while (1) {
        printf("\nSexo: ");
        scanf("%d", &sexo);
        printf("Olhos: ");
        scanf("%d", &olhos);
        printf("Cabelos: ");
        scanf("%d", &cabelos);
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0) break;

        total++;
    }

    printf("Total de habitantes analisados: %d\n", total);
    return 0;
}
//24. Determinar maior idade e quantidade de mulheres entre 18 e 35 com olhos verdes e cabelos louros
c
Copiar
Editar
#include <stdio.h>

int main() {
    int sexo, olhos, cabelos, idade;
    int maiorIdade = 0, contMulheres = 0;

    while (1) {
        printf("Idade (-1 para sair): ");
        scanf("%d", &idade);
        if (idade == -1) break;

        printf("Sexo (1=M, 2=F): ");
        scanf("%d", &sexo);
        printf("Olhos (1=azuis, 2=verdes, 3=castanhos): ");
        scanf("%d", &olhos);
        printf("Cabelos (1=louros, 2=castanhos, 3=pretos): ");
        scanf("%d", &cabelos);

        if (idade > maiorIdade) maiorIdade = idade;

        if (sexo == 2 && idade >= 18 && idade <= 35 && olhos == 2 && cabelos == 1) {
            contMulheres++;
        }
    }

    printf("Maior idade: %d\n", maiorIdade);
    printf("Qtd mulheres entre 18 e 35 com olhos verdes e cabelos louros: %d\n", contMulheres);
    return 0;
}
//25. Cálculo de aumento de preços
c
Copiar
Editar
#include <stdio.h>

int main() {
    int codigo, totalProdutos = 0;
    float preco, novoPreco, somaVelhos = 0, somaNovos = 0;

    do {
        printf("Digite o código do produto (-1 para sair): ");
        scanf("%d", &codigo);
        if (codigo < 0) break;

        printf("Digite o preço atual do produto: ");
        scanf("%f", &preco);

        novoPreco = preco * 1.20;
        printf("Produto %d - Preço novo: R$%.2f\n", codigo, novoPreco);

        somaVelhos += preco;
        somaNovos += novoPreco;
        totalProdutos++;
    } while (1);

    if (totalProdutos > 0) {
        printf("Média preço antigo: R$%.2f\n", somaVelhos / totalProdutos);
        printf("Média preço novo: R$%.2f\n", somaNovos / totalProdutos);
    }

    return 0;
}
//26. Números de 1000 a 1999 com resto 5 ao dividir por 11
c
Copiar
Editar
#include <stdio.h>

int main() {
    int i;

    for (i = 1000; i < 2000; i++) {
        if (i % 11 == 5)
            printf("%d\n", i);
    }

    return 0;
}
//27. Ler 500 valores e encontrar: maior, menor e média
c
Copiar
Editar
#include <stdio.h>

int main() {
    int valor, maior, menor;
    float soma = 0;

    for (int i = 0; i < 500; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (i == 0) {
            maior = menor = valor;
        } else {
            if (valor > maior) maior = valor;
            if (valor < menor) menor = valor;
        }

        soma += valor;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", soma / 500);

    return 0;
}
//28. Calcular S = 1 + 1/2 + 1/3 + ... + 1/N
c
Copiar
Editar
#include <stdio.h>

int main() {
    int N;
    float S = 0.0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;
        printf("1/%d -> %.4f\n", i, S);
    }

    printf("Valor final de S: %.4f\n", S);
    return 0;
}
//29. Média aritmética dos números entre 13 e 73
c
Copiar
Editar
#include <stdio.h>

int main() {
    int soma = 0, contador = 0;

    for (int i = 13; i <= 73; i++) {
        soma += i;
        contador++;
    }

    printf("Média aritmética entre 13 e 73: %.2f\n", (float)soma / contador);
    return 0;
}
//30. Números ímpares entre 100 e 200
c
Copiar
Editar
#include <stdio.h>

int main() {
    printf("Números ímpares entre 100 e 200:\n");
    for (int i = 101; i < 200; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
//31. Ler 10 valores e contar quantos estão entre 10 e 20
c
Copiar
Editar
#include <stdio.h>

int main() {
    int valor, dentro = 0, fora = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("Dentro do intervalo [10,20]: %d\n", dentro);
    printf("Fora do intervalo: %d\n", fora);
    return 0;
}
//32. Ler 5 pares de valores (a, b) e imprimir pares entre a e b
c
Copiar
Editar
#include <stdio.h>

int main() {
    int a, b;

    for (int i = 1; i <= 5; i++) {
        printf("\nPar %d:\nDigite o valor de a: ", i);
        scanf("%d", &a);
        printf("Digite o valor de b (b > a): ");
        scanf("%d", &b);

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        printf("Números pares entre %d e %d: ", a, b);
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0)
                printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
//33. Tabuada de 1 a N para 20 valores
c
Copiar
Editar
#include <stdio.h>

int main() {
    int N;

    for (int i = 1; i <= 20; i++) {
        printf("\nDigite o valor %d para tabuada: ", i);
        scanf("%d", &N);

        printf("Tabuada de 1 a %d:\n", N);
        for (int j = 1; j <= N; j++) {
            printf("%d x %d = %d\n", j, N, j * N);
        }
    }

    return 0;
}
//34. Ler 5 alturas e códigos dos alunos e mostrar o mais alto e o mais baixo
c
Copiar
Editar
#include <stdio.h>

int main() {
    int codigo, codMaisAlto, codMaisBaixo;
    float altura, maiorAltura, menorAltura;

    for (int i = 1; i <= 5; i++) {
        printf("\nAluno %d:\nDigite o código: ", i);
        scanf("%d", &codigo);
        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        if (i == 1 || altura > maiorAltura) {
            maiorAltura = altura;
            codMaisAlto = codigo;
        }
        if (i == 1 || altura < menorAltura) {
            menorAltura = altura;
            codMaisBaixo = codigo;
        }
    }

    printf("\nAluno mais alto: Código %d com %.2f m\n", codMaisAlto, maiorAltura);
    printf("Aluno mais baixo: Código %d com %.2f m\n", codMaisBaixo, menorAltura);
    return 0;
}
//35. Ler 50 informações (altura, sexo) e calcular:
c
Copiar
Editar
#include <stdio.h>

int main() {
    float altura, somaAltura = 0, somaMulheres = 0, maiorAltura, menorAltura;
    int sexo, totalMulheres = 0;

    for (int i = 1; i <= 50; i++) {
        printf("\nPessoa %d:\nDigite a altura (m): ", i);
        scanf("%f", &altura);
        printf("Digite o sexo (1=Masculino, 2=Feminino): ");
        scanf("%d", &sexo);

        somaAltura += altura;

        if (sexo == 2) {
            somaMulheres += altura;
            totalMulheres++;
        }

        if (i == 1 || altura > maiorAltura) maiorAltura = altura;
        if (i == 1 || altura < menorAltura) menorAltura = altura;
    }

    printf("\nMaior altura: %.2f m\n", maiorAltura);
    printf("Menor altura: %.2f m\n", menorAltura);
    printf("Média de altura das mulheres: %.2f m\n", totalMulheres ? somaMulheres / totalMulheres : 0);
    printf("Média de altura da turma: %.2f m\n", somaAltura / 50);

    return 0;
}
//36. Ler números até digitar 0. Mostrar fatorial de cada valor lido
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n;

    do {
        printf("Digite um número para calcular o fatorial (0 para sair): ");
        scanf("%d", &n);

        if (n == 0) break;

        unsigned long long fatorial = 1;
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("Fatorial de %d é: %llu\n", n, fatorial);
    } while (n != 0);

    return 0;
}
//37. Série: 1 1 1 1 ..., X X2 X3 X4 ...
c
Copiar
Editar
#include <stdio.h>

int main() {
    int x;
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Primeira série: ");
    for (int i = 1; i <= 20; i++) {
        printf("1 ");
    }

    printf("\nSegunda série: ");
    for (int i = 1; i <= 20; i++) {
        printf("%d ", x * i);
    }

    return 0;
}
//38. Produto dos números primos entre 92 e 1478
c
Copiar
Editar
#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    unsigned long long produto = 1;

    for (int i = 92; i <= 1478; i++) {
        if (ehPrimo(i)) {
            produto *= i;
        }
    }

    printf("Produto dos primos entre 92 e 1478: %llu\n", produto);
    return 0;
}
//39. Primeiros 5 números perfeitos
c
Copiar
Editar
#include <stdio.h>

int somaDivisores(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            soma += i;
    return soma;
}

int main() {
    int n = 1, contador = 0;

    while (contador < 5) {
        if (somaDivisores(n) == n) {
            printf("%d ", n);
            contador++;
        }
        n++;
    }

    return 0;
}
//40. Ler valores m, imprimir valor, soma dos divisores de 1 a m e fatorial
c
Copiar
Editar
#include <stdio.h>

long long fatorial(int n) {
    long long fat = 1;
    for (int i = 1; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    int m;
    while (1) {
        printf("Digite um valor (0 para sair): ");
        scanf("%d", &m);
        if (m <= 0) break;

        int soma = 0;
        for (int i = 1; i <= m; i++) {
            if (m % i == 0)
                soma += i;
        }

        printf("Valor lido: %d\n", m);
        printf("Soma dos divisores: %d\n", soma);
        printf("Fatorial: %lld\n\n", fatorial(m));
    }

    return 0;
}
//41. Ler 3 notas de 50 alunos e calcular a média ponderada
c
Copiar
Editar
#include <stdio.h>

int main() {
    float n1, n2, n3, mediaP, somaTurma = 0;
    for (int i = 1; i <= 50; i++) {
        printf("Aluno %d - Digite as 3 notas: ", i);
        scanf("%f %f %f", &n1, &n2, &n3);

        mediaP = (n1*2 + n2*4 + n3*3) / 10;
        somaTurma += mediaP;

        if (mediaP >= 7)
            printf("Aluno %d - Média: %.2f - Aprovado\n", i, mediaP);
        else
            printf("Aluno %d - Média: %.2f - Reprovado\n", i, mediaP);
    }
    printf("Média geral da turma: %.2f\n", somaTurma / 50);
    return 0;
}
//42. Calcular a soma: S = 1 + 10 + 10 + 10 + 10
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n, soma;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    soma = 1 + 10*(n - 1);
    printf("Resultado da soma: %d\n", soma);
    return 0;
}
//43. Ler 5 grupos de 4 valores e ordená-los em ordem decrescente
c
Copiar
Editar
#include <stdio.h>

void ordenarDecrescente(int vet[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vet[i] < vet[j]) {
                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

int main() {
    int grupo[4];
    for (int i = 1; i <= 5; i++) {
        printf("Grupo %d - Digite 4 valores: ", i);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &grupo[j]);
        }

        ordenarDecrescente(grupo, 4);

        printf("Ordenado: ");
        for (int j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }
        printf("\n");
    }
    return 0;
}
//44. Estatística de trânsito:
c
Copiar
Editar
#include <stdio.h>

#define TOTAL_CIDADES 200

typedef struct {
    int codigo;
    char estado[3];
    int veiculos;
    int acidentes;
} Cidade;

int main() {
    Cidade cidades[TOTAL_CIDADES];
    int i;
    int maiorIndice = -1, menorIndice = 101;
    int cidadeMaiorIndice, cidadeMenorIndice;
    float mediaVeiculos = 0, mediaAcidentesRS = 0;
    int totalVeiculos = 0, totalAcidentesRS = 0, countRS = 0;

    for (i = 0; i < TOTAL_CIDADES; i++) {
        printf("Cidade %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &cidades[i].codigo);
        printf("Estado (ex: RS): ");
        scanf("%s", cidades[i].estado);
        printf("Veiculos de passeio: ");
        scanf("%d", &cidades[i].veiculos);
        printf("Acidentes com vitimas: ");
        scanf("%d", &cidades[i].acidentes);

        int indice = (cidades[i].acidentes * 100) / (cidades[i].veiculos + 1); // evita divisão por zero

        if (indice > maiorIndice) {
            maiorIndice = indice;
            cidadeMaiorIndice = cidades[i].codigo;
        }
        if (indice < menorIndice) {
            menorIndice = indice;
            cidadeMenorIndice = cidades[i].codigo;
        }

        totalVeiculos += cidades[i].veiculos;

        if (strcmp(cidades[i].estado, "RS") == 0) {
            totalAcidentesRS += cidades[i].acidentes;
            countRS++;
        }
    }

    mediaVeiculos = (float)totalVeiculos / TOTAL_CIDADES;
    if (countRS > 0)
        mediaAcidentesRS = (float)totalAcidentesRS / countRS;

    printf("\nCidade com MAIOR indice de acidentes: %d (%d%%)\n", cidadeMaiorIndice, maiorIndice);
    printf("Cidade com MENOR indice de acidentes: %d (%d%%)\n", cidadeMenorIndice, menorIndice);
    printf("Media de veiculos nas cidades: %.2f\n", mediaVeiculos);
    printf("Media de acidentes nas cidades do RS: %.2f\n", mediaAcidentesRS);

    return 0;
}
//45. Pesquisa com 1000 habitantes:
c
Copiar
Editar
#include <stdio.h>

#define TOTAL_HABITANTES 1000

int main() {
    int sexo, idade;
    float altura;
    float somaIdade = 0, somaAlturaMulheres = 0, somaAltura = 0;
    int countHomens = 0, countMulheres = 0, countIdade18a35 = 0;

    for (int i = 0; i < TOTAL_HABITANTES; i++) {
        printf("Habitante %d\n", i + 1);
        printf("Sexo (0=feminino, 1=masculino): ");
        scanf("%d", &sexo);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Altura (em metros): ");
        scanf("%f", &altura);

        somaIdade += idade;
        somaAltura += altura;

        if (sexo == 0) {
            somaAlturaMulheres += altura;
            countMulheres++;
        } else if (sexo == 1) {
            countHomens++;
        }

        if (idade >= 18 && idade <= 35) {
            countIdade18a35++;
        }
    }

    printf("\nMedia da idade do grupo: %.2f\n", somaIdade / TOTAL_HABITANTES);
    printf("Media da altura das mulheres: %.2f\n", (countMulheres > 0) ? somaAlturaMulheres / countMulheres : 0);
    printf("Media da idade dos homens: %.2f\n", (countHomens > 0) ? somaIdade / countHomens : 0);
    printf("Percentual de pessoas com idade entre 18 e 35: %.2f%%\n", (countIdade18a35 * 100.0) / TOTAL_HABITANTES);

    return 0;
}
//46. Pesquisa de características físicas
c
Copiar
Editar
#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade, maiorIdade = 0, contCondicao = 0;

    for (int i = 0; i < 500; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Sexo (M/F): "); scanf(" %c", &sexo);
        printf("Olhos (A/V/C): "); scanf(" %c", &olhos);
        printf("Cabelos (L/C/P): "); scanf(" %c", &cabelos);
        printf("Idade: "); scanf("%d", &idade);

        if (idade > maiorIdade) maiorIdade = idade;

        if (sexo == 'F' && idade >= 18 && idade <= 35 && olhos == 'V' && cabelos == 'L')
            contCondicao++;
    }

    printf("Maior idade do grupo: %d\n", maiorIdade);
    printf("Qtd. de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n", contCondicao);
    return 0;
}
//47. Cálculo de bônus para clientes
c
Copiar
Editar
#include <stdio.h>

int main() {
    char nome[100];
    float valorCompras, bonus;

    for (int i = 0; i < 150; i++) {
        printf("Cliente %d:\n", i+1);
        printf("Nome: "); scanf(" %[^\n]", nome);
        printf("Valor das compras: R$ "); scanf("%f", &valorCompras);

        if (valorCompras < 500000)
            bonus = valorCompras * 0.10;
        else
            bonus = valorCompras * 0.15;

        printf("Cliente: %s - Bônus: R$ %.2f\n", nome, bonus);
    }

    return 0;
}
//48. Conceito final com uso do comando CASO (switch)
c
Copiar
Editar
#include <stdio.h>

int main() {
    int matricula;
    float nota;

    for (int i = 0; i < 75; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Matrícula: "); scanf("%d", &matricula);
        printf("Nota final: "); scanf("%f", &nota);

        printf("Matrícula: %d - Nota: %.2f - Conceito: ", matricula, nota);

        switch ((int)nota) {
            case 9: case 10: printf("A\n"); break;
            case 7: case 8: printf("B\n"); break;
            case 5: case 6: printf("C\n"); break;
            default: printf("D\n"); break;
        }
    }

    return 0;
}
//49. Fatorial de um número
c
Copiar
Editar
#include <stdio.h>

int main() {
    int n, fat = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        fat *= i;

    printf("%d! = %d\n", n, fat);
    return 0;
}
//50. Potência X^Y
c
Copiar
Editar
#include <stdio.h>

int main() {
    int x, y;
    long long resultado = 1;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    for (int i = 0; i < y; i++)
        resultado *= x;

    printf("%d elevado a %d = %lld\n", x, y, resultado);
    return 0;
}