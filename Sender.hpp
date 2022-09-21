#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/time.h>

using namespace std;

struct data_pack{
    int index;
    long timestamp;
};

class Server {
    
    public:
        Server(char *addr, int &port);
        ~Server();

    private:
        struct sockaddr_in serv_addr;
        struct sockaddr_in clnt_addr;
        int serv_sock;
        int status;
        int step;
        int exit_bit;

        data_pack message;

        int init_socket();
        int bind_socket(char *addr, int &port);
        void sending();



};
