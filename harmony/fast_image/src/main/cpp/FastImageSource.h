//
// Created on 2024/6/18.
//
// Node APIs are not fully supported. To solve the compilation error of the interface cannot be found,
// please include "napi/native_api.h".

#include "Props.h"
#include "Uri.h"
#include <string>

namespace rnoh {
    class FastImageSource{
        public:
        FastImageSource(facebook::react::FastImageViewSourceStruct source_){
            source = source_;
        };
    
        std::string getUri();
        
        private:
        facebook::react::FastImageViewSourceStruct source;
        const std::string httpPrefix = "http";
        const std::string httpsPrefix = "https";
        const std::string ftpPrefix = "ftp";
        const std::string localhostPrefix = "localhost";

        bool isValidBase64(const std::string &str);
        
        bool isUriRes(const Uri &uri);
    
    };
}
