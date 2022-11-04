# Singly Linked Lists
## Objectives
- When & why would you use linked lists vs arrays
- How to build and use linked lists

## Data Structure to Use for Project
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Environment
- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 9.3.0
- Style guidelines: [Betty Style](https://github.com/holbertonschool/Betty/wiki)

## Contributor
Foster
