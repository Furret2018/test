# CE
https://www.youtube.com/watch?v=dws7I6oyILs&list=PLm1l7iw_AEM4tJh_hSIem1uOLxa2yCjy5  CE / Cheat Engine新手入门教程（上篇） 单机游戏修改器教学    
https://www.youtube.com/watch?v=lGjhhpvdziQ   Cheat Engine高阶教程 CE新手入门教程（下篇）Auto Assembler脚本       




# CE教学从入门到高级[共14集]
https://www.youtube.com/watch?v=w1rWnhbt9pQ&list=PLI4M3hzWH-GLRehjg_R8dhlkfbQrlMcBF		
https://www.youtube.com/watch?v=vjyzXHee50k		指针自动扫描及技巧  pvfnp.com  QQ641673288
https://www.youtube.com/watch?v=zasAtlmHXAk		利用共用代码段，（代码访问了地址）对象/相似（相邻）物品的地址。


CE修改内存中的汇编代码
https://www.youtube.com/watch?v=RR0bDIdAfSc		AOB注入     
AOB = Array of bytes Injection  特征码注入         类似于hook     

AOB的特点 ：    
1) 好处： 使用特征码来注入内存，不用每一次开游戏重新手动改写汇编代码
2） 有些代码是动态装入的，所以需要将特定事件触发，相关代码才被装入内存，所以有时开机后就激活脚本不一定成功。


多开扫描窗口，查到共同代码，   
内存查看器，下断，分析寄存器中值的特征    
分析数据结构   


https://www.youtube.com/watch?v=fGoNdQhph4Y		小技巧    
页眉 （右键创建组，右键手动屏开收缩）    
变速器（通常只有单机可用）   








## TIPS 
自动指针扫描，记得要保存结果到x.ptr文档。得到的结果太多的话，       
1）可以小退至选人界面，    
2）重启游戏 
3）重启电脑    

游戏安全思路：    
1) 正常思路都是数据内存对齐的，但是可能开发者禁用优化，则将快速扫描开关各扫描一次       
2) 有些看起来是整数的，实际使用了浮点数      
3) 有些面板数值看起来是1，但是实际可能是经过加密的，比如可能实际值是0，使用了x+1得到真实值，也可能是其他运算，比如异或，乘除，或者 （x+offset1）*offset2等       


序列排列的物品，指针也可能是等差数列，实现数据可能是数组对象类        
cehigh.com      






https://pan.baidu.com/share/link?shareid=296802&uk=489677674
https://yun.baidu.com/s/1sjGzSfF#list/path=%2F
https://pan.baidu.com/share/link?shareid=3036110819&uk=1413256347
https://yun.baidu.com/s/1jGh95qe#list/path=%2F
https://pan.baidu.com/s/1sjGzSfF#list/path=%2F&parentPath=%2Fsharelink4078563009-186414744765193
https://yun.baidu.com/s/1yMzBC#list/path=%2F&parentPath=%2Fsharelink859589735-1030566153
https://pan.baidu.com/share/link?shareid=469138&uk=2870425703#list/path=%2F&parentPath=%2Fsharelink2870425703-1964494838




https://zhuanlan.zhihu.com/p/431163780
https://zhuanlan.zhihu.com/p/559208636
https://www.xjx100.cn/news/398348.html
https://www.xjx100.cn/news/398346.html
https://www.xjx100.cn/news/3215440.html
https://www.xjx100.cn/news/3215443.html
https://www.xjx100.cn/news/3215445.html
https://www.xjx100.cn/news/398354.html
https://www.xjx100.cn/news/398353.html
https://blog.csdn.net/qq_44760112/article/details/126088772
https://blog.csdn.net/snaking616/article/details/85759974


# Data Switch
https://www.h3c.com/cn/d_202206/1627170_30005_0.htm
https://zhuanlan.zhihu.com/p/442151628


# 符点数
https://www.cnblogs.com/FlyingBread/p/660206.html

https://jzxf.top1game.com/t1?channel=4030&placeid=googlebn&gclid=EAIaIwodChMI_-GJ1-3RgwMVetdzAR0I_gdCEAEYASABMAESAgkQ8P8HAQ&rf=2&nx=199&ny=137&mb=1&nm=2
https://mbd.baidu.com/newspage/data/videolanding?nid=sv_9729709799849438999&sourceFrom=pc_feedlist
https://www.youtube.com/watch?v=ds3D8sZ_ZZg
https://www.youtube.com/watch?v=cV9jJK22v1E

https://www.youtube.com/watch?v=DT3MHVWLgKI

https://baijiahao.baidu.com/s?id=1725835426567639286&wfr=spider&for=pc


https://www.lanzous.com/i2i32sd
https://www.youtube.com/watch?v=ki0k0WbaCjI		1 1 了解外挂是怎么样形成的，并了解我们需要获取的数据
https://www.youtube.com/watch?v=5DdaCRt-8jI		1 2 d3d是什么？绘制是什么？方框是什么？实现方框！！
https://www.youtube.com/watch?v=2BBgGIS8ZRM		1 3 内存是什么？内存地址是什么？CE是什么？偏移是什么？



https://support.avaya.com/css/public/documents/101038510


# 汇编 
中文名半字节外文名nibble
应用于计算机中特点通常将8位二进制数称为字节半字节(nibble)在某些计算机指令中是以半字节为单位进行处理的，
采用这类指令进行将ASCII代码转换成二十进制代码，或将二十进制代码转换成ASCII等操作是很方便的
https://www.cnblogs.com/coryxie/p/3959868.html


区位码
https://madmalls.com/blog/post/unicode-and-utf8/
https://www.imooc.com/wenda/detail/520931
https://docs.pingcap.com/zh/tidb/stable/character-set-and-collation
https://support.huaweicloud.com/dws_faq/dws_03_0085.html
https://learn.microsoft.com/zh-cn/cpp/build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8?view=msvc-170



only, just




postpone deley, relay , defer
image, picture, avatar, figure

feature 
gesture, 





track和trace的区别

https://www.lysator.liu.se/c/
https://zhuanlan.zhihu.com/p/358456265

https://www.ylefu.com/mysql/10779.html


# TCC
https://zhuanlan.zhihu.com/p/358456265
https://wenku.baidu.com/view/4732fd8f0329bd64783e0912a216147916117e5c.html

 	SOLN373433

# 内存读写，搜索
https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-readprocessmemory
https://blog.csdn.net/Simon798/article/details/118682399
https://learn.microsoft.com/zh-cn/windows/win32/ipc/pipe-handle-inheritance
https://www.jianshu.com/p/dec65f1e8111

https://blog.csdn.net/Bunny9__/article/details/123440071
https://blog.csdn.net/thefutureisour/article/details/7746582


# Process
https://learn.microsoft.com/zh-tw/windows/win32/procthread/creating-processes
https://learn.microsoft.com/zh-cn/windows/win32/api/tlhelp32/ns-tlhelp32-processentry32
https://learn.microsoft.com/zh-cn/windows/win32/api/processthreadsapi/ne-processthreadsapi-process_information_class
https://learn.microsoft.com/zh-tw/windows/win32/cimwin32prov/win32-process-methods


PROCESS_INFORAMTION

# DLL
https://learn.microsoft.com/zh-cn/windows/win32/dlls/dllmain	DllMain 入口点


https://learn.microsoft.com/zh-cn/windows/win32/wmisdk/wmic


# Python + office
https://www.youtube.com/watch?v=rK8JmFKQRAI&list=PL6DEHvciXKeV6tgqhNG9tS9_tWktoocvA

# C
https://www.youtube.com/watch?v=QzbR2nSNBV0


# 汇编语言实践环境搭建
https://www.cnblogs.com/coryxie/p/3959868.html
https://github.com/yasm/yasm/wiki/GasSyntax

http://www.yuyanba.com/default.aspx/did44989

https://zhuanlan.zhihu.com/p/340338115
https://zhuanlan.zhihu.com/p/339778758

NIBBLE 半字节 = 4bits
https://zhidao.baidu.com/question/444303441.html
https://max.book118.com/html/2017/0109/81611034.shtm
https://blog.csdn.net/m0_51191308/article/details/127183640

https://max.book118.com/html/2017/0109/81611034.shtm
https://blog.csdn.net/liu0808/article/details/54923555

https://cloud.tencent.com/developer/article/2168978


https://wenku.baidu.com/view/bbf11bdb7f1cfad6195f312b3169a4517723e516.html
https://zhuanlan.zhihu.com/p/449157752
http://news.eeworld.com.cn/mcu/ic477778.html


# 可视化
https://zhuanlan.zhihu.com/p/121215784
https://pymolwiki.org/index.php/Selection_Algebra


# GEO MAP
https://blog.51cto.com/u_15070324/6090635
https://blog.csdn.net/gxj1680/article/details/8773300
https://blog.csdn.net/iteye_10086/article/details/82031470


# SCRIPT Language
https://rigaux.org/language-study/scripting-language/



fatal, fail, alert
(void);

https://blog.csdn.net/qiu421/article/details/133972946
http://www.js-code.com/dosbat/dosbat_106600.html



https://www.youtube.com/watch?v=TFmy0BBZTJc	git learning

https://www.youtube.com/watch?v=gLATieOIv64	Chatgpt 咒语
https://www.youtube.com/watch?v=-avH60VbzMc
https://www.youtube.com/watch?v=xBVn4CxOGmA


race 种族

# TCC
https://bellard.org/tcc/tcc-doc.html

https://www.cnblogs.com/bonelee/p/16797490.html

mario GPT版本


https://www.youtube.com/watch?v=CqXOOQ2N1nQ		金山游侠


satisfaction, fiction, fraction, faction, survey
unknown reason
process, progress, procedure 

location address
lost  miss
OllyDBG
OllyICE

https://blog.csdn.net/qq_43355637/article/details/127668014
https://www.jb51.net/softjc/787651.html
https://blog.csdn.net/wlswls1711/article/details/103946591/


https://gpu.xuandashi.com/90907.html

puts函数的使用以及puts和printf的区别和联系
https://blog.csdn.net/qq_71440944/article/details/129934201

SetConsoleTextAttribute() https://www.jb51.net/article/231255.htm



lost, missing
instantaneous, concurrent
instantly

negotiate



# vsnprintf()
https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l?view=msvc-170


http://www.taodudu.cc/news/show-8412484.html
http://www.taodudu.cc/news/show-8412472.html
http://www.taodudu.cc/news/show-1306329.html
https://www.dbs724.com/340142.html

https://blog.itpub.net/69955379/viewspace-2980420/


floating point - “ p”在浮点数的指数十六进制表示法中代表什么 https://en.wikipedia.org/wiki/Hexadecimal#Hexadecimal_exponential_notation
它只是意味着“力量”

按照惯例，字母P（或p，表示“幂”）表示乘以2的幂的倍数，而E（或e）在十进制中用作E表示法的目的相似。P之后的数字是十进制，表示二进制指数。将指数乘以1乘以2，而不是16。10.0p1 = 8.0p2 = 4.0p3 = 2.0p4 = 1.0p5。通常，将数字标准化，以便前导十六进制数字为1（除非值正好为0）。
https://blog.csdn.net/qq_34719188/article/details/83351918



https://github.com/run4flat/tinycc/blob/mobx/tcc-doc.texi



https://mbd.baidu.com/newspage/data/landingsuper?context=%7B%22nid%22%3A%22news_9324559228489756512%22%7D&n_type=-1&p_from=-1
https://mbd.baidu.com/newspage/data/landingsuper?context=%7B%22nid%22%3A%22news_9899695340081494580%22%7D&n_type=1&p_from=4
https://mbd.baidu.com/newspage/data/videolanding?nid=sv_10448775465857822225&sourceFrom=pc_feedlist


https://sj.qq.com/appdetail/wx8b264251a6175242
https://sj.qq.com/appdetail/wx2a1b0787771f7b34
https://sj.qq.com/appdetail/com.tencent.tmgp.huarong.moye
https://sj.qq.com/appdetail/com.tencent.tmgp.wsxyzb


# R
http://www.360doc.com/content/17/0504/12/37165983_650886708.shtml
https://elwiki.net/w/Wind_Sneaker/Transcendence/zh-hans
https://zhuanlan.zhihu.com/p/32168256
https://www.w3cschool.cn/r/r_data_types.html



https://www.youtube.com/watch?v=ZgA3LWWC7us&list=PLCLxMnnAnGilNwAek0yMUpgXRGO1li2TI	
https://www.youtube.com/watch?v=ZgA3LWWC7us		Masm32 Tutorial - 01 Hello World
https://www.youtube.com/watch?v=EhFz4769pmE		Masm32 Tutorial - 02 Visual Studio Setup and Irvine Libraries
https://www.youtube.com/watch?v=tdZg4TlAOqs		Masm32 Tutorial - 03 MessageBox




https://www.youtube.com/watch?v=JB7tqw876S4		Hello World with Assembly on Windows





https://lh3.googleusercontent.com/proxy/SknCw4fWjBtFeFc26LpBrKqqxRy-OSHXDdMrIm9BsgQotm2ob8hbj_pMm00C9uxU12hvz64fDxqjJTfUYdapLcaN13A2zvJYZUUfPkOIc7K8Ptryj2lKkXE76DG_aD36ZA
https://spg.prjenergy.com/preorder?utm_source=google&utm_medium=Registration&utm_campaign=GG_spring_yjh_ch_mysg_and_conv_sp_zn_pmax_1219&campaign_id=20881428880&adgroup_id=&campaign_name=GG_spring_yjh_ch_mysg_and_conv_sp_zn_pmax_1219&adset_name={adgroupname}&ad_id=&gclid=Cj0KCQiAkKqsBhC3ARIsAEEjuJgGWSJ90LHOEkoNXNgefwKiQCDbKZkCU_gXombz5s34A3_HsNjJrgYaAiUUEALw_wcB

# 
chcp  查看系统字符集
可以得到操作系统的代码页信息，你可以从控制面板的语言选项中，可以查看代码页对应的详细的字符集信息。

MS-DOS为以下国家和语言提供字符集：

代码页 描述
1258 越南语
1257 波罗的语
1256 阿拉伯语
1255 希伯来语
1254 土耳其语
1253 希腊语
1252 拉丁字符 (ANSI)
1251 西里尔语
1250 中欧语言
950 繁体中文
949 朝鲜语
936 简体中文
932 日语
874 泰国语
850 多语种 (MS-DOS Latin1)
437 MS-DOS 美国英语


https://www.jianshu.com/p/bb25e388094d
临时修改chcp 65001  ' 改成utf-8编码
win键+R，输入regedit，确定。
HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Command Processor 命名为“autorun”, 点击右击修改，数值数据填写“chcp 65001”，确定


# C
https://bellard.org/tcc/tcc-doc.html
https://seriouscomputerist.atariverse.com/media/pdf/book/C%20Programming%20Language%20-%202nd%20Edition%20(OCR).pdf
https://courses.physics.ucsd.edu/2014/Winter/physics141/Labs/Lab1/The_C_Programming_Language.pdf


https://kremlin.cc/k&r.pdf
https://github.com/auspbro/ebook-c/blob/master/The.C.Programming.Language.2Nd.Ed%20Prentice.Hall.Brian.W.Kernighan.and.Dennis.M.Ritchie..pdf

https://www-personal.acfr.usyd.edu.au/tbailey/ctext/ctext.pdf
https://ptgmedia.pearsoncmg.com/images/9780131103627/samplepages/0131103628.pdf
https://www.ccapitalia.net/descarga/docs/1978-ritchie-the-c-programming-language.pdf


浮点数怎么表示如下：

浮点数表示法中，数N可表示为N=±d×2^p，式中d称为N的尾数（或数值），p称为数N的阶码（或指数）。d是一个纯小数，p是一个整数。p的符号表示小数点浮动的方向，p为正，表示小数点右移p位；p为负，表示小数点左移p位。

知识扩展：

浮点数是一种在计算机中表示小数点的数值数据类型。由于计算机的内部表示限制，浮点数并不总是完全准确地表示的。浮点数表示的精度对于科学计算和数字信号处理等应用非常重要。

浮点数通常由三个部分组成：符号位、指数和尾数。符号位表示数值的符号，指数确定数值的大小，尾数则表示小数部分的精确值。在计算机中，浮点数通常采用IEEE754标准进行表示，该标准规定了浮点数的二进制表示方式。






approach, approximate, proximate, appropriate
trace, track

1、trace 一般是说比较小的东西，或者抽象的东西，比如要照着画描线条用trace，追溯历史文化用trace
例句：Police are trying to trace a white van seen in the area.
警方正设法查找曾在此地区出现的白色货车。
2、track一般是比较大的事物,比如跟踪人,或者邮寄包裹,叫做track
例句：follow the track to the farm
顺着这条小道去农场。

trace和track的区别：
trace一般是说比较小的东西回，或者抽象的东西，比如要照着画描线答条用trace，追溯历史文化用trace；track一般是比较大的事物，比如跟踪人，或者邮寄包裹，叫做track。

trace的例句：Shelearnedtodrawbytracingpicturesoutofoldstorybooks（她通过描摹旧故事书上的图画学会了画画）；
track的例句：Thetwomenturnedtowatchthehorsesgoingroundthetrack（那两个男人转身观看赛马沿赛道而行）。

https://www.youtube.com/watch?v=4-mP4lfCebg
https://www.youtube.com/watch?v=Yftd1eAqBSM
https://www.youtube.com/watch?v=_XRwSfEoN28	科目三舞蹈~抖音神曲【一笑江湖】



https://www.youtube.com/watch?v=7R04k5b4jN4		Communication System Structure - Session 6
https://www.youtube.com/watch?v=n4zgzWFSSPQ		Communication System Structure - Session 7


https://www.youtube.com/watch?v=WOjI2JwBWWw		Loops
https://www.youtube.com/watch?v=vpT9OVTzfPA		2G call scenarios
https://www.youtube.com/watch?v=MmtHlgExqL0		The Process Behind Making An Mobile Call Using A 2G GSM Network
https://www.youtube.com/watch?v=6qR102lcXoY		GSM Architecture
https://www.youtube.com/watch?v=ew2AP7iBFR0		GSM: BSS (Base Station Subsystem) Interfaces
https://www.youtube.com/watch?v=KHY0EboxkQY		GSM: NSS (Network Subsystem) Interfaces
https://www.youtube.com/watch?v=PnfJ_btbW2A
https://www.youtube.com/watch?v=x3c1ih2NJEg
https://www.youtube.com/watch?v=rdQ6_iuTCaM
https://www.youtube.com/watch?v=izxcOK9u5mg
https://www.youtube.com/watch?v=m8YkIcDVbGQ
https://www.youtube.com/watch?v=1POzl9tZXuQ
https://www.youtube.com/watch?v=HIQ8Z2xlCS8		GSM Architecture | MS, BTS, BSC, MSC | VLR, HLR, AuC, EIR, OMC | BSS, NSS, OSS | Mobile Computing
https://www.youtube.com/watch?v=WyRgu_F2i9c
https://www.youtube.com/watch?v=iS8jmhVAfoQ
https://www.youtube.com/watch?v=1_x9axf0jlk

https://www.youtube.com/watch?v=UA11MoIdXFk
https://www.youtube.com/watch?v=M2J37iS90_4
https://www.youtube.com/watch?v=r3-ooXTUBzY
https://www.youtube.com/watch?v=5oIzHfvi5PM
https://www.youtube.com/watch?v=dGknaWQWOhg
https://www.youtube.com/watch?v=Vir7_t586ic

https://www.youtube.com/watch?v=r38nVmxBfvM
https://www.youtube.com/watch?v=yWqrx08UeUs
https://www.youtube.com/watch?v=2wUoGSi3xYA
https://www.youtube.com/watch?v=eSirToMMosQ
https://www.youtube.com/watch?v=PpK5MP78zL8
https://www.youtube.com/watch?v=hSWnRK_L1n0

https://www.youtube.com/watch?v=WvrU3TJ9K8s
https://www.youtube.com/watch?v=1POzl9tZXuQ


https://www.youtube.com/watch?v=AN8Cb56vtxc&list=PLcFSYGbZVsg2_pRH5VIYta36B2pDVifTA


第三名 Collins Dictionary
第二名 Oxford Learner’s Dictionary
第一名 Cambridge Dictionary 

https://www.youtube.com/watch?v=JT3iVvrizq4

https://www.youtube.com/watch?v=4AVKdHSOLdQ
https://www.youtube.com/watch?v=AUMhrw4nx4c
https://www.youtube.com/watch?v=ynM5cAreJD4		英英字典
https://www.youtube.com/watch?v=ZsNtwhOJINE&list=PL41R2vH_CL433rdyh0cpwWWh9IeoVaKDL

https://www.youtube.com/watch?v=iyoTZUYarn0&list=PLcPfCJuIgV5rXHYzGWsaGQt-eBrG-EHQS
https://www.youtube.com/watch?v=E0ucCAVVEcI		英文語速太快聽不懂？聽力這樣練才對


The greatest lesson of life is that you are responsible for your life.  人生最重要的训诫是你要为你的人生负责。


https://mbd.baidu.com/newspage/data/landingsuper?context=%7B%22nid%22%3A%22news_9731094835383942157%22%7D&n_type=-1&p_from=-1


https://www.youtube.com/watch?v=sGjAe6y299g		Never write another loop again


https://www.youtube.com/watch?v=ZqjS486wCZA		事件太敏感，当年没人敢说！改变中国法制进程的三大奇案！1小时中间无广告合集 [脑洞乌托邦 | 小乌副频道 | 小乌 TV ]

https://kb.avaya.com/kb/index?page=content&id=FAQ118667


https://www.runoob.com/linux/linux-comm-cksum.html
https://www.runoob.com/linux/linux-comm-cat.html
https://www.w3cschool.cn/tools/index?name=cpicker
https://c.runoob.com/front-end/6214/#111f2c
https://explainshell.com/explain?cmd=head+-n10+11.txt
linux explain
linux runoob


# Linux列出所有的環境變量 printenv
https://www.linuxprobe.com/linux-environment-variables.html



shadow文件中密码!!


/etc/passwd

https://www.cnblogs.com/hgschool/p/17070890.html





做什么 ”！” 和“*”表示/etc/shadow 中的密码部分？

在 /etc/shadow 文件中，它如下所示。

root:!:15764:0:99999:7:::
daemon:*:15749:0:99999:7:::
这些字符（“！”和“*”）在密码部分是什么意思？
所以*意味着没有密码可用于访问该帐户，并!意味着它被锁定


https://www.shuzhiduo.com/A/Vx5MOjvgzN/
http://c.biancheng.net/view/840.html

https://blog.csdn.net/hello_world_qwp/article/details/82216345/
https://blog.csdn.net/u013475983/article/details/113869146


https://help.aliyun.com/noticelist/articleid/13128065.html

https://developer.aliyun.com/article/1142614
https://www.douban.com/note/484909632/?_i=0252489i4aC7gJ


https://www.modb.pro/db/530083
https://www.modb.pro/db/592126




https://blog.csdn.net/u013475983/article/details/113869146
https://blog.csdn.net/hello_world_qwp/article/details/82216345/
https://www.shuzhiduo.com/A/VGzl6pml5b/

https://www.bilibili.com/video/BV1VX4y1R7x3
https://www.bilibili.com/bangumi/play/ep716457




https://www.bilibili.com/video/BV1dp4y1J7tm
https://www.bilibili.com/video/BV1ib411t7YR
https://www.bilibili.com/video/BV1aW411Q7x1
https://www.bilibili.com/video/BV1Ey4y147xn
正余弦定理
https://www.bilibili.com/video/BV1n14y1774f
https://www.bilibili.com/video/BV1ms41177bK


https://www.bilibili.com/video/BV1gN4y1Q7Xa
https://www.bilibili.com/video/BV1WV4y1i7uf
https://www.bilibili.com/video/BV1Wk4y1L7Zp

https://www.bilibili.com/video/BV1cM4y1i7Ab

https://www.bilibili.com/video/BV13U4y1E7oA


https://zhuanlan.zhihu.com/p/599961233?utm_id=0
https://haokan.baidu.com/v?pd=wisenatural&vid=5717321557248790740
https://zhuanlan.zhihu.com/p/124293184?utm_oi=726821836322533376
https://zhuanlan.zhihu.com/p/645845727
https://www.bilibili.com/read/cv21167178/?jump_opus=1
https://www.esheep.com/?from=1







6 汇编语言实践环境搭建
https://www.youtube.com/watch?v=D-2nFozNLqo&list=PLwIrqQCQ5pQkdccYkB0u2l4jatS1FP0Db&index=6

第3节 计算机领域逆向工程步骤以及常用工具
https://www.youtube.com/watch?v=PK6mMCrOHFQ&list=PLwIrqQCQ5pQkGxEh5_yfW-cBKNVQL6rGY&index=5

