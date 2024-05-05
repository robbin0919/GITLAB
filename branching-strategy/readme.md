版本1  --> C  
版本2  --> N
# 差異
* branch定義  
  * 版本1：
  * 版本2：
    * master:正式環境版本，可部署正式環境，永久保留
    * develop：最新版，可進行測試版，永久保留
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
        * 分支時機，無法彈性調整
* Feature branch生命週  
  * 版本1：最少要到修改需求上線才會刪除，會重覆使用
  * 版本2：程式只要merge(PR)執行完成，需執行刪除，不會重覆使用，若需再修改，以最新的develop版本，再建立分支。
* 開發人員 