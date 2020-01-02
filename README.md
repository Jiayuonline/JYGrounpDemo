# JYGrounpDemo

iOS 车友组队Demo

## 接入准备

将 "JiaYuOnlineGrounpSDK.framework" 引入到项目中，并通过cocospods添加依赖库

    platform :ios, '11.0'

    source 'https://github.com/CocoaPods/Specs.git'
    source 'https://github.com/Jiayuonline/Specs.git'

    target 'JYGrounpDemo' do
  
      #驾御-基础组件
     pod 'JiaYuOnlineCore', '~> 0.0.69'
      pod 'QNRTCKit', '~> 2.0'

    end


使用您申请的key初始化淘途途SDK

    [JYEngine jy_initWithAccessKey:@"您的key" andAccessSecret:@"您的secret" andChannel:@"taotutu" andDebugMode:YES];

## 功能使用

#### 1.创建车队

    [JYGrounp createWithName:@"秋名山" complete:^(**BOOL** isSuccess) {
        if (isSuccess) {
            [JYLogger log:@"创建车队成功"];
        }else {
            [JYLogger log:@"创建车队失败"];
        }
    }];
    
#### 2.加入车队

    [JYGrounp joinMotorcadeWithMotorcadeWord:@"619110" complete:^(BOOL isSuccess) {
              if (isSuccess) {
                    [JYLogger log:@"加入成功"];
             }else {
                    [JYLogger log:@"加入失败"];
            }
        }];
        
#### 3.车队列表
    
    [JYGrounp getMotorcadeList:^(BOOL isSuccess, NSMutableArray<GrounpListModel *> * _Nullable motorcadeList, NSError * _Nullable error) {
                
    }];
    
#### 4.车队详情

    [JYGrounp getMotorcadeWithMid:@"74be9a8e66864129bb09b3268f12905d" complete:^(BOOL isSuccess, GrounpDetailModel * _Nullable detailModel, NSError * _Nullable error) {
                
      }];
        
#### 5.添加成员

    [JYGrounp addMotorcadeMemberWithMid:@"74be9a8e66864129bb09b3268f12905d" andUid:@"88309048" complete:^(BOOL isSuccess) {
        if (isSuccess) {
            [JYLogger log:@"添加成功"];
        }else {
            [JYLogger log:@"添加失败"];
        }
    }];
    
#### 6.成员列表
    
    [JYGrounp getMotorcadeUserListWithMid:@"74be9a8e66864129bb09b3268f12905d" complete:^(BOOL isSuccess, NSMutableArray<GrounpTeammateModel *> * _Nullable teammateList, NSError * _Nullable error) {
     }];
     
#### 7.好友列表
    
    [JYGrounp getMotorcadeFriendList:^(BOOL isSuccess, NSMutableArray<GrounpFriendModel *> * _Nullable friendList, NSError * _Nullable error) {
    }];
    
#### 8.修改名称
    
    [JYGrounp editMotorcadeNameWithMotorcadeWord:@"249913" andMotorcadeName:@"秋名山车神" complete:^(BOOL isSuccess) {
        if (isSuccess) {
            [JYLogger log:@"更改成功"];
        }else {
            [JYLogger log:@"更改失败"];
        }
    }];
    
#### 9.退出车队
    
    [JYGrounp quitMotorcadeWithMid:@"9a1b003fa5544b5eafb15ee44f84590e" complete:^(BOOL isSuccess) {
        if (isSuccess) {
            [JYLogger log:@"退出成功"];
        }else {
            [JYLogger log:@"退出失败"];
        }
    }];
    
#### 10.连接车队socket
socketState
    
    [JySocketUtils connectWithMid:@"74be9a8e66864129bb09b3268f12905d" complete:^(NSDictionary * _Nonnull result, JYMotorcadeSocketState socketState) {
         NSLog(@"%@",result);
    }];
    
#### 11.通过socket发送位置

    SocketModel *model = [SocketModel new];
       model.locationModel.latitude = 0.21432;
       model.locationModel.longitude = 0.355444;
       model.msg = @"位置共享";
       model.type = 1;
       [JySocketUtils sendData:model];
       
#### 12.断开车队socket

    [JySocketUtils  disconnect];
    
#### 13.加入房间并开启语音

    [JYGrounpVoice joinRoomWithToken:@"roomtoken"];
    
#### 14.开启/关闭扬声器

    [JYGrounpVoice  setSpeakerOn:NO];
    
#### 15.是否静音

    [JYGrounpVoice  muteAudio];
    
####16.离开房间并断开语音

    [JYGrounpVoice  leaveRoom];

