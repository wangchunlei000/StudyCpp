 #### 1.局部变量 t_**
 
    int t_studentNumber=10;

#### 2.全局变量  g_**
    int g_studentNumber=30;
    
#### 3.方法名
    void getStudentNumber(int t_studentNumber){
        ...
    }
    
#### 4.结构体
    struct person{
        ..
        //成员变量
        char m_name[20];
    };
    
#### 5.引用

- 概念：引用是一个目标的别名，目标可以是变量或对象
- 声明引用的符号为&，引用开始必须初始化，将引用于一个目标进行绑定
- 操作应用就是操作目标本身，反之亦然
- 引用的类型必须和目标的类型一致
- 有指针的应用，如：int *&t_p1=t_p2;
- 没有数组的引用，也没有void引用
- 常量引用（const引用）：作用不能通过const引用来修改被绑定目标的值
- 引用作为函数的参数的好处：减少拷贝，提高效率
``` 
void swap2(int &t_x,int &t_y){
    int temp = t_y;
    t_y = t_x;
    t_x = temp;
}
```

- 引用作为函数的返回值的好处：
    * 减少一次拷贝，提高效率
    * 注意当函数的返回值为引用类型时，不要将一个临时
```
double& getArea(double radius){
    double area = PI * radius * radius;
    return area;
}
```
#### 6.函数
- 函数分类
    - 内联函数:1~5行代码量的函数
        * 好处：提高代码的执行效率，以空间（代码膨胀）换时间
        * 内联函数的声明和定义必须在同一个文件里，inline关键字是建议C++编译器将该函数作为内联函数，但没有决定权；
        * 当函数中有循环语句，复杂的条件语句、递归等，则C++编译器将无视inline关键字，将函数作为普通的函数处理。
        ```
        //函数声明
        inline void getInfo();
        
        //函数定义
        inline void getInfo(){
            cout << "a sample C++ program" << endl;
            cout << "Hello C++!" << endl;
        }

        ```
    - 函数重载
        * 满足函数重载的条件，有相同的函数名，不同的形参列表
        * 与函数的返回值无关
        * 如果该函数有默认参数，则重载该函数的时候，需要特别注意
    - 递归函数
        * 自己调用自己的函数，注意必须有退出函数的条件判断，否则会死循环
- 函数默认参数
    * 必须从右向左声明默认值
    ```
    int add(int a ,int b = 200,int c = 300,int d = 400){
        return a+b+c+d;
    }
    ```
- 函数传参
    * 基本数据类型（int/char/double）、枚举类型一般用值传递
    * 结构/类对象一般用引用或指针传递
    * 数组类型一般用指针传递
    * 形参是引用类型传递时，一般讲形参设置为const类型的引用，这样的好处是为了防止在函数中误操作，将实参的值修改掉了
  
    
####  类的介绍和使用
- 介绍
    - C/C++中用于声明类的关键字是class
    - Struct也是可以声明类的
    - C中struct只能声明成员变量，C++中还可以声明成员函数
    - class与struct的区别：class默认是私有的，struct默认是公有的
    - 访问修饰符
        * public
        * protected
        * private
    - 在类中声明的变量叫类的成员变量，在类中声明的函数叫类的成员函数
- 构造函数
    * 声明类的对象时，该类的构造函数会自动被调用，用于初始化类的成员变量
    * 如果一个类没有自定义的构造函数，则C++编译器会自动生成一个默认的、共有的、无参的构造函数。
    一旦自定义一个构造函数，则C++编译器就不会再生成默认的构造函数了
    ```
    Student::Student(const string &name, int age, int height) {
           this->name = name;
           this->age = age;
           this->height = height;
    }
    
    Student::Student(const string &name, int age, int height)
        :name(name),age(age),height(height) {
    }
    ```
    * 类的成员变量可以有该类的指针、引用，```但不能有该类的对象```
    * 全局类对象，对象数组构造函数调用情况
    * 析构函数：
        * 做善后清理工作
        * 在类对象被销毁时，自动调用；调用顺序与构造函数相反；
        * 没有返回值
        * 函数名为```~className```,如```~Student```
        * 没有参数
        * 自定义析构函数只能有一个，不能有重载
        * 不管是否自定义一个析构函数，C++编译器都会生成一个默认的析构函数
    * 构造函数有一个参数的类的隐式转换，用explicit关键字一直隐式转换
        ```
          explicit Car(const char *t_name){
                  cout << "Car(const char *t_name)" << endl;
                  m_name=t_name;
                  m_age=1;
          }
          
          //一个参数的构造函数的隐式转换
          Car t_car5 = "Bugkiller";
          Car t_car6 = 33;
        ```
#### 堆与copy构造函数

- new/delete关键字
    * 与molloc/free的区别：molloc/free是函数，需要包含头文件<molloc.h>，
    而new/delete是操作符，不需要包含任何头文件，
        ```
        int *t_p1 = (int *)malloc(sizeof(int));
        *t_p1 = 10;
        cout << "*t_p1:" << *t_p1 << endl;
    
        free(t_p1);
        //防止产生野指针
        t_p1 = NULL;
    
        cout << "============================" << endl;
    
        int *t_p2 = new int;
        *t_p2 = 100;
        cout << "*t_p2:" << *t_p2 << endl;
        delete t_p2;
        t_p2 = NULL;
    
        cout << "============================" << endl;
    
        int *t_p3 = new int(200);
        cout << "*t_p3:" << *t_p3 << endl;
        delete t_p3;
        t_p3 = NULL;
    
    
        cout << "============================" << endl;
    
        int *t_p4=new int[10];
        for (int i = 0; i < 10; ++i) {
            t_p4[i] = 3*i;
            cout << "t_p4[" << i << "]=" << t_p4[i] << endl;
        }
    
        //释放数组内存
        delete [] t_p4;
        t_p4 = NULL;
        ```
    - 创建对象的方式
        ```
        //堆上开辟内存
        Student *student = new Student;
        //栈上开辟内存
        Student student;
        ```
