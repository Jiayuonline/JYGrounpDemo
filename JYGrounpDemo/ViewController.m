//
//  ViewController.m
//  JYGrounpExample
//
//  Created by Yu, Tian on 2019/9/18.
//  Copyright © 2019 Yu, Tian. All rights reserved.
//

#import "ViewController.h"
#import <JiaYuOnlineCore/JYCore.h>
#import <JiaYuOnlineGrounpSDK/JiaYuOnlineGrounpSDK.h>
#import <Masonry.h>

@interface ViewController () <UICollectionViewDelegate, UICollectionViewDataSource,UICollectionViewDelegateFlowLayout,JYGrounpVoiceDelegate>
@property (nonatomic, strong) UICollectionView *apiCollectionView;
@property (nonatomic, strong) NSArray *apisArray;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self initView];
}

-(void)initView{
    self.navigationItem.title = @"车队接口API";
    self.view.backgroundColor = UIColor.whiteColor;
    
    [self.view addSubview:self.apiCollectionView];
    [self.apiCollectionView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.top.right.bottom.equalTo(self.view).inset(0);
    }];
    
    self.apisArray = @[@"创建车队",@"添加成员",@"加入车队",@"车队详情",@"车队列表",@"更改车队名",@"退出车队",@"队友列表",@"好友列表",@"长链接",@"加入房间"];
    [self.apiCollectionView reloadData];
}

#pragma mark — UICollectionViewDelegate
- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return self.apisArray.count;
}
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    UICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"apiCollectionViewCell" forIndexPath:indexPath];
    
    UILabel *label = (UILabel *)[cell.contentView viewWithTag:100];
    if (!label) {
        label = [UILabel new];
        label.font = [UIFont systemFontOfSize:16];
        label.textAlignment = 1;
//        0x7098bc
        label.textColor = [UIColor colorWithRed:112.0/255.0 green:152.0/255.0 blue:188.0/255.0 alpha:1.0];
        label.tag = 100;
        label.layer.cornerRadius = 8;
        label.layer.borderWidth = 1;
        label.layer.borderColor = [UIColor greenColor].CGColor;
        [cell.contentView addSubview:label];
        [label mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.equalTo(cell.contentView).inset(10);
            make.height.offset(50);
            make.center.equalTo(cell.contentView);
        }];
    }
    label.text = self.apisArray[indexPath.row];
    
    
    return cell;
}
- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath {
    switch (indexPath.row) {
        case 0: { //创建车队
            [JYGrounp createWithName:@"秋名山" complete:^(BOOL isSuccess) {
                if (isSuccess) {
                    [JYLogger log:@"创建车队成功"];
                }else {
                    [JYLogger log:@"创建车队失败"];
                }
            }];
        }break;
        case 1: { //添加成员
            [JYGrounp addMotorcadeMemberWithMid:@"74be9a8e66864129bb09b3268f12905d" andUid:@"88309048" complete:^(BOOL isSuccess) {
                if (isSuccess) {
                    [JYLogger log:@"添加成功"];
                }else {
                    [JYLogger log:@"添加失败"];
                }
            }];
        }break;
        case 2: { //加入车队
            [JYGrounp joinMotorcadeWithMotorcadeWord:@"619110" complete:^(BOOL isSuccess) {
                if (isSuccess) {
                    [JYLogger log:@"加入成功"];
                }else {
                    [JYLogger log:@"加入失败"];
                }
            }];
        }break;
        case 3: { //车队详情
            [JYGrounp getMotorcadeWithMid:@"74be9a8e66864129bb09b3268f12905d" complete:^(BOOL isSuccess, GrounpDetailModel * _Nullable detailModel, NSError * _Nullable error) {
                
            }];
        }break;
        case 4: { //车队列表
            [JYGrounp getMotorcadeList:^(BOOL isSuccess, NSMutableArray<GrounpListModel *> * _Nullable motorcadeList, NSError * _Nullable error) {
                
            }];
        }break;
        case 5: { //更改车队名
            [JYGrounp editMotorcadeNameWithMotorcadeWord:@"249913" andMotorcadeName:@"秋名山车神" complete:^(BOOL isSuccess) {
                if (isSuccess) {
                    [JYLogger log:@"更改成功"];
                }else {
                    [JYLogger log:@"更改失败"];
                }
            }];
        }break;
        case 6: { //退出车队
            [JYGrounp quitMotorcadeWithMid:@"9a1b003fa5544b5eafb15ee44f84590e" complete:^(BOOL isSuccess) {
                if (isSuccess) {
                    [JYLogger log:@"退出成功"];
                }else {
                    [JYLogger log:@"退出失败"];
                }
            }];
        }break;
        case 7: { //队友列表
            [JYGrounp getMotorcadeUserListWithMid:@"74be9a8e66864129bb09b3268f12905d" complete:^(BOOL isSuccess, NSMutableArray<GrounpTeammateModel *> * _Nullable teammateList, NSError * _Nullable error) {
                
            }];
        }break;
        case 8: { //好友列表
            [JYGrounp getMotorcadeFriendList:^(BOOL isSuccess, NSMutableArray<GrounpFriendModel *> * _Nullable friendList, NSError * _Nullable error) {
                
            }];
        }break;
        case 9: { //长链接--
//            [JYSOCKETUtils getSocketHost];
            [JySocketUtils connectWithMid:@"74be9a8e66864129bb09b3268f12905d" complete:^(NSDictionary * _Nonnull result, JYMotorcadeSocketState socketState) {
                NSLog(@"%@",result);
            }];
            dispatch_time_t delayTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.0/*延迟执行时间*/ * NSEC_PER_SEC));
            dispatch_after(delayTime, dispatch_get_main_queue(), ^{
                SocketModel *model = [SocketModel new];
                model.locationModel.latitude = 0.21432;
                model.locationModel.longitude = 0.355444;
                model.msg = @"测试";
                model.type = 1;
                [JySocketUtils sendData:model];
            });
        }break;
        case 10: {
            [JYGrounpVoice sharedInstance].delegate = self;
            [JYGrounpVoice joinRoomWithToken:@"p2eDZ5_r8qtin0ayiyu1WslVSTG1lQ6HvzrvTmvj:ynH15J_XTemdBKMFIwYjKpGvr2o=:eyJhcHBJZCI6ImU0NTFjajBoeiIsInJvb21OYW1lIjoiNzRiZTlhOGU2Njg2NDEyOWJiMDliMzI2OGYxMjkwNWQiLCJ1c2VySWQiOiI3MDE3MjI1OCIsImV4cGlyZUF0Ijo0MTAyNDE1OTk5LCJwZXJtaXNzaW9uIjoidXNlciJ9"];
        }break;
    }
}
#pragma mark - JYGrounpVoiceDelegate
- (void)jy_connectFailWithVoice:(NSError *)error {
    
}
- (void)jy_connectSuccessWithVoice:(JYGrounpVoice *)voice {
    
}
#pragma mark - 懒加载
- (UICollectionView *)apiCollectionView {
    if (!_apiCollectionView) {
        
        UICollectionViewFlowLayout *flowLayout = [[UICollectionViewFlowLayout alloc]init];
        flowLayout.scrollDirection = UICollectionViewScrollDirectionVertical;
        flowLayout.minimumInteritemSpacing = 0;
        flowLayout.minimumLineSpacing = 0;
        flowLayout.sectionInset = UIEdgeInsetsMake(10,10,10,10);
        flowLayout.itemSize = CGSizeMake(([UIScreen mainScreen].bounds.size.width-40)/3.0, 80);
        
        _apiCollectionView = [[UICollectionView alloc]initWithFrame:CGRectZero collectionViewLayout:flowLayout];
        _apiCollectionView.backgroundColor = [UIColor whiteColor];
        [_apiCollectionView registerClass:[UICollectionViewCell class] forCellWithReuseIdentifier:@"apiCollectionViewCell"];
        _apiCollectionView.delegate = self;
        _apiCollectionView.dataSource = self;
        
    }
    return _apiCollectionView;
}
@end
