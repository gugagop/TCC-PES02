# TCC-PES02

O sistema consiste em um software que calcula o WCET de forma estática, um simulador que auxilia no cálculo do WCET de forma dinâmica e a ferramenta OTAWA, que fornece uma API com alguns métodos que são utilizados para auxiliar na medição do tempo. 

O software recebe como entrada um código em C e como saída exibe 3 WCET:
- WCET estático (IPET);
- WCET estático (Algoritmo BioInspirado);
- WCET dinâmico;

A seguir segue o modelo genérico do fluxo da solução proposta com a respectiva descrição de cada bloco.	

![alt text](https://github.com/gugagop/TCC-PES02/blob/3c8b2da63fadae54ef8a1916d3ad84360b78f946/docs/block_diagram.png)


# Tutorial Instalação

Para facilitar o uso do software, foi criado um container docker que possui o ambiente da nossa solução já configurado. Sendo assim, a máquina do usuário pode ser windows ou linux, sendo necessário somente o docker engine instalado no windows.

#### 1. Pré Requisitos

Para rodar a nossa solução, é necessário ter a docker engine e docker desktop(windows) instalado no seu ambiente.
Abaixo estão os links de instalação para windows e linux:
Linux:  Install Docker Engine | Docker Docs
Windows: Install Docker Desktop on Windows | Docker Docs

#### 2. Baixando e instalando o container

Os comandos abaixo servem para o terminal do linux e windows.
Obs: No caso do windows, a instalação também poderá ser feita pelo aplicativo docker desktop.
No terminal aberto, digite o comando ‘docker pull brunoarico/otawa’ para baixar a imagem mais recente do software.

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/9922a8cd-5e3b-4480-8bb3-75f22f55f3f4)

Após o termindo do download, exercutar o comando ‘docker image list’ para verificar o ID da imagem instalada, no caso, o ID é 9a830ceb0798.

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/775f4ea9-d1c2-451f-8b8b-55130238b5b9)


Com o número do ID da imagem, chegou a hora de rodar o container do software. Para isso, é necessário utilizar o seguinte comando: 
docker run -d  -v [ DIRETÓRIO PARA ESPELHAMENTO ]:/home/ -ti -d <id_da_imagem>
[DIRETÓRIO PARA ESPALHAMENTO] : É a pasta do ambiente local que será definida para compartilhamento entre a imagem docker e o computador host. Nesse caso, irei usar o caminho D:/biowcet

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/eb323804-074f-4485-a4ff-bac406234e32)


Para verificar se o container foi criado, utilize o comando ‘docker ps -a’

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/805098ab-f281-4c53-ac18-98d48ebf281d)


Por último, caso seja de seu interesse, é possível renomear o container com o comando: ‘docker rename <nome_atual_do_container> <novo_nome>’.

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/ec35e093-2539-4603-b268-8c0dfbb5b14a)


Para entrar dentro do terminal do container, execute o seguinte comando : ‘docker exec -it <nome_do_container> /bin/bash’

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/ac91126a-eab1-4a99-91df-f252c87588fd)


#### 3. Instalando e executando a solução

A solução pode ser clonada do seguinte repositório:  Brunoarico/OTAWA-Studies: My own studies and tests about otawa WCET toolbox (github.com)

A clonagem da solução pode ser feita diretamente no terminal do container ou dentro da pasta que foi criado o link de armazenamento do container com a máquina host.

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/fbfd587d-9f43-4f6b-ba5a-24d5b2d0d193)


Após a copia, navegue pelo terminal até a pasta do projeto e digite o comando make para gerar os arquivos de compilação

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/33c5a790-9148-4922-9dfa-2da56e764a76)


Após executar o comando, será gerado o arquivo de execução biowcet.
Com o arquivo gerado,  utilizar o comando ./owcet <caminho_do_arquivo_da_analise>
Para gerar o wcet.

![image](https://github.com/gugagop/TCC-PES02/assets/22120173/2928e5b7-177f-4ad0-bed8-8da65eab058f)

