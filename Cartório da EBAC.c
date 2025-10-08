#include <stdio.h> //biblioteca de comunicaçã com o usuario
#include <stdlib.h> //biblioteca de de alocação de espaço de memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> // biblioteca responsavel por cuidar das srings

int registro()//inicio da função registrar
{
	//criando as variaveis/string
	
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
    //fim das variaveis/strings
    
    printf("\n\tVocê escolheu cadastrar CPF! \n\n");// informando na tela a escolha do usuário
    
	printf("Digite o CPF a ser cadastrado:\n\n CPF: ");//solicitando a colete de dados "cpf"
    scanf("%s", cpf);//coletando e salvando os dados informados "cpf"
    
    strcpy(arquivo, cpf); // responsavel por copiar os valores da string
    
    FILE *file; // cria o arquivo
    file = fopen(arquivo, "w"); // cria o arquivo
    fprintf(file,"CPF:"); //apresentando para o usuário o 'cpf' na tela de consulta
    fprintf(file,cpf); // salva o valor da variaval
    fclose(file); // fecha o arquivo
    
    file = fopen(arquivo, "a"); // atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file,"\t"); //separando com a espaço
	fclose(file);//fechando o arquivo
	
	printf("\nDigite o nome a ser cadastrado: \n\n Nome: ");//solicitando a colete de dados "nome"
	scanf("%s", nome);//coletando e salvando os dados informados "cpf
	
	file = fopen(arquivo, "a");// atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file,"Nome:");//apresentando para o usuário o 'nome' na tela de consulta
	fclose(file);// fecha o arquivo
		
	file = fopen(arquivo, "a");// abrindo o arquivo e atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file, nome);// salva o valor da variaval
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");// abrindo o arquivo e atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file,"\t");//separando com a espaço
	fclose(file);// fecha o arquivo
	
	
	printf("\nDigite o sobrenome a ser cadastrado: \n\n Sobrenome: ");//solicitando a colete de dados "sobrenome"
	scanf("%s", sobrenome);//coletando e salvando os dados informados "cpf
	
	file = fopen(arquivo, "a");// atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file,"Sobrenome:");//apresentando para o usuário o 'sobrenome' na tela de consulta
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");// abrindo o arquivo e atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file, sobrenome);// salva o valor da variaval
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");// abrindo o arquivo e atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file,"\t");//separando com a espaço
	fclose(file);// fecha o arquivo
	
	
	printf("\nDigite o cargo a ser cadastrado: \n\n Cargo: ");//solicitando a colete de dados "cargo"
	scanf("%s", cargo);//coletando e salvando os dados informados "cargo"
	
	file = fopen(arquivo, "a");// atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file,"Cargo:");//apresentando para o usuário o 'sobrenome' na tela de consulta
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");// abrindo o arquivo e atrvez do "a" atualizar uma informação dentro do arquivo
	fprintf(file,cargo);// salva o valor da variaval
	fclose(file);// fecha o arquivo
	
	printf("\nCadastro concluido com sucesso.\n\n ");// informando na tela para o usuário "cadastro comcluido"
	
	system("pause");//pausando o sistema após a escolha da opção selecionada... fim da função cadastrar registro
	   
}

int consulta()//inicinado a função de consultar
{
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	//criando as variaveis/string

    char cpf[40];
	char conteudo[200];
	
	//fim das variaveis/strings
	
	printf("\n\tVocê escolheu consultar nomes: \n\n");// informando na tela a escolha do usuário
	
	printf("Digite o CPF a ser consultado:\n\n CPF: ");//solicitando os dados a serem consultados "cpf"
	scanf("%s",cpf);//aramazenando e selecionando os dados a serem consultados
	
	FILE *file;//criando o arquivo
	file = fopen(cpf,"r"); //abrindo e lendo o arquivo cpf "r"
	
	if(file == NULL) // identificando arquivo não encontrado
    {
	   printf("não foi possivel abrir o arquivo, não localizado. \n\n");//informando para o usuário na tela que o arquivo não foi localizado
    }
    
    while(fgets(conteudo, 200, file) != NULL) //função respondaval por buscar  as informações localizada na variavel/string "conteudo"
    {
    	printf("\nEssas são as informações do usuário: \n ");//informando na tela para o usuário as informaçõe localizadas na consulta
    	printf("%s",conteudo);//salvando os dados encontrados na variavel/string "conteudo"
    	fclose(file);//fechando o arquivo
    	printf("\n\n");//pulando linhas
    	
	}
	
	system("pause");//pausando o sistema após a escolha da opção selecionada... fim da função de consultar

}

int deletar()//inicinado a função de deletar
{
    //criando as variaveis/strings
    
    char cpf[40];
    
    //finalizando as variaveis//strings
    
    printf("\n\tVocê escolheu deletar CPF: \n\n");// informando na tela a escolha do usuário
    
    printf("Digite o CPF do usuário a ser deletado: ");//solicitando os dados a serem deletados "cpf"
    scanf("%s",cpf);//armazenando os dados a serem deletados 'cpf'
    
    remove(cpf);//deletando o 'cpf' selecionado
    
    FILE *file;//criando o arquivo
    file = fopen(cpf,"r");//abrindo e lendo o arquivo "r"
    
    if(file == NULL)//identificando o arquivo "=="
    {
    	printf("O usuário não se encontra no sistema!.\n");
    	system("pause");//pausando o sistema após a escolha da opção selecionada... fim da função de deletar
	}
    
}



int main()
{
	int opcao=0; // definindo variaveis
	int laco=1;
	
	for(laco=1;laco=10;)
    {
	
	    system("cls"); //
	
	    setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	    printf("\t### Cartório da EBAC ###\n\n"); // inicio do menu
	    printf("\tEscolha a opção desejada do menu:\n\n");
	    printf("\t1 - Registar  Nomes\n");
	    printf("\t2 - Consultar Nomes\n");
	    printf("\t3 - Deletar   Nomes\n\n");
	    printf("\t4 - Sair do sistema\n\n");
	    printf("escolha a opção:"); //fim do menu
	
        scanf("%d", &opcao); //armazenando a escolha do usuario
    
        system("cls"); // comando usado para limpar a tela do console, 
	     //ele envia o comando cls (clear screen) para o prompt de comando do Windows, que limpa a tela do console.
    
        switch(opcao) // inicio da seleção
		{
			case 1: //chamando a função registar cpf
			registro();
			break;	
			
			case 2: //chamando a função consultar cpf
			consulta();
			break;
			
			case 3: //chamando a função deletar cpf
			deletar();
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;	
			
			default: //chamando a função opção não disponivel
			printf("Essa opção não está disponivel!\n\n");
			system("pause");
			break;	
				
		}    
    
    
   }	
}

