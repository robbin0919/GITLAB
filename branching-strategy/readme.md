版本1  --> C  
版本2  --> N
# 差異
* branch定義  
  * 版本1：
    * master:已上線版本，develop備份，永久保留
    * develop：已上線版本，永久保留
    * Feature：
      * 開發中的程式版本，merge(PR)執行完成不會立即刪除，該修改需求未上線結案前，重覆使用。
      * 分支來源：  
        * 處理正式環境的Bug，從Master
        * 處理Release（ST/SIT/UAT）測試的問題，使用原本用來修改程式的Feature branch
        * 其他，從develop
    * hotfix
        * 分支來源：從develop
    * Release
        * 分支來源：從develop
        * 分支完成後，再將要Release（ST/SIT/UAT）的Feature branch，merge進該Release，可彈性調整
  * 版本2：
    * master:正式環境版本，可部署正式環境，永久保留
    * develop：最新版，可進行測試版（ST/SIT），永久保留
    * Feature：
      * 開發中的程式版本，每次程式修改的依據，merge(PR)執行完成就刪除，不重覆使用。
      * 分支來源：  
        * 處理正式環境的Bug，從Master
        * 處理Release（UAT）測試的問題，從Release
        * 其他，從develop
    * hotfix
        * 分支來源：從Master
    * Release
        * 分支來源：從develop
        * 分支當下，就是 Release所包含要測試的程式，是按照merge順序而定，無法彈性調整，要注意merge順序。
* Feature branch生命週  
  * 版本1：最少要到修改需求上線才會刪除，會重覆使用
  * 版本2：程式只要merge(PR)執行完成，需執行刪除，不會重覆使用，若需再修改，以最新的develop版本，再建立分支。
* 待討論
  * 分支（Feature branch）建立，那個角色來告知開發人員？或是開發人員自行判斷?
  * 開發人員提出merge(PR)，申請程式merge，由那個角色處理?
  * 如何讓處理PR(Pull requests)的人，知道每個PR的處理順序 