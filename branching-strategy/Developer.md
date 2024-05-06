#版本2  
```mermaid
 %%{
  init: {
    "sequence": {
      "actorFontFamily": "monospace",
      "actorFontWeight": "bold",
      "messageFontFamily": "monospace",
      "messageFontWeight": "bold",
      "noteFontWeight": "bolder"
    }
  }
}%%

 sequenceDiagram
    autonumber
    participant  master
    participant  develop
    participant  Feature
    actor PG1
    participant  Release
    participant  Feature2
    actor PG2

    master -) develop:Creating a branche
    loop coding\ST\SIT
        develop -) Feature: Creating a feature  
        loop coding
            develop -)Feature: pull 
            Feature -)PG1: checkOut    
            PG1 -)PG1: Commit
            PG1 -) Feature:push 
        end

        Note over develop,Feature:merge(PR)     
        Feature --)develop:  
        develop -)Feature: delete feature  
        develop-)develop: ST/SIT  
    end     
    develop-)Release: Creating a Release
