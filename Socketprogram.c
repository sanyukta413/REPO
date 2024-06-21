//to create a server

#include<stdio.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>
#include<netinet/in.h>

//to create a socket using "socket" function

int server_socket=socket(AF_INET,SOCK_STREAM,0);

//bind socket to an addres using 'bind' function

struct sockaddr_in_server_address;
server_address.sin_family=AF_INET;
server_address.sin_port=htons(9002);
server_address.sin_addr.s_addr=INADDR_ANY;
bind(server_socket,(struct sockaddr*),&server_address,sizeof(server_address));

//after binding, listening for incoming connections using 'listen' function

listen(server_socket,5);

//once client connects, accept connection using "accept function"

int client_socket=accept(server_socket,NULL,NULL);

//send and receive data using 'send' and 'recv' function

send(client_socket,"Successful connection!",sizeof("Successful connection!"),0);

//close socket once the connection is made

close(server_socket);


//to create a client

int client_socket=socket(AF_INET,SOCK_STREAM,0);

//connect server udsing 'connect' function

struct sockaddr_in_server_address;
server_address.sin_family=AF_INET;
server_address.sin_port=htons(9002);
server_address.sin_addr.s_addr=INADDR_ANY;
connect(client_socket,(struct sockaddr*),&server_address,sizeof(server_address));

//after connecting to server, send and receive data

char server_response[256];
recv(client_socket,&server_response,sizeof(server_response),0);
printf("Server resposne: %s\n",server response);

close(client_socket);














