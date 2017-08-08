//
//  SceneUtils.hpp
//
//  Created by Tran Dat on 3/21/17.
//
//

#ifndef SceneUtils_hpp
#define SceneUtils_hpp

#include "cocos2d.h"

class SceneUtils
{
public:
    static cocos2d::Rect rect();
    
    static cocos2d::Point left();
    static cocos2d::Point right();
    static cocos2d::Point top();
    static cocos2d::Point bottom();
    static cocos2d::Point center();
    static cocos2d::Point leftTop();
    static cocos2d::Point rightTop();
    static cocos2d::Point leftBottom();
    static cocos2d::Point rightBottom();
    
    static float width();
    static float height();
    static cocos2d::Size size();
    
    static float scaleFactor();
    
private:
    
    static void lazyInit();
    static cocos2d::Rect s_Scene;
};

#endif /* SceneUtils_hpp */
