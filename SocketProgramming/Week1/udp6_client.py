# UDP IPv6 Client

import socket 
import time
host = "::1" # localhost
port = 5005
s = socket.socket(socket.AF_INET6, # internet
				socket.SOCK_DGRAM) # UDP
i = 0
while True:
	s.sendto("{}".format(i).encode("UTF-8"),(host, port))
	print(i)
	i += 1
	time.sleep(1)