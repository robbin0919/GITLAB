A successful Git branching model  
https://nvie.com/posts/a-successful-git-branching-model/  

https://mermaid.js.org/syntax/sequenceDiagram.html  




```mermaid
 sequenceDiagram
    autonumber

    master-) develop:Creating a feature
     loop coding\ST\SIT
    develop-)Feature: Creating a feature  
    actor PG1
    Feature -)PG1: checkOut
    loop coding
    PG1 -)PG1: Commit
    end
    PG1 -) Feature:push 
    Feature -)develop: merge
    develop-)develop: ST/SIT  
    end     
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
    Feature2 -) Release:merge 
    end
    Release --)master: merge
    Release --)develop: merge
   
``` 

 
  
