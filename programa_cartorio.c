#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�es
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() // fun��o respons�vel por cadastrar os usu�rios no sistema
{
	// in�cio da cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string

	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strng
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,","); // salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); //coletando inform��o do usu�rio
	scanf("%s",nome); //%s refere-se a string
	
	file = fopen(arquivo,"a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,nome); // salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,","); // salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); //coletando inform��o do usu�rio
	scanf("%s",sobrenome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,sobrenome); // salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,","); // salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //coletando inform��o do usu�rio
	scanf("%s",cargo); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa escrever
	fprintf(file,cargo); // salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	system("pause"); // Pausa a execu��o do programa e espera que o usu�rio pressione qualquer tecla para continuar
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	// in�cio da cria��o de vari�veis/string	
	char cpf[40];
	char conteudo[100];
	// final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser consultado: "); //coletando informa��o do usu�rio
	scanf("%s",cpf); //%s refere-se a string
  	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); // tenta abrir o arquivo com o nome contido em CPF para leitura
  	
	if(file == NULL) //significa que houve um erro ao tentar abrir o arquivo
{
	printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");// Mensagem de erro se o arquivo n�o for encontrado
}
	
	while(fgets(conteudo, 100, file) != NULL)
{
	printf("\n Essas s�o as informa��es do usu�rio: "); // Exibe uma mensagem no console informando que as informa��es do usu�rio ser�o exibidas a seguir
	printf("%s", conteudo); // Imprime o conte�do lido do arquivo no console
	printf("\n\n"); // Adiciona duas novas linhas no console para espa�amento visual
}
  	
	system ("pause"); // Pausa a execu��o do programa e espera que o usu�rio pressione qualquer tecla para continuar
	
	
}

int deletar()
{
	// in�cio da cria��o de vari�veis/string
	char cpf[40];
	// final da cria��o de vari�veis/string
	
	printf("Digite o CPF do usu�rio a ser deletado: "); //coletando informa��o do usu�rio
	scanf("%s",cpf); //%s refere-se a string
	
	remove(cpf); // Remove o arquivo cujo nome � armazenado na vari�vel 'cpf'
	
	FILE *file; // Declara um ponteiro 'file' do tipo 'FILE' para manipular o arquivo
	file = fopen(cpf, "r"); // Abre o arquivo cujo nome � armazenado na vari�vel 'cpf' para leitura
	
	if(file == NULL); // Verifica se o arquivo n�o p�de ser aberto
	
	{
		printf("O usu�rio n�o se encontra no sistema! \n"); // Exibe uma mensagem no console informando que o usu�rio n�o foi encontrado no sistema
		system ("pause"); // Pausa a execu��o do programa e espera que o usu�rio pressione qualquer tecla para continuar
		
	}
	
}

int main()  // Fun��o principal do programa onde a execu��o come�a
{
	int opcao=0; // Definindo vari�veis
	int x=1; // Declara uma vari�vel inteira 'x' e a inicializa com o valor 1
	
	for(x=1;x=1;) // Inicia um loop infinito, pois a condi��o 'x == 1' sempre � verdadeira
	
	{
	
		system("cls"); // Limpa a tela do console para que o pr�ximo conjunto de informa��es possa ser exibido sem interfer�ncia
		
		setlocale(LC_ALL, "Portuguese"); // Definindo linguagem
	
			printf("### Cart�rio Lucy Cordeiro de Campos ### \n\n"); // In�cio do menu
			printf("Escolha a op��o desejada do menu: \n\n");
			printf("\t1 - Registrar nomes\n");
			printf("\t2 - Consultar nomes\n");
			printf("\t3 - Deletar nomes\n\n"); 
			printf("Op��o: "); // Fim do menu
	
		scanf("%d", &opcao); // armazenando as escolhas do usu�rio
	
		system("cls"); // Limpa a tela do console para que o pr�ximo conjunto de informa��es possa ser exibido sem interfer�ncia
		
		switch(opcao) //in�cio da sele��o do menu
		{
			case 1: // Executa a fun��o 'registro()' se a op��o escolhida for 1
			registro(); // chamada de fun��es
			break; ; // Sai do bloco 'switch' ap�s executar a fun��o 'registro()'
			
			case 2: // Executa a fun��o 'registro()' se a op��o escolhida for 2
			consultar(); // chamada de fun��es
			break; // Sai do bloco 'switch' ap�s executar a fun��o 'registro()'
			
			case 3: // Executa a fun��o 'registro()' se a op��o escolhida for 3
			deletar(); // chamada de fun��es
			break;// Sai do bloco 'switch' ap�s executar a fun��o 'registro()'
			
			default: // Exibe mensagem de op��o inv�lida
			printf("Op��o inv�lida!\n"); // Exibe uma mensagem no console informando que a op��o escolhida � inv�lida
			system("pause"); // Pausa a execu��o do programa e espera que o usu�rio pressione qualquer tecla para continuar
			break; // Sai do bloco 'switch' ap�s executar a fun��o 'registro()'
			//fim da sele��o	
			
		}
	
		
	
	}
}
