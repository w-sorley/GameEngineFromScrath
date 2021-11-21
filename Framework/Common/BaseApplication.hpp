#pragma once
#include "IApplication.hpp"

namespace My {
    // 提取不同运行环境下Applicaton的共同部分,避免同样的代码分散在不同的文件
    class BaseApplication : implements IApplication
    {
    private:
        /* data */
    protected:
        bool m_bQuit;
    public:
        virtual int Initialize();
        virtual void Finalize();
        virtual void Tick();
        virtual bool IsQuit();
    };
    
   
}