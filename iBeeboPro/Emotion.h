@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface Emotion : NSObject <NSCoding>

/** 表情的 png 图片名. */
@property (nullable, nonatomic, readonly, copy) NSString *png;
/** 表情的文字描述. */
@property (nullable, nonatomic, readonly, copy) NSString *chs;

/** emoji 表情的 16 进制编码. */
@property (nullable, nonatomic, readonly, copy) NSString *code;
/** emoji 表情. */
@property (nullable, nonatomic, readonly, copy) NSString *emoji;

@end

NS_ASSUME_NONNULL_END