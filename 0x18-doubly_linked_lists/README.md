# Doubly Linked Lists
## Objectives
- Knowing what a doubly linked list is
- How to use doubly linked lists
- Start to look for the right source of information without too much help

## Data Structure to Use for Project
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Environment
- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 9.3.0
- Style guidelines: [Betty Style](https://github.com/holbertonschool/Betty/wiki)

## Contributor
Foster
