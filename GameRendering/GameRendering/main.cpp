//
//  main.cpp
//  GameRendering
//
//  Created by 舒倩雯 on 2017/3/24.
//  Copyright © 2017年 Wendy Shu. All rights reserved.
//

#include <iostream>
#include <GLUT/GLUT.h>

void draw(){
    
    //设置清屏色
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
    //颜色设置为青色
    glColor3f(0.0f,1.0f,1.0f);
    glVertex3f(50.0f,50.0f,-50.0f);
    
    //设置绘图时的坐标系统
    glOrtho(0.0f, 1.0f, 0.0f, 1.0f, -1.0f, 1.0f);
    
    //开始渲染
    glBegin(GL_POLYGON);
    
    //设置多边形的4个顶点
    glVertex3f(0.25f, 0.25f, 0.0f);
    glVertex3f(0.75f, 0.25f, 0.0f);
    glVertex3f(0.75f, 0.75f, 0.0f);
    glVertex3f(0.25f, 0.75f, 0.0f);
    
    //结束渲染
    glEnd();
    
    //强制刷新缓冲区，保证绘制命令被执行
    glFlush();
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //初始化GLUT库
    glutInit(&argc, (char**)argv);
    
    //创建一个窗口并制定窗口名
    glutCreateWindow("RenderingTest");
    
    //注册一个绘图函数，操作系统在必要时刻就会对窗体进行重新绘制操作
    glutDisplayFunc(draw);
    
    //进入GLUT事件处理循环，让所有的与“事件”有关的函数调用无限循环(永生循环)
    glutMainLoop();
    
    return 0;
}
