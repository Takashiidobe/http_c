if (listen(server_fd, 3) < 0)
{
  perror("In listen");
  exit(EXIT_FAILURE);
}

if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0)
{
  perror("In accept");
  exit(EXIT_FAILURE);
}
