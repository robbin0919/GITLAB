A successful Git branching model  
https://nvie.com/posts/a-successful-git-branching-model/  

https://mermaid.js.org/syntax/sequenceDiagram.html  




```mermaid
 sequenceDiagram
    autonumber

    master-) develop:01
    develop-)Feature: Creating a feature  
    actor PG1
    Feature -)PG1: checkOut
    loop coding
    PG1 -)PG1: Commit
    end
    PG1 -) Feature:push 
    Feature -)develop: merge     
    develop--)Release: Creating a Release
   loop UAT 
    Release -)Release: TEST

    actor PG2
    Release-)Feature2: Creating a feature  
    Feature2 -)PG2: checkOut
    loop coding
    PG2 -)PG2: Commit
    end
    PG2 -) Feature2:push 
    PG2 -) Release:merge 
    end
    Release --)master: merge
    Release --)develop: merge
   
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