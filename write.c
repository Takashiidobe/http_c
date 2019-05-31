
char buffer[1024] = {0};

int valread = read(new_socket, buffer, 1024);
printf("%s\n", buffer);
if(valread < 0)
  printf("There are no bytes to read");

char * hello = "Hello from the server";
write(new_socket, hello, strlen(hello));
