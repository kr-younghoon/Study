# UDP Broadcast callee.py
import socket
host = ""
port = 37021
u = socket.socket(family=socket.AF_INET, type = socket.SOCK_DGRAM, proto=socket.IPPROTO_UDP)
u.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)
u.bind((host, port))
print("Answer to caller")
while True:
	c, addr = u.recvfrom(1024)
	print("Message from server {}".format(addr))
	u.sendto(b"receive message", addr)