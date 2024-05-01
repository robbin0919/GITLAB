A successful Git branching model  
https://nvie.com/posts/a-successful-git-branching-model/  

https://mermaid.js.org/syntax/sequenceDiagram.html  

```  mermaid
sequenceDiagram
    master->>John: Hello John, how are you?
    Release-->>Alice: Great!
    develop-)John: See you later!
``` 

 =============================================================================== 

```mermaid
sequenceDiagram
    Alice->>Bob: Hello Bob, how are you ?
    Bob->>Alice: Fine, thank you. And you?
    create participant Carl
    Alice->>Carl: Hi Carl!
    create actor D as Donald
    Carl->>D: Hi!
    destroy Carl
    Alice-xCarl: We are too many
    destroy Bob
    Bob->>Alice: I agree

```