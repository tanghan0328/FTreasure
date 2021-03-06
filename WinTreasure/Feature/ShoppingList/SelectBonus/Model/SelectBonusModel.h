//
//  SelectBonusModel.h
//  WinTreasure
//
//  Created by Apple on 16/7/18.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import "BaseModel.h"

@interface SelectBonusModel : BaseModel

/**红包金额
 */
@property (nonatomic, copy) NSString *bonusSum;

/**红包使用条件
 */
@property (nonatomic, copy) NSString *useCondition;

/**红包名称
 */
@property (nonatomic, copy) NSString *bonusName;

/**红包有效期
 */
@property (nonatomic, copy) NSString *indate;

@property (nonatomic, assign) BOOL isSelected;

@end
