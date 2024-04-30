```mermaid
  %%{init: { 'logLevel': 'debug', 'theme': 'default' } }%%
      gitGraph
      commit
      branch develop
      checkout develop
      commit
      branch Feature/A01
      commit
      checkout develop
      branch Feature/A02
      commit
      checkout  Feature/A01
      commit
      checkout develop
      merge Feature/A01
      checkout  Feature/A02
      commit
```      