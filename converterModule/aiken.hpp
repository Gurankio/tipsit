//
//  aiken.hpp
//  TIPSIT
//
//  Created by Gurankio on 17/05/2020.
//  Copyright © 2020 Gurankio. All rights reserved.
//

#ifndef aiken_hpp
#define aiken_hpp

#include "weighted.hpp"

namespace converter {

class Aiken : public Weighted {
private:
    // Code specific implementation
    std::string from(int64_t base10);
    
public:
    Aiken ();
    // virtual ~Code ();
};

} /* converter */

#endif /* aiken_hpp */
