# -*- coding: utf-8 -*-
#
class Node:
    def __init__(self, data):
        self.data = data
        self.nextNode = None
    def printNode(self, node):
        print(node.data)
        if node.nextNode is not None:
            node.printNode(node.nextNode)
        else: 
            return
        
class PlinkedList:
    def __init__(self):
        self.rootNode = None
    def addNode(self, data):   
        if self.rootNode==None:
            self.rootNode = Node(data)  
        else:
            curNode = self.rootNode
            preNode = self.rootNode
            while curNode is not None:
                preNode = curNode
                curNode = curNode.nextNode
            preNode.nextNode = Node(data)   
    def printNodes(self):
        self.rootNode.printNode(self.rootNode)
    def deleteNode(self, data):
        if(self.rootNode.data == data) :
            self.rootNode = self.rootNode.nextNode
        else:
            curNode = self.rootNode
            preNode = self.rootNode
            while curNode.data != data:
                preNode = curNode
                curNode = curNode.nextNode
                if curNode is None:
                    return
            preNode.nextNode = curNode.nextNode

if __name__ == "__main__":
    ll = PlinkedList()
    print("\n***Adding some nodes***")    
    ll.addNode("The first added node.")    
    ll.addNode("The second added node.")    
    ll.addNode("The third added node.")    
    ll.addNode("The forth added node.")    
    ll.addNode("The fifth added node.")   
    ll.printNodes() 

    print("\n***Deleted some nodes***")
    ll.deleteNode("The second added node.")
    ll.deleteNode("The forth added node.")
    ll.printNodes()

    
