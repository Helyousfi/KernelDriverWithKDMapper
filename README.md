## How to use windbg :
- FILE -> Kernel Debug -> Local -> OK
- !process 0 0 explorer.exe
- .process /p CODE
- .reload /f dxgknl.sys
- https://github.com/hfiref0x/NtCall64/blob/master/Source/NtCall64/tables.h and search NtQueryCompositionSurfaceStatistics (if it has the security cookie don't hook that function! It will result in blue screen)
