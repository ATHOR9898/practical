Aim: Socket programming using TCP & UDP.

Theory

What is TCP?
TCP stands for Transmission Control Protocol.
It is used when communication between two computers should be secure and reliable.
It is one of the most widely used protocols over the TCP/IP network.
  
What is UDP?
UDP stands for User Datagram Protocol.
Its working is similar to TCP.
It is often used for sending and receiving messages.
The main difference is that UDP is connectionless in nature.
UDP is faster than TCP, but it does not provide assurance of packet delivery.
  
Socket Programming
Sockets allow communication between two different processes on the same or different machines.
Sockets enable applications to communicate using standard mechanisms built into network hardware and operating systems.
A socket represents a single connection between exactly two pieces of software.
Libraries implementing sockets use IP as the Internet Protocol and TCP for streams.

Primitives Used in Sockets

SOCKET – creates a new communication endpoint.
BIND – attach a local address to a socket.
LISTEN – allow the socket to accept connections.
ACCEPT – block the caller until a connection arrives.
CONNECT – actively attempt to establish a connection.
SEND – send some data over a connection.
RECEIVE – receive data from a connection.
CLOSE – release the connection.


Conclusion
Socket programming enables communication between two processes using TCP or UDP protocols.
TCP provides reliable communication, while UDP provides faster, connectionless data transfer.
