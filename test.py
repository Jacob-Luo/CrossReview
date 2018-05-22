def my_fun(b):
    """This is my function document strings,    
        similiar to comments but can be exported to __doc__
        And I used this function to verify the args change"""
    b[0] = b[0]*b[0]
    return b

if __name__ == "__main__":
    import sys
    print("print script name: " + sys.argv[0])
    print("my function docmentation:")
    print(my_fun.__doc__)
    a = [5,2]
    print(my_fun(a))
    print(a)