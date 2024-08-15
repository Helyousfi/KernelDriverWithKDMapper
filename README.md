## How to use windbg :
- FILE -> Kernel Debug -> Local -> OK
- !process 0 0 explorer.exe
- .process /p CODE
- .reload /f dxgknl.sys
