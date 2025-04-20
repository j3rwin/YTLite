#import <Foundation/Foundation.h>
#if defined(THEOS_PACKAGE_SCHEME_ROOTLESS)
#include <rootless.h>
#elif defined(THEOS_PACKAGE_SCHEME_ROOTHIDE)
#include <roothide.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (YTLite)

// Returns YTLite default bundle. Supports rootless if defined in compilation parameters
@property (class, nonatomic, readonly) NSBundle *ytl_defaultBundle;

@end

NS_ASSUME_NONNULL_END
