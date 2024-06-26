# 概要 <!-- {docsify-ignore} -->

## 简介

操作一个GPIO，需要仔细对照芯片手册，好繁琐；每换一个主控芯片，所有工作从头来过；想开发个现代点支持各种动效的UI，发现几乎是不可能的事情；各种协议栈有如天书一样，阅读都困难，何谈编写；虚拟机技术很流行，功能很强大，想自己移植个，可是困难重重；还是放开自己吧，让XBOOT来替你解决这些问题。XBOOT不仅仅是一款功能强大、可移植性强、代码复用率高的嵌入式系统bootloader，而且还是一款SOC片上系统应用软件执行引擎，无需复杂的操作系统，APP上电直接执行。一次编写，到处运行，不仅仅是个口号，而且还是XBOOT存在的唯一原因。

一些基本特性，简单列举如下：
* 支持文件系统
* 支持lua虚拟机
* 支持各种协议栈
* 支持矢量图形库，矢量字体
* 支持各种现代GUI控件，以及动效
* 支持图像特效处理
* 支持二维码生成与识别
* 支持压缩启动
* 多平台支持
* 各种总线驱动，UART，I2C，SPI等等
* 各种设备驱动，GPIO、PWM、IRQ、CLK、LED、BUZZER、VIBRATOR、WATCHDOG、RNG、FRAMEBUFFER、RTC等
* 支持用lua编写应用软件，包含高等级API，可直接操作各种硬件抽象接口
* 应用软件平台无关，一次编写，到处运行

## 相关网址

* [Xboot文档](https://xboot.github.io/xboot)
* [Xboot源码](https://github.com/xboot/xboot)
* [交叉工具链](http://pan.baidu.com/s/1dDtssIt)
* [Eclipse集成开发环境](http://pan.baidu.com/s/1i3ImG0d)
* [XBOOT官方QQ群658250248，大佬聚集，请踊跃加入(2000人)](https://jq.qq.com/?_wv=1027&k=5BOkXYO)

