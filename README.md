# Otimização de Reativos em Sistema de 3 Barras

Este projeto apresenta um programa desenvolvido em **linguagem C** para resolver um problema simples de **otimização de potência reativa em um sistema elétrico de 3 barras**.

O objetivo é determinar a quantidade de potência reativa fornecida pelos geradores G1 e G2 para atender uma demanda de **100 MVAr**, buscando minimizar as perdas do sistema.

## Modelo do problema

O sistema possui:

* **Barra 1:** Gerador G1
* **Barra 2:** Gerador G2
* **Barra 3:** Carga
* **Demanda:** 100 MVAr

Limites dos geradores:

```text
0 ≤ Q1 ≤ 70 MVAr
0 ≤ Q2 ≤ 60 MVAr
```

A restrição de atendimento da demanda é:

```text
Q1 + Q2 ≥ 100
```

A função objetivo utilizada para calcular as perdas é:

```text
Ploss = 0,02 × Q1 + 0,05 × Q2
```

O programa busca a combinação de Q1 e Q2 que atende à demanda com a **menor perda**.

## Como o programa funciona

O algoritmo testa todas as possibilidades de geração de potência reativa:

1. Varia Q1 entre 0 e 70 MVAr.
2. Varia Q2 entre 0 e 60 MVAr.
3. Verifica se a demanda de 100 MVAr é atendida.
4. Calcula as perdas para cada combinação válida.
5. Armazena a combinação que apresenta a menor perda.
6. Exibe a solução encontrada.

## Exemplo de resultado

```text
=====================================
 OTIMIZACAO DE REATIVOS - 3 BARRAS
=====================================

Gerador G1:
Q1 = 70 MVAr

Gerador G2:
Q2 = 30 MVAr

Atendimento da demanda:
Q1 + Q2 = 100 MVAr

Perdas minimas:
Ploss = 2.90 MW
```

## Tecnologias utilizadas

* Linguagem C
* Compilador GCC
* Programação Estruturada
* Otimização por busca exaustiva
* Conceitos de sistemas elétricos de potência

## Objetivo do projeto

O projeto foi desenvolvido para praticar a aplicação de **técnicas de otimização em sistemas elétricos**, utilizando programação em C para encontrar uma solução que minimize as perdas de potência reativa.

## Como executar

Compile o programa com o GCC:

```bash
gcc reativos.c -o reativos
```

Execute o programa:

```bash
./reativos
```

No Windows:

```bash
reativos.exe
```

## Autor

Projeto desenvolvido como atividade de estudo em **Programação, Otimização e Sistemas Elétricos de Potência**.
