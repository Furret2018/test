## 下载FFMpeg
FFmpeg 下载一个镜像点 https://www.gyan.dev/ffmpeg/builds/#release-builds  
或直接下载 https://www.gyan.dev/ffmpeg/builds/ffmpeg-release-full.7z  

## MiKTex
https://miktex.org/download  
安装完注意检查 命令行下命令 `xelatex -version` 和  `tex -version` 是不是有输出信息  
如果没有，就要将程序所在的路径 `C:\Program Files\MiKTeX\miktex\bin\x64` 添加到环境变量中 


## manim
下载https://github.com/3b1b/manim

解压，使用`pip install -e .`进行安装 （需要机上有Python 3.7或以上）

找到配置文件`C:\manim-master\manimlib\default_config.yml`
为参数指定一个目录 
```
temporary_storage: "C:\\tex"
```
## 测试
`manimgl example_scenes.py OpeningManimExample` 测试例子，如果遇到LaTex相关错误，可以使用管理员模式开CMD
