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

    participant  Source Code
    participant  branche
    actor PG1


    loop 
        Source Code -) branche: Creating a feature  
        loop coding
            Source Code -)branche: pull 
            branche -)PG1: checkOut    
            PG1 -)PG1: Commit
            PG1 -) branche:push 
        end

        Note over Source Code,branche:merge(PR)     
        branche --) Source Code:  
        Source Code -)branche: delete branche  
       
    end     

