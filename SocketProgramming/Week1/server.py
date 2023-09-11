# server.py
import socket
s = socket.socket()
host = socket.gethostname()
port = 2222
s.bind((host, port))
s.listen(50)
print('Server start')
while True:
	c, addr = s.accept()
	print('Got connection from', addr)
	c.send(b'Thank you for connecting')
	c.close()
s.close()
