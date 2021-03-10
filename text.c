typedef char STDataType;
typedef struct stack
{
    STDataType* a;
    int top;
    int capacity;
}stack;
//初始化
void stackInit(stack* st)
{
    
    st->a=(STDataType*)malloc(sizeof(STDataType)*4);
    st->top=0;
    st->capacity=4;
}
//进栈
void stackPush(stack* st,STDataType x)
{
    if(st->top>=st->capacity)
    {
        st->capacity*=2;
        st->a=(STDataType*)realloc(st->a,sizeof(STDataType)*(st->capacity));
    }
    st->a[st->top]=x;
    st->top++;
}
//出栈
void stackPop(stack* st)
{
    st->top--;
}
//获取栈顶元素
STDataType stackTop(stack* st)
{
    return st->a[st->top-1];
}
//获取栈中有效元素个数
int stackSize(stack* st)
{
    return st->top;
}
//判断是否为空
int stackEmpty(stack* st)
{
    return st->top==0?1:0;
}
//销毁栈
void stackDestroy(stack* st)
{
    free(st->a);
    st->a=NULL;
    st->top=0;
    st->capacity=0;
}


bool isValid(char * s){
    stack st;
    stackInit(&st);
    while(*s)
    {
        if(*s=='{'||*s=='('||*s=='[')
        {
            stackPush(&st,*s);
        }
        else if(*s=='}')
        {
            if(stackEmpty(&st))
            {
                return false;
            }
            char top=stackTop(&st);
            stackPop(&st);
            if(top!='{')
            {
                return false;
            }
        }
        else if(*s==']')
        {
            if(stackEmpty(&st))
            {
                return false;
            }
            char top=stackTop(&st);
            stackPop(&st);
            if(top!='[')
            {
                return false;
            }
        }
        else if(*s==')')
        {
            if(stackEmpty(&st))
            {
                return false;
            }
            char top=stackTop(&st);
            stackPop(&st);
            if(top!='(')
            {
                return false;
            }
        }
        s++;
    }
    bool ret = stackEmpty(&st);
    return ret;
}