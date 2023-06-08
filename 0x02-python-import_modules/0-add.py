#!/usr/bin/python3
def main():
    operator_module = __import__('operator')
    main = operator_module.add
    a = 1
    b = 2
    result = main(a, b)
    print(f"{a} + {b} = {result}")
if __name__=='__main__':
  main()

