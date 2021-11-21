#include "BaseApplication.hpp"

int My::BaseApplication::Initialize(){
    m_bQuit = false;
}

void My::BaseApplication::Finalize(){

}

void My::BaseApplication::Tick(){ 

}

bool My::BaseApplication::IsQuit() {
    return m_bQuit;
}