# Without `if __name__ == "__main__"`

## module.py
```python
# module.py

def main():
    print("Hello from main function in module.py")

main()
```
## main.py
```python
# main.py

import module
```
## Explanation
When you run module.py directly, it prints "Hello from main function in module.py".
When you run main.py, it imports module.py, and main() in module.py is executed immediately, printing "Hello from main function in module.py".
This behavior might be unwanted because we might not want the main() function to run just because the module is imported.