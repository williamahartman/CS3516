// William Hartman
// CS3516 Project 1

struct addrinfo* buildAddrInfo(char* port);
int startUpSocket(struct addrinfo* servinfo);
char* receiveFrom(int sockfd);
void sendFile(int sockfd, int filefd);
void send404(int sockfd);
