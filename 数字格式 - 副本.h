﻿/*输出`完整的v; 不是分开, 会进位的*/
auto 进位再cout(vector<类型>& vi) {
        //!进位	从右往左
        //!显示	从左往右 \ 是否有数字->补充0->显示数字->右边的N位数
        类型* viDatap = vi.data(); vector< 类型>* vip = &vi;
        N位个数初始化(vi);
        序号_第一个n = 1;
        //x..............................................................................
        //>进位	从小往大
        for (size_t i = 序号_第一个n; i < 14; i++) {
                进位(vi, i);
        }
        /*没更新*/
        N位个数初始化(vi);
        //x..............................................................................
        //>显示	从大往小 \ 是否有数字->补充0->显示数字->右边的N位数
        for (size_t i = N位个数_有数值; i > 序号_第一个n; i--) {
                补充0(vi, i);
                retN位数(vi, i); //cout","
        }
        补充0(vi, 1);
        cout << vi[1];
        viDatap = nullptr; vip = nullptr;
}
/*暴力解决*/
auto 进位再cout(vector<类型>& vi, int N位个数_有数值) {
        //!进位	从右往左
        //!显示	从左往右 \ 是否有数字->补充0->显示数字->右边的N位数
        类型* viDatap = vi.data(); vector< 类型>* vip = &vi;
        序号_第一个n = 1;
        //x..............................................................................
        //>进位	从小往大
        for (size_t i = 序号_第一个n; i < 14; i++) {
                进位(vi, i);
        }
        //x..............................................................................
        //>显示	从大往小 \ 是否有数字->补充0->显示数字->右边的N位数
        for (size_t i = N位个数_有数值; i > 序号_第一个n; i--) {
                补充0(vi, i);
                retN位数(vi, i); //cout","
        }
        补充0(vi, 1);
        cout << vi[1];
        viDatap = nullptr; vip = nullptr;
}
