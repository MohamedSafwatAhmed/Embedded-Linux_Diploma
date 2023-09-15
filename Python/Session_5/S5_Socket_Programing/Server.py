'Chat Room Connection - Client-To-Client'
import threading
import socket
host = '127.0.0.3'
port = 59000
print("server")
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind((host, port))
server.listen()
clients = []
aliases = []


def broadcast(message):
    for client in clients:
        client.send(message)


## Function to handle clients'connections
def handle_client(client):
    while True:
            message = client.recv(1024)
            broadcast(message)


## Main function to receive the clients connection
def receive():
    #msg={"id":"XYZ","Value":385,"Type":"Temperature"}
    while True:
        client, address = server.accept()
        print(f"{address}")
        Temp=client.recv(1024)
        Temp=int(Temp.decode('utf-8'))
        print('{"id":"XYZ","Value":%d,"Type":"Temperature"}'%Temp)
        msg="I got the Message"
        client.send(msg.encode('UTF-8'))
        thread = threading.Thread(target=handle_client, args=(client,))
        thread.start()


if __name__ == "__main__":
    receive()