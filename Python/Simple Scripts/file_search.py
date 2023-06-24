import os

def search():
    field = input("Input File Name: ")
    if os.path.exists(field):
        print("File Found")
    else:
        print("File Not Found")

search()