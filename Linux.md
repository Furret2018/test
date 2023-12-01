https://www.cnblogs.com/7-58/p/13328148.html	Linux shadow文件中密码的加密方式


我们发现所谓的加密算法，其实就是用明文密码和一个叫salt的东西通过函数crypt()完成加密。
而所谓的密码域密文也是由三部分组成的，即：$id$salt$encrypted。
【注】： id为1时，采用md5进行加密；
id为5时，采用SHA256进行加密；
id为6时，采用SHA512进行加密。



