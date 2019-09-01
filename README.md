本人经过研究，写出了一个代码翻译自动机，能删除代码中**不必要**（即类似于a b）的空格，希望对那些像我一样的$ \color{black} \colorbox{black}{强迫症的}$人有所帮助

# V1.1.0
更新：
修复bug：误删除`' '`以及`" "`中的空格&搬到github上
# V1.0.1
更新：
**如不需要部分功能，请参照下表注释：**
| outfile.cpp | DeleteE.cpp | DeleteK.cpp | DeleteK&E.cpp |
| :----------: | :----------: | :----------: | :----------: |
| 不可删除（如果您不要DeleteE.cpp，请注释15~28） | 40~46 | 不可删除（如果您不要DeleteK&E.cpp，请注释29~39） | 47~53 |
# V1.0.0 
更新：此程序运行后会产生4个文件，为`outfile.cpp`、`DeleteE.cpp`、`DeleteK.cpp`和`DeleteK&E.cpp`，第一个是删除空格、注释，第二个是删除空格、注释、空行，第三个是仅删除空格，第四个是删除空格、空行。

# V0.1.9
修复bug：遇到空行终止程序，没有空行死循环