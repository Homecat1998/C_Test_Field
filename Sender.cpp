#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/time.h>

#include "Sender.hpp"

#define DEFAULT_PORT 5132
#define DEFAULT_LOOP "127.0.0.1"

using namespace std;

int Server::init_socket(){
    serv_sock = socket(AF_INET, SOCK_STREAM, 0);
    // AF_INET: IPV4
    // SOCK_STREAM
    // UDP Protocol

    return serv_sock;
}

int Server::bind_socket(char *addr, int &port){

    //set up addr and port
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;  //AF_INET: IPV4
    inet_aton(addr, &serv_addr.sin_addr);
    //serv_addr.sin_addr.s_addr = inet_addr();  //IP addr
    serv_addr.sin_port = htons(port);  //port
    
    return bind(serv_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

}

void Server::sending(){

    time_t* timer;
    time(timer);
    message.index = 0;
    message.index = *(long *)timer;

    while (!exit_bit){
        
    }
}

Server::Server(char *addr, int &port){

    // call init_server
    status = Server::init_socket();
    step++;

    if (status < 0){
        cout << "Some fatal issue happened at step: " << step << endl;
        exit(status);
    } else {
        cout << "Socket intialized! " << endl;
    };

    status = Server::bind_socket(addr, port);
    step ++;

    if (status < 0){
        cout << "Some fatal issue happened at step: " << step << endl;
        exit(status);
    } else {
        cout << "Bind succeed!" << endl;
    };

}

Server::~Server(){
    cout << "Server destroyed! " << endl;
}


int main(){

    string address = "127.0.0.1";
    int port = 5132;

    Server Server((char *)&address, port);

    time_t* timer;
    time(timer);

    cout << *(long *)timer << endl;
    //send to receiver
    //char str[] = "Hello World!";
    //write(clnt_sock, str, sizeof(str));
   
    //close the socket
    //close(clnt_sock);
    //close(serv_sock);

    return 0;
}