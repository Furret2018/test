
// st.st_mode的值低16位中高4位  0x0100是文件夹，0x1000是文普通文件 
enum file_type{
	IS_FIFO           = 0x0001,
	IS_CHARDEVICE     = 0x0010,
	IS_DIR            = 0x0100,
	IS_BLOCK          = 0x0110,
	IS_REG            = 0x1000,
	PATH_NOEXIST      = 0
};



// 获取文件的类型 
unsigned getFileType(const char* szFilePath);
