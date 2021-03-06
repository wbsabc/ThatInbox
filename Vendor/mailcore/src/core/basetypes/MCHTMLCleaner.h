//
//  HTMLCleaner.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 2/3/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef __MAILCORE_HTMLCLEANER_H_

#define __MAILCORE_HTMLCLEANER_H_

#include <MailCore/MCString.h>

namespace mailcore {
    
    class HTMLCleaner {
    public:
        static String * cleanHTML(String * input);
    };
    
}

#endif
