//
// Created by shawn-sony-u16 on 18-11-25.
//

//    FLAGS_logbufsecs =1;

//    struct msg_update_type {
//        union {
//            struct {
//                uint8_t path: 1;
//                uint8_t speed: 1;
//                uint8_t speed1: 1;
//                uint8_t speed2: 1;
//                uint8_t speed3: 1;
//                uint8_t speed4: 1;
//                uint8_t speed5: 1;
//                uint8_t speed6: 1;
//            };
//            uint8_t result;
//        } update;
//        uint8_t yes;
//        struct {
//            bool collision;
//            bool ramp;
//        } addition;
//    }msg_update;
//    msg_update.update.result = 255;
//    msg_update.update.path = 0;
//    msg_update.update.items.speed = 0;
//    msg_update.update.items.speed1 = 0;
//    msg_update.update.items.speed2 = 0;
//    msg_update.update.items.speed3 = 0;
//    msg_update.update.items.speed4 = 0;
//    msg_update.update.items.speed5 = 0;
//    msg_update.update.items.speed6 = 1;
//msg_update.update.result = 255;
//    std::cout << (int)msg_update.update.result;
//    std::cout << (int)msg_update.update.path;
//    std::cout << (int)msg_update.update.items.speed;
//    std::cout << (int)msg_update.update.items.speed1;
//    std::cout << (int)msg_update.update.items.speed2;
//    std::cout << sizeof(msg_update.update.items.path);

//    union {
//        std::bitset<8> data = 0;
//        uint8_t result;
//    }heha;
//    std::cout<<(int)(1<<0)<<std::endl;
//    std::cout<<(int)(1<<1)<<std::endl;
//    std::cout<<(int)(1<<2)<<std::endl;
//    std::cout<<(int)(1<<3)<<std::endl;
//    std::cout<<(int)(1<<4)<<std::endl;
//    std::cout<<(int)(1<<5)<<std::endl;
//    std::cout<<(int)(1<<6)<<std::endl;
//    std::cout<<(int)(1<<7)<<std::endl;
//    heha.result = 0b10010110;
//    std::cout<<(int)heha.data[0]<<std::endl;
//    std::cout<<(int)heha.data[1]<<std::endl;
//    std::cout<<(int)heha.data[2]<<std::endl;
//    std::cout<<(int)heha.data[3]<<std::endl;
//    std::cout<<(int)heha.data[4]<<std::endl;
//    std::cout<<(int)heha.data[5]<<std::endl;
//    std::cout<<(int)heha.data[6]<<std::endl;
//    std::cout<<(int)heha.data[7]<<std::endl;
//    std::cout<< sizeof(std::bitset<8>)<<std::endl;





//    FLAGS_stderrthreshold =
//    ros::init(argc, argv, "tst_shawn");
//    ros::NodeHandle nh;





//    google::SetLogDestination(google::INFO, FLAGS_log_dir);
//    while (ros::ok()) {
//
//    }

//    ROS_WARN("Hello %s", "World");


//    ros::spin();
//    ecu_communication::DataUpload dataUpload, dataUpload1;
//    dataUpload.ID_caculate.result = 0x01020304;
//    dataUpload.data_upload_pack_one.pack[0] = 234;
//
//    dataUpload1 = dataUpload;
//
//    std::cout<< int(dataUpload1.data_upload_pack_one.cell.data_ID_one)<<std::endl;
//    std::cout<< int(dataUpload.ID_caculate.data[0])<<std::endl;
//    std::cout<< int(dataUpload.ID_caculate.data[1])<<std::endl;
//    std::cout<< int(dataUpload.ID_caculate.data[2])<<std::endl;
//    std::cout<< int(dataUpload.ID_caculate.data[3])<<std::endl;
//    dataUpload.raw_data_with_id.data_ID = 0x01020304;
//    std::cout<< int(dataUpload.raw_data_with_id.recv_raw_data[0])<<std::endl;
//    std::cout<< int(dataUpload.raw_data_with_id.recv_raw_data[1])<<std::endl;
//    std::cout<< int(dataUpload.raw_data_with_id.recv_raw_data[2])<<std::endl;
//    std::cout<< int(dataUpload.raw_data_with_id.recv_raw_data[3])<<std::endl;
//    char * a = funtst();
//    std::cout<<a;
//    ecu_communication::UDPClient udpClient;
//    udpClient.init((char *)"192.168.1.35", 8181);
//    uint8_t tstdata[5] = {0b00000010, 0x0f, 10, 0xff, 0xfe};
//    udpClient.process(tstdata, 5);
//    ecu_communication::DataDownload dataDownload;
//    dataDownload.data_download_pack_one.result_data[0] = 0;
//    dataDownload.data_download_pack_one.result_data[5] = 1;
//    dataDownload.data_download_pack_one.result_data[4] = 2;
//    dataDownload.data_download_pack_one.result_data[3] = 3;
//    dataDownload.data_download_pack_one.result_data[12] = 255;


//    std::cout<<(unsigned)dataDownload.data_download_pack_one.original_data.data_ID.result<<std::endl;
//    std::cout<<(int)dataDownload.data_download_pack_one.original_data.valid_data_mark<<std::endl;
//    std::cout<<(int)dataDownload.data_download_pack_one.original_data.valid_data_length<<std::endl;
//    std::cout<<(int)dataDownload.data_download_pack_one.original_data.data_ID.data[2]<<std::endl;
//    std::cout<<(int)dataDownload.data_download_pack_one.original_data.data_ID.data[3]<<std::endl;

//    std::cout<<(int)dataDownload.data_download_pack_one.original_data.functions_one.expect_gear_bit_one<<std::endl;
//    std::cout<<(int)dataDownload.data_download_pack_one.original_data.functions_one.reserve_bit3<<std::endl;
//
//    ecu_communication::bit_16_type tst16;
//    tst16.result = 0x01;
//    std::cout<<(int)tst16.data[0]<<std::endl;
//    std::cout<<(int)tst16.data[1]<<std::endl;
//
//    uint8_t tst8 = 0b01010101;
//    std::cout<<(int)bit_operation::get_bit(tst8, 7)<<std::endl;

//    ecu_communication::UDPServer test_server;
//    test_server.init(1234);
//    uint8_t test_array[4];
//    test_server.process(test_array, 4);
//    std::cout<<test_array;
//    test_server.init();
//    std::vector<uint8_t> test_data;
//    while (1) {
//        test_server.process(test_data, 4);
//
//    }

//    shawn::bit_16_type bit_16;
//    bit_16.data[0] = 1;
//    bit_16.data[1] = 0;
//    shawn::example1.cell.data1 = 0;
//    shawn::example1.cell.data2 = 1;
//    shawn::example2.result = 0b10000100;
//    shawn::example3.cell.data = 0b1111111100000000;
//    std::cout<<(int)shawn::example3.result[0]<<std::endl;
//    std::cout<<(int)shawn::example3.result[1]<<std::endl;
//
//    std::cout<<shawn::example1.result<<std::endl;
//    std::cout<<(int)shawn::example2.cell.data1<<std::endl;
//    std::cout<<(int)shawn::example2.cell.data2<<std::endl;
//
//    shawn::example4.result[0] = 0;
//    shawn::example4.result[1] = 1;
//    shawn::example4.result[2] = 2;
//    shawn::example4.result[3] = 3;
//    shawn::example4.result[4] = 4;
//    std::cout<<(int)shawn::example4.cell.data1[0]<<std::endl;
//    std::cout<<(int)shawn::example4.cell.data1[1]<<std::endl;
//    std::cout<<(int)shawn::example4.cell.data2[0]<<std::endl;
//    std::cout<<(int)shawn::example4.cell.data2[1]<<std::endl;
//    std::cout<<(int)shawn::example4.cell.data2[2]<<std::endl;
//
//
//    union data_upload_pack_one_type {
//        struct {
//            uint32_t data_ID;
//            uint8_t valid_data_mark;
//            uint8_t valid_data_length;
//            uint16_t left_wheel_expect_speed;
//            uint16_t mechanical_brake;
//            uint16_t right_wheel_expect_speed;
//            uint8_t vehicle_speed;
//            uint8_t gear;
//        } cell;
//        uint8_t pack[14];
//    }hah;
//    hah.cell.left_wheel_expect_speed = 0xff00;
//    std::cout<<(int)hah.pack[6]<<std::endl;
//    std::cout<<(int)hah.pack[7]<<std::endl;

//    const char * tst = "haha";
google::InitGoogleLogging("hmp");
FLAGS_log_dir = getenv("HOME");
uint8_t aa  = 1;
bool bb = false;
bool cc = true;
LOG(INFO) << (int)aa;
LOG(INFO) <<bb;
LOG(INFO) <<cc;

////    LOG(INFO)<<1;
////    LOG(INFO)<<1;
//    std::cout<<"hmp1"<<std::endl;
////    google::ShutdownGoogleLogging();
////    LOG(INFO)<<1;
////    LOG(INFO)<<1;
//    std::cout<<"hmp1"<<std::endl;
////    google::InitGoogleLogging("hmp");
//    LOG(INFO)<<1;
//    LOG(INFO)<<1;
//    std::cout<<"hmp1"<<std::endl;
//    google::ShutdownGoogleLogging();
//    std::cout<<"hmp1"<<std::endl;


ecu_communication::DataDownload dataDownload;
dataDownload.data_download_pack_one.result_data[13] = 0b10100110;
std::cout<<(int)dataDownload.data_download_pack_one.turn_light<<std::endl;
std::cout<<(int)dataDownload.data_download_pack_one.wide_taillight<<std::endl;
std::cout<<(int)dataDownload.data_download_pack_one.forward_big_light<<std::endl;
std::cout<<(int)dataDownload.data_download_pack_one.ring_control<<std::endl;
std::cout<<(int)dataDownload.data_download_pack_one.parking_control<<std::endl;




char * funtst() {
    in_addr_t tmp1 = inet_addr("192.172.1.1");
    in_addr tmp2;
    tmp2.s_addr = tmp1;
    char * tmp3 = inet_ntoa(tmp2);
    std::cout<< tmp3;
    return tmp3;
}
