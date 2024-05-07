以下是匯整收集到的分支 ( branch )應用情境，請各位看一下，是否有要調整或不清楚的部份

•	Master 分支 ( branch )  
o	用來存放穩定、是隨時可上線的版本。  
o	這個分支的來源只能從別的分支合併過來，不會直接在上面修改內容 Commit 到這個分支。  
o	因為是穩定版本，通常會在這個分支上的 Commit 上打上 版本號標籤，如：v1.1.6  
•	Develop 分支  
o	這個分支是所有開發的基礎分支，當要新增或修改功能的時候，所有的 Feature 分支，會從這個分支切出去。   
o	當 Feature 分支的功能完成後，也都會合併回來這個分支。進行系統測試(ST,System Test)與系統整合測試(SIT,System integration testing)  
o	Feature 分支的功能完成，是指最低限度，至少要能執行。  
•	Hotfix 分支  
o	當線上(正式環境)發生緊急問題的時候，會從 Master 分支開一個 Hotfix 分支出來進行修復。  
	因為 Develop 分支的功能可能尚在開發中與測試中，要從這裡切出去修再合併回 Master 分支，會造成程式誤上線。  
o	Hotfix 分支修復完成之後，會合併回 Master 分支，也同時會合併一份到 Develop 分支。  
	避免造成 Develop 分支完成並且合併回 Master 分支的時候，那個問題就又再次出現了。  
•	Release 分支  
o	當認為 Develop 分支夠成熟了，就可以把 Develop 分支合併到 Release 分支，在這邊算是上線前的最後測試，使用者驗收測試(UAT, User Acceptance Testing )。  
o	測試完成後，Release 分支將會同時合併到 Master 以及 Develop 這兩個分 支上。  
	Master 分支是上線版本，而再合併回 Develop 分支的目的，是因為可能在 Release 分支上 還會測到並修正一些問題，所以需要跟 Develop 分支同步，免得之後的版本又再度出現同樣的 問題。  
•	Feature 分支  
o	當要開始新增或修改功能的時候，就是使用 Feature 分支的時機。Feature 分支都是從 Develop 分 支來的，完成之後會再併回 Develop 分支。  
o	該分支由開發人員自行控管，檔案Commit時機點，視團隊工作管理而定，如：  
	情境1：只Commit已在進行UT中的版本  
	情境2：下班前，將手上所有檔案版本Commit到Server,包含開發中版本，供  
	以便其他人接手持續開發。  
	視為工作進度回報一環。  
