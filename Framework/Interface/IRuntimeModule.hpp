#pragma once

#include "Interface.hpp"

namespace My {
    Interface IRuntimeModule{
public:
    virtual ~IRuntimeModule() {};
    //单独定义模块的初始化/反初始化函数，而不是在类的构造函数/析构函数里面完成，初始化合资源回收的时机更加灵活，与class的加载与回收分离
    virtual int Initialize()  = 0;
    virtual void Finalize() = 0;
    // // One cycle of the main loop
    virtual void Tick() = 0;
    };
}
