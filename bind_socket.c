#include <sys/socket.h>

struct sockaddr_in address;
const int PORT = 8080; // the port we're using

// htonl converst a long to a network representation
// htons converts a short integer to a network representation

memset((char *)&address, 0, sizeof(address));
address.sin_family = AF_INET;
address.sin_addr.s_addr = htonl(INADDR_ANY);
address.sin_port = htons(PORT);

if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
{
  perror("bind failed");
  return 0;
}
