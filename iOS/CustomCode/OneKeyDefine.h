//
//  OneKeyDefine.h
//  OneKey
//
//  Created by xiaoliang on 2020/11/11.
//  Copyright © 2020 OneKey. All rights reserved..
//

#ifndef OneKeyDefine_h
#define OneKeyDefine_h

#define kTheServiceAgreement        @"https://onekey.zendesk.com/hc/articles/360002014776"
#define kPrivacyAgreement           @"https://onekey.zendesk.com/hc/articles/360002003315"
#define kSavedUUIDForLastBlueTooth  @"kSavedUUIDForLastBlueTooth"

#define NetTypeMain                     @"set_mainnet"
#define NetTypeTest                     @"set_testnet"

#define SH_TEST_NET       0 // 链环境: 0:公链 1:测试链

#ifdef DEBUG //// 用于测试
    #if (SH_TEST_NET == 0)    // 正式
    #define OKNetType          NetTypeMain

    #elif (SH_TEST_NET == 1) // 测试节点测试
    #define OKNetType          NetTypeTest

#else /// 用于发布（正式)
#define OKNetType          NetTypeMain

#endif
#endif

#endif /* OneKeyDefine_h */
