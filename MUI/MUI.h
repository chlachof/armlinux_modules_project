#ifndef MUI_H_
#define MUI_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <linux/fb.h>

#include <QtGui>
#include <QEvent>
#include <QKeyEvent>
#include <QApplication>

//错误列表
#define RET_OK      (0)     //正常
#define RET_ENOEMP  (-1)    //非空子集
#define RET_EIO     (-2)    //I/O操作错误
#define RET_ENOMEM  (-3)    //内存不足


#endif
