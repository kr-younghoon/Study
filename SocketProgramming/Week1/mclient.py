# mclient.py
import socket
host = "127.0.0.1"
port = 8080
c = socket.socket(socket.AF_INET,
					socket.SOCK_STREAM)
c.connect((host, port))
c.sendall(bytes("This is from client", 'UTF-8'))
while True:
	in_data = c.recv(1024)
	print("From Server :", in_data.decode())
	out_data = input()
	c.sendall(bytes(out_data, 'UTF-8'))
	if out_data == 'bye':
		break
c.close()