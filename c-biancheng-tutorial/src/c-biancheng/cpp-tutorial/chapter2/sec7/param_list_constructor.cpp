class VLA{
private:
    const int m_len;
    int *m_arr;
public:
    VLA(int len);
};
//必须使用初始化列表来初始化 m_len
VLA::VLA(int len): m_len(len){
    m_arr = new int[len];
}

int main(){
    VLA val(10);

    return 0;
}