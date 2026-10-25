*Este projeto foi criado como parte do currículo da 42 por edmsegre.*

# Libft

## Descrição

A **Libft** é uma biblioteca pessoal desenvolvida em linguagem C como parte do currículo da 42.

O objetivo deste projeto é compreender, através da implementação própria, o funcionamento de diversas funções fundamentais da biblioteca padrão da linguagem C, além de desenvolver funções adicionais úteis para projetos futuros.

Ao longo do projeto, foram implementadas funções relacionadas com:

* Manipulação e verificação de caracteres;
* Manipulação de strings;
* Manipulação de memória;
* Conversão de tipos e números;
* Alocação dinâmica de memória;
* Escrita em descritores de ficheiros;
* Manipulação de listas ligadas.

A biblioteca foi desenvolvida seguindo as regras e restrições definidas no subject da Libft, incluindo a compilação com `-Wall -Wextra -Werror`, a utilização de um `Makefile` e a criação da biblioteca estática `libft.a`.

## Funcionalidades

A Libft está dividida em três partes principais, cada uma com um conjunto específico de funções destinadas à manipulação de caracteres, strings, memória, conversões, entrada/saída e listas ligadas.

### Parte 1 — Funções da Libc

Nesta primeira parte foram reimplementadas várias funções presentes na biblioteca padrão da linguagem C. As funções utilizam o prefixo `ft_` e procuram reproduzir o comportamento das suas equivalentes originais.

#### Verificação e conversão de caracteres

* `ft_isalpha` — verifica se um caractere é uma letra.
* `ft_isdigit` — verifica se um caractere é um dígito.
* `ft_isalnum` — verifica se um caractere é uma letra ou um dígito.
* `ft_isascii` — verifica se um caractere pertence ao conjunto ASCII.
* `ft_isprint` — verifica se um caractere é imprimível.
* `ft_toupper` — converte uma letra minúscula para maiúscula.
* `ft_tolower` — converte uma letra maiúscula para minúscula.

#### Manipulação de strings

* `ft_strlen` — calcula o comprimento de uma string.
* `ft_strlcpy` — copia uma string para outra com limite de tamanho.
* `ft_strlcat` — concatena uma string a outra respeitando um limite de tamanho.
* `ft_strchr` — procura a primeira ocorrência de um caractere numa string.
* `ft_strrchr` — procura a última ocorrência de um caractere numa string.
* `ft_strncmp` — compara duas strings até um determinado número de caracteres.
* `ft_strnstr` — procura uma substring dentro de uma string, respeitando um limite de caracteres.
* `ft_strdup` — cria uma cópia dinâmica de uma string.

#### Manipulação de memória

* `ft_memset` — preenche uma determinada área de memória com um valor.
* `ft_bzero` — preenche uma área de memória com zeros.
* `ft_memcpy` — copia uma determinada quantidade de bytes entre áreas de memória.
* `ft_memmove` — copia bytes entre áreas de memória permitindo sobreposição.
* `ft_memchr` — procura um byte específico numa área de memória.
* `ft_memcmp` — compara duas áreas de memória byte a byte.

#### Conversão e alocação de memória

* `ft_atoi` — converte uma representação numérica em string para um inteiro.
* `ft_calloc` — aloca memória para vários elementos e inicializa a memória com zero.

---

### Parte 2 — Funções adicionais

A segunda parte adiciona funções que não fazem parte da `libc` da mesma forma ou que foram desenvolvidas especificamente para ampliar a utilidade da biblioteca.

#### Manipulação de strings

* `ft_substr` — cria uma substring a partir de uma posição inicial e de um tamanho máximo.
* `ft_strjoin` — concatena duas strings numa nova string.
* `ft_strtrim` — remove determinados caracteres do início e do final de uma string.
* `ft_split` — divide uma string em várias strings utilizando um caractere delimitador.
* `ft_itoa` — converte um número inteiro numa string.
* `ft_strmapi` — aplica uma função a cada caractere de uma string e cria uma nova string.
* `ft_striteri` — aplica uma função a cada caractere de uma string, permitindo modificar os caracteres.

#### Escrita em descritores de ficheiros

* `ft_putchar_fd` — escreve um caractere num descritor de ficheiro.
* `ft_putstr_fd` — escreve uma string num descritor de ficheiro.
* `ft_putendl_fd` — escreve uma string seguida de uma quebra de linha.
* `ft_putnbr_fd` — escreve um número inteiro num descritor de ficheiro.

As funções desta parte utilizam principalmente `malloc` para criar novas estruturas de dados e `write` para realizar operações de escrita, de acordo com as especificações do projeto.

---

### Parte 3 — Listas ligadas

A terceira parte da Libft é dedicada à criação e manipulação de listas ligadas.

Para isso, a biblioteca utiliza a seguinte estrutura:

```c
typedef struct s_list
{
    void            *content;
    struct s_list    *next;
} t_list;
```

O campo `content` permite armazenar diferentes tipos de dados através de um ponteiro `void *`, enquanto `next` guarda o endereço do próximo elemento da lista.

#### Criação e inserção de nós

* `ft_lstnew` — cria um novo nó e inicializa o seu conteúdo.
* `ft_lstadd_front` — adiciona um nó no início da lista.
* `ft_lstadd_back` — adiciona um nó no final da lista.

#### Consulta da lista

* `ft_lstsize` — calcula o número de nós existentes na lista.
* `ft_lstlast` — devolve o último nó da lista.

#### Eliminação e limpeza

* `ft_lstdelone` — elimina um nó e o seu conteúdo sem eliminar os nós seguintes.
* `ft_lstclear` — elimina todos os nós de uma lista e liberta a memória utilizada.

#### Iteração e transformação

* `ft_lstiter` — percorre a lista e aplica uma função ao conteúdo de cada nó.
* `ft_lstmap` — percorre a lista, aplica uma função aos conteúdos e cria uma nova lista com os resultados.

A implementação das listas ligadas permite trabalhar com estruturas dinâmicas e reutilizáveis, sendo um conceito importante para projetos posteriores da 42.


## Instruções

### Compilação

Para compilar a biblioteca, basta executar o comando:

```bash
make
```

Este comando compila os arquivos-fonte e cria a biblioteca estática:

```text
libft.a
```

A compilação deve ser realizada utilizando as flags:

```text
-Wall -Wextra -Werror
```
### Comandos do Makefile

O `Makefile` disponibiliza os seguintes comandos:

```bash
make
```

Compila todos os arquivos necessários e cria a biblioteca `libft.a`.

```bash
make clean
```

Remove os arquivos objeto (`.o`) gerados durante a compilação.

```bash
make fclean
```

Remove os arquivos objeto e a biblioteca `libft.a`.

```bash
make re
```

Executa uma limpeza completa e recompila a biblioteca.

### Utilização

Depois de compilar a biblioteca, ela pode ser utilizada em outros projetos em C através do arquivo de cabeçalho:

```c
#include "libft.h"
```

Ao compilar um programa que utiliza a Libft, a biblioteca `libft.a` deve ser incluída na compilação. Por exemplo:

```bash
cc main.c -L. -lft -o programa
```

Onde:

* `main.c` é o arquivo que utiliza as funções da Libft;
* `-L.` indica que a biblioteca está localizada no diretório atual;
* `-lft` indica que deve ser utilizada a biblioteca `libft.a`;
* `-o programa` define o nome do executável gerado.

### Limpeza

Para remover os arquivos gerados durante a compilação, podem ser utilizados:

```bash
make clean
make fclean
```

A biblioteca pode ser recompilada posteriormente utilizando:

```bash
make re
```
## Recursos

Durante o desenvolvimento da Libft, foram consultados diferentes recursos para compreender o funcionamento das funções da linguagem C, os conceitos de manipulação de memória, strings, ponteiros, alocação dinâmica e listas ligadas.

### Documentação e referências

* **Subject oficial da Libft** — utilizado como principal referência para compreender os requisitos, funções, protótipos, comportamentos esperados e regras do projeto.
* **Man pages do sistema** — utilizadas para consultar o comportamento e as especificações das funções da biblioteca C, como:
`man 3 strlen`
`man 3 memcpy`
`man 3 memmove`
`man 3 memcmp`
`man 3 calloc`
`man 3 strdup`...

* **Documentação da linguagem C** — utilizada para reforçar conceitos relacionados com ponteiros, arrays, strings, memória e estruturas.
* **Materiais de estudo sobre C** — utilizados como apoio para compreender conceitos necessários à implementação das funções.

### Inteligência Artificial

A IA foi utilizada como apoio durante o estudo e desenvolvimento de
diferentes partes da Libft, principalmente para:

- Compreender conceitos de ponteiros e endereços de memória;
- Estudar o funcionamento de `memcpy`, `memmove` e `memcmp`;
- Compreender manipulação de strings;
- Analisar conceitos de alocação dinâmica utilizados em `ft_calloc`,
  `ft_strdup`, `ft_substr`, `ft_split` e outras funções;
- Compreender o funcionamento e a manipulação de listas ligadas;
- Identificar e compreender possíveis casos extremos durante os testes.

A utilização da IA teve como objetivo apoiar o processo de aprendizagem e raciocínio, e não substituir a compreensão do funcionamento das implementações.

### Autor

edmsegre

Projeto desenvolvido como parte do currículo da 42, com o objetivo de aprofundar os conhecimentos em linguagem C, manipulação de memória, strings, ponteiros, alocação dinâmica e estruturas de dados.
