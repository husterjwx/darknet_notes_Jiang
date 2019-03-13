extern 作用查找一下

atoi()

size_t

strchr(gpu_list, ',')
strchr() 查找字符串中的首次出现某个字符的位置

typedef struct {
    int w;
    int h;
    int c;
    float *data;
} image;

load_alphabet //字母表

network 的定义在darknet.h里面

记录了一些网络的参数 

srand()
使得每次产生的随机数都不一样
不然每次rand()都一样

自己写一下看一下rand()函数的意思

strncpy()
在 string.h头文件里面

C语言的库函数之一
strncpy(input, filename, 256); 

将filename的前256个字节的放到input函数里面

char * filename
 if(filename)
	 
指针可以直接放进if() 我记得不是很清楚了

fflush(stdout);
清空输入缓冲区

strtok(input, "\n");
分割input字符串, 以“ ”中的分隔符字符串

parse_network_cfg(cfg);

parse 解析，语法理解


network *net = load_network(cfgfile, weightfile, 0);

load_network()
{
	parse_network_cfg(cfg)
	
}

parser.c

行742

parse_network_cfg()

read_cfg()
读cfg文件
以
list->node
两级的链表存储的网络结构

parser.c
convolutional_layer parse_convolutional(list *options, size_params params)
解析各个网络层的参数

然后一个一个单独的网络层的文件
convolutional_layer layer = make_convolutional_layer(batch,h,w,c,n,groups,size,stride,padding,activation, batch_normalize, binary, xnor,
params.net->adam);


make_convolutional_layer函数在 convolutional_layer.c里面



