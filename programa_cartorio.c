#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por regiões
#include <string.h> //biblioteca responsável por cuidar das string

int registro() // função responsável por cadastrar os usuários no sistema
{
	// início da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informação do usuário
	scanf("%s", cpf); //%s refere-se a string

	strcpy(arquivo, cpf); //responsável por copiar os valores das strng
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,","); // salva o valor da variável
	fclose(file); //fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); //coletando informção do usuário
	scanf("%s",nome); //%s refere-se a string
	
	file = fopen(arquivo,"a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,nome); // salva o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,","); // salva o valor da variável
	fclose(file); //fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); //coletando informção do usuário
	scanf("%s",sobrenome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,sobrenome); // salva o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,","); // salva o valor da variável
	fclose(file); //fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //coletando informção do usuário
	scanf("%s",cargo); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,cargo); // salva o valor da variável
	fclose(file); //fecha o arquivo
	
	system("pause"); // Pausa a execução do programa e espera que o usuário pressione qualquer tecla para continuar
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	// início da criação de variáveis/string	
	char cpf[40];
	char conteudo[100];
	// final da criação de variáveis/string
	
	printf("Digite o CPF a ser consultado: "); //coletando informação do usuário
	scanf("%s",cpf); //%s refere-se a string
  	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); // tenta abrir o arquivo com o nome contido em CPF para leitura
  	
	if(file == NULL) //significa que houve um erro ao tentar abrir o arquivo
{
	printf("Não foi possivel abrir o arquivo, não localizado!.\n");// Mensagem de erro se o arquivo não for encontrado
}
	
	while(fgets(conteudo, 100, file) != NULL)
{
	printf("\n Essas são as informações do usuário: "); // Exibe uma mensagem no console informando que as informações do usuário serão exibidas a seguir
	printf("%s", conteudo); // Imprime o conteúdo lido do arquivo no console
	printf("\n\n"); // Adiciona duas novas linhas no console para espaçamento visual
}
  	
	system ("pause"); // Pausa a execução do programa e espera que o usuário pressione qualquer tecla para continuar
	
	
}

int deletar()
{
	// início da criação de variáveis/string
	char cpf[40];
	// final da criação de variáveis/string
	
	printf("Digite o CPF do usuário a ser deletado: "); //coletando informação do usuário
	scanf("%s",cpf); //%s refere-se a string
	
	remove(cpf); // Remove o arquivo cujo nome é armazenado na variável 'cpf'
	
	FILE *file; // Declara um ponteiro 'file' do tipo 'FILE' para manipular o arquivo
	file = fopen(cpf, "r"); // Abre o arquivo cujo nome é armazenado na variável 'cpf' para leitura
	
	if(file == NULL); // Verifica se o arquivo não pôde ser aberto
	
	{
		printf("O usuário não se encontra no sistema! \n"); // Exibe uma mensagem no console informando que o usuário não foi encontrado no sistema
		system ("pause"); // Pausa a execução do programa e espera que o usuário pressione qualquer tecla para continuar
		
	}
	
}

int main()  // Função principal do programa onde a execução começa
{
	int opcao=0; // Definindo variáveis
	int x=1; // Declara uma variável inteira 'x' e a inicializa com o valor 1
	char senhadigitada[10]"a";
	
	printf("### Cartório Lucy Cordeiro de Campos ### \n\n");
	pruntf("Login de administrador!//Digite sua senha: ");
	scanf("%s", senhadigitada);
	
	for(x=1;x=1;) // Inicia um loop infinito, pois a condição 'x == 1' sempre é verdadeira
	
	{
	
		system("cls"); // Limpa a tela do console para que o próximo conjunto de informações possa ser exibido sem interferência
		
		setlocale(LC_ALL, "Portuguese"); // Definindo linguagem
	
			printf("### Cartório Lucy Cordeiro de Campos ### \n\n"); // Início do menu
			printf("Escolha a opção desejada do menu: \n\n");
			printf("\t1 - Registrar nomes\n");
			printf("\t2 - Consultar nomes\n");
			printf("\t3 - Deletar nomes\n\n"); 
		        printf("\t4 - Sair do sistema\n\n"); 
			printf("Opção: "); // Fim do menu
	
		scanf("%d", &opcao); // armazenando as escolhas do usuário
	
		system("cls"); // Limpa a tela do console para que o próximo conjunto de informações possa ser exibido sem interferência
		
		switch(opcao) //início da seleção do menu
		{
			case 1: // Executa a função 'registro()' se a opção escolhida for 1
			registro(); // chamada de funções
			break; ; // Sai do bloco 'switch' após executar a função 'registro()'
			
			case 2: // Executa a função 'registro()' se a opção escolhida for 2
			consultar(); // chamada de funções
			break; // Sai do bloco 'switch' após executar a função 'registro()'
			
			case 3: // Executa a função 'registro()' se a opção escolhida for 3
			deletar(); // chamada de funções
			break;// Sai do bloco 'switch' após executar a função 'registro()'

			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default: // Exibe mensagem de opção inválida
			printf("Opção inválida!\n"); // Exibe uma mensagem no console informando que a opção escolhida é inválida
			system("pause"); // Pausa a execução do programa e espera que o usuário pressione qualquer tecla para continuar
			break; // Sai do bloco 'switch' após executar a função 'registro()'
			//fim da seleção	
			
		}
	
		
	
	}
}
