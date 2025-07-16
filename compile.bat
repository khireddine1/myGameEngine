@echo off
echo Compiling...

REM SDL2 paths 
set SDL2_INCLUDE=C:/SDL2-2.32.8/x86_64-w64-mingw32/include
set SDL2_LIB=C:/SDL2-2.32.8/x86_64-w64-mingw32/lib



REM Compile 
gcc -o build\game.exe engine/core/init.c game/main.c -Iengine -I%SDL2_INCLUDE% -L%SDL2_LIB% -lSDL2 -mconsole
REM Status output
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo ❌ Compilation failed.
) else (
    echo.
    echo ✅ Compilation successful! Run with: build\game.exe
)

pause
