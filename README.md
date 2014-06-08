player
======

视频播放器

# 关于项目 #

- 项目基于海康威视播放库。
- 项目基于Visual Studio 2013开发。
- libplayer为.Net库项目，基于C++开发，目的是将PlayCtrl库封装为.Net库，供C#调用。libplayer有独立的sln文件，可独立编译。依赖于PlayCtrl.dll。
- player为播放器(外壳)项目，基于WPF开发，依赖于libplayer。

# 关于部署 #

请个人将对应的授权的二进制库文件PlayCtrl.dll复制到lib下的对应目录下。

# 关于运行 #

运行时必须将对应的依赖库PlayCtrl.dll(32位或64位)复制到player.exe文件同目录下，才能正常运行，否则报错。

# 关于授权 #

- 仅项目的src目录下的源代码遵循 MIT License 开源协议。
- 海康威视为商业软件，依照其指定方式授权。

# 联系 #

如项目妨碍了某些个人或单位的利益，请邮件告知，协商处置。

[duguying2008@gmail.com](mailto:duguying2008@gmail.com "duguying")

