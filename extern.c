//int wb = 20;//全局变量-作用范围整个工程
//
//static int wb2 = 10;//static修饰全局变量，改变其作用域，让静态的全局变量只能在对应的源文件内部使用，不能用extern跨文件引用
//
//int Add(int x, int y)//前面加上static函数后，改变了函数的连接属性 （外部连接属性变成内部连接属性），便不能用extern跨文件引用
//{
//	int Z = 0;
//	Z = x + y;
//	return Z;
//}
