#include <stdio.h>
#include <stdlib.h>
#define lot_max_estoque 100

void cadastro();
void buscar();

typedef struct {
  int codigo_do_produto;
  char nome_da_marca[100];
  char modelo_produto[100];
  double preco_produto[20];
  char sexo_produto[100];
  int tamanho_do_produto[20], cont, quat_de_produtos;
  char vendedor[10];
} roupas;

roupas estoque[lot_max_estoque];
int qtd_estoque = 0;
int escolha_do_menu(int b);
int code;

int main() {

  int controle;

  while (controle != 3) {

    printf("                     ++++                            \n");
    printf("                   +      +                           \n");
    printf("                  +        +                          \n");
    printf("                 +          +                         \n");
    printf("                +            +                        \n");
    printf("               +              +                       \n");
    printf("  + + + + + + +                + + + + + + +          \n");
    printf("   +                                     +            \n");
    printf("     +           JG     KDIS           +              \n");
    printf("       +    ____________________     +                \n");
    printf("         +                         +                  \n");
    printf("           +                     +                    \n");
    printf("             +                 +                      \n");
    printf("           +                     +                     \n");
    printf("         +                         +                   \n");
    printf("       +                             +                 \n");
    printf("     +                                 +               \n");
    printf("   + + + + + + + + + + + + + + + + + + + +           \n");

    printf(" \n   ----------- JG KIDS -------------\n");
    printf("   ================================= \n");
    printf("   M E N U - D E - E S C O L H A  \n");
    printf("     1 = Cadastro do Produto \n");
    printf("     2 = Busca do Produto \n");
    printf("     3 = Sair do Sistema \n");
    printf("   ================================= \n");
    scanf("%d", &controle);
    system("clear");
    escolha_do_menu(controle);
  }
  return 0;
}

int escolha_do_menu(int b) {

  switch (b) {
    

  case (1):
    cadastro();
    break;
  case (2):
    buscar();
    break;
  case (3):
    b = 3;
    printf("Saindo do sistema...\n");
    break;

  default:
    printf("Não exite opção! \n");
    break;
  }
  return 0;
}

void cadastro() {

  if (code >= 3) {
    printf("Nao e possivel cadastrar novos produtos.\n");

    return;
  }

  
   printf("                     ++++                            \n");
    printf("                   +      +                           \n");
    printf("                  +        +                          \n");
    printf("                 +          +                         \n");
    printf("                +            +                        \n");
    printf("               +              +                       \n");
    printf("  + + + + + + +                + + + + + + +          \n");
    printf("   +                                     +            \n");
    printf("     +           JG     KDIS           +              \n");
    printf("       +    ____________________     +                \n");
    printf("         +                         +                  \n");
    printf("           +                     +                    \n");
    printf("             +                 +                      \n");
    printf("           +                     +                     \n");
    printf("         +                         +                   \n");
    printf("       +                             +                 \n");
    printf("     +                                 +               \n");
    printf("   + + + + + + + + + + + + + + + + + + + +           \n");

roupas (peca_nova);
  printf("Informe o codigo do produto: \n");
  scanf("%d", &peca_nova.codigo_do_produto);
  printf("Informe a marca do produto: \n");
  scanf("%s", peca_nova.nome_da_marca);
  printf("Informe o modelo do prodto: \n");
  scanf("%s", peca_nova.modelo_produto);
  printf("Informe o valor do produto: \n");
  scanf("%lf", &peca_nova.preco_produto[qtd_estoque]);
  printf("Informe para qual é o sexo do produto: \n");
  scanf("%s", peca_nova.sexo_produto);
  printf("Informe o tamanho do produto: \n");
  scanf("%d", &peca_nova.tamanho_do_produto[qtd_estoque]);
  printf("Informe o vendedor do produto: \n");
  scanf("%s", peca_nova.vendedor);
  printf("\n");
  
  for (int i = 0; i < code; i++) {

    if (estoque[i].codigo_do_produto == peca_nova.codigo_do_produto) {
      printf("Ja existe um produto com este codigo.\n");
      return;
    }
  }

  estoque[code] = peca_nova;
  code++;
}

void buscar() {
  int consultar_codigo = 0;
  int achou = 0;
  printf(" _______ \n");
  printf("|       | \n");
  printf("|_______| \n");
  printf("|   |   | \n");
  printf("|___|___| \n");
  printf("Digite o codigo do produto: \n");
  scanf("%d", &consultar_codigo);
  getchar();

  for (int i = 0; i < 5; i++) {
    if (estoque[i].codigo_do_produto == consultar_codigo) {

      printf("\nCodigo do produto: %d \n", estoque[i].codigo_do_produto);
      printf("Marca do produto: %s \n", estoque[i].nome_da_marca);
      printf("Modelo do produto: %s \n", estoque[i].modelo_produto);
      printf("Valor do produto: %2lf \n",
             estoque[i].preco_produto[qtd_estoque]);
      printf("Sexo do produto: %s \n", estoque[i].sexo_produto);
      printf("Tamanho do produto: %d \n",
             estoque[i].tamanho_do_produto[qtd_estoque]);
      printf("Vendedor do produto: %s \n", estoque[i].vendedor);
      achou = 1;
      break;
    }
  }
  if (achou == 0) {
    printf("\nCodido não encontrado! \n");
  }
}