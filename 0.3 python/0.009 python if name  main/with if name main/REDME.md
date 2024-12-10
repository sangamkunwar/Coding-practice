# With `if __name__ == "__main__"`

## module.py
```python
# module.py

def main():
    print("Hello from main function in module.py")

if __name__ == "__main__":
    main()
```
## main.py
```python
# main.py

import module

# To run the main function in module.py, you need to call it explicitly:
module.main()
```
## Explanation
- When you run `module.py` directly, `__name__` is set to `"__main__"`, so main() is executed, and it prints "Hello from main function in module.py".
- When you run main.py, module.py is imported, but main() is not executed automatically. To run main(), you need to call it explicitly as shown in main.py.
## Why Use `if __name__ == "__main__"?`
- **Control Execution:** It allows you to control what gets executed when the file is run directly versus when it is imported.
- **Reusable Code:** Makes your module more reusable, as importing it will not trigger unintended executions.
- **Testing:** Facilitates easier testing by separating the testable functions and main script execution.
## Conclusion
Using `if __name__ == "__main__"` is a good practice in Python programming. It helps you write more modular and maintainable code by distinguishing between the execution of a script as a standalone program and its use as a module in other scripts.

