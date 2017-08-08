//
//  SceneUtils.cpp
//
//  Created by Tran Dat on 3/21/17.
//
//

#include "SceneUtils.hpp"

USING_NS_CC;

Rect SceneUtils::s_Scene;

void SceneUtils::lazyInit()
{
    if (s_Scene.size.width == 0.0f && s_Scene.size.height == 0.0f)
    {
        GLView* pGLView = Director::getInstance()->getOpenGLView();
        s_Scene.origin = pGLView->getVisibleOrigin();
        s_Scene.size = pGLView->getVisibleSize();
    }
}

Rect SceneUtils::rect()
{
    lazyInit();
    return Rect(s_Scene.origin.x, s_Scene.origin.y, s_Scene.size.width, s_Scene.size.height);
}

Point SceneUtils::left()
{
    lazyInit();
    return Point(s_Scene.origin.x, s_Scene.origin.y + s_Scene.size.height/2);
}

Point SceneUtils::right()
{
    lazyInit();
    return Point(s_Scene.origin.x + s_Scene.size.width, s_Scene.origin.y + s_Scene.size.height/2);
}

Point SceneUtils::top()
{
    lazyInit();
    return Point(s_Scene.origin.x + s_Scene.size.width/2, s_Scene.origin.y + s_Scene.size.height);
}

Point SceneUtils::bottom()
{
    lazyInit();
    return Point(s_Scene.origin.x + s_Scene.size.width/2, s_Scene.origin.y);
}

Point SceneUtils::center()
{
    lazyInit();
    return Point(s_Scene.origin.x + s_Scene.size.width/2, s_Scene.origin.y + s_Scene.size.height/2);
}

Point SceneUtils::leftTop()
{
    lazyInit();
    return Point(s_Scene.origin.x, s_Scene.origin.y + s_Scene.size.height);
}

Point SceneUtils::rightTop()
{
    lazyInit();
    return Point(s_Scene.origin.x + s_Scene.size.width, s_Scene.origin.y + s_Scene.size.height);
}

Point SceneUtils::leftBottom()
{
    lazyInit();
    return s_Scene.origin;
}

Point SceneUtils::rightBottom()
{
    lazyInit();
    return Point(s_Scene.origin.x + s_Scene.size.width, s_Scene.origin.y);
}

float SceneUtils::width()
{
    lazyInit();
    return s_Scene.size.width;
}

float SceneUtils::height()
{
    lazyInit();
    return s_Scene.size.height;
}

Size SceneUtils::size()
{
    lazyInit();
    return s_Scene.size;
}

float SceneUtils::scaleFactor()
{
    Size screenSize = Director::getInstance()->getWinSize();
    //TODO: change your resources size here.
    Size designSize = Size(640, 1136);
    
    float kw = screenSize.width / designSize.width;
    float kh = screenSize.height / designSize.height;
    
    float k = kw < kh ? kw : kh;
    
    return k;
}
