# Simple Alphabet Frequency Count Program

簡易字元頻率計算程式

## Introduction

這是一個簡單的，用來計算文章中出現英文字母頻率的程式。本程式不大，由 C 語言撰寫。
基本上是為了小山的資訊安全教學之中，示範破解替換加密法而寫的程式。

## Files

此目錄下包含的檔案有：

- `SAFC.c` 主程式的 C 語言程式碼
- `README.md` 說明檔

## Usage

本程式因為是 C 語言的程式碼，所以只要準備任何一個 C 語言的編譯器(Compiler)，就可以進行編譯。
當然你也可以使用像是 Code::Blocks，DevC++ 或是 Visual Studio 之類的 IDE 來跑，
不過我個人習慣直接在 command line 編譯執行。

以下示範在 Windows 環境持有 gcc 的編譯器的話，該如何編譯以及執行：

### Requirements

在進行之前，你必須要先在你的電腦上安裝 gcc。
這邊我會推薦安裝 MinGW，這是專門給 Windows 環境用的 gcc 組合包。
網路上也有很多人有製作安裝教學，像是[這篇](http://jex.logdown.com/posts/167511-windows-install-gcc-compiler-mingw)。
大家也可以自己去 Google 搜尋看看。

安裝完了之後，記得要把 gcc 的位置加入 path 中，這樣才能在系統的任何一處呼叫 gcc。
上面那篇文章也有附做法。

### Compile and Run

1. 編譯程式

   假設你的程式碼是放在 C 碟下的話，並且檔名叫做 `SAFC.c`，請輸入下列指令編譯。

   ```
   C:\> gcc -o SAFC.exe SAFC.c
   ```

   這樣的話就會在同一個位置產生一個名為 `SAFC.exe` 的可執行檔了。

2. 執行程式

   執行方式也很簡單，只要在與 `SAFC.exe` 同一個位置下，輸入下列指令：

   ```
   C:\> SAFC.exe [Input File]
   ```

   `[Input File]` 代表你要分析的檔案，注意輸入的時候除非該檔案在同一個資料夾下。
   不然的話務必要把檔案位置一起輸入。

   假設檔案名叫 `input.txt`，然後位置是 D 碟的 cat 資料夾。那麼請輸入：

   ```
   C:\> SAFC.exe D:\cat\input.txt
   ```

### Result

如果我輸入了以下文章：

```
In cryptography, a substitution cipher is a method of encoding by which units of plaintext are replaced with ciphertext, according to a regular system; the "units" may be single letters (the most common), pairs of letters, triplets of letters, mixtures of the above, and so forth. The receiver deciphers the text by performing an inverse substitution.
```

就會得到以下結果：

```
[alphabet] => [times] ([proportion])
A => 14 (4.95 %)
B => 6 (2.12 %)
C => 11 (3.89 %)
D => 6 (2.12 %)
E => 36 (12.72 %)
F => 7 (2.47 %)
G => 6 (2.12 %)
H => 14 (4.95 %)
I => 23 (8.13 %)
J => 0 (0.00 %)
K => 0 (0.00 %)
L => 8 (2.83 %)
M => 8 (2.83 %)
N => 15 (5.30 %)
O => 19 (6.71 %)
P => 10 (3.53 %)
Q => 0 (0.00 %)
R => 22 (7.77 %)
S => 20 (7.07 %)
T => 35 (12.37 %)
U => 8 (2.83 %)
V => 3 (1.06 %)
W => 2 (0.71 %)
X => 4 (1.41 %)
Y => 6 (2.12 %)
Z => 0 (0.00 %)
```
