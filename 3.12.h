#ifndef 3_12_H_INCLUDED
#define 3_12_H_INCLUDED

using namespace std;

class Account
{
public:
    void setBalance(double ofbalance)
    {
        if(ofbalance >= 0)
        {
            balance = ofbalance;
        }
        else
        {
            cout << "错误！！初始金额应该不小于 0" <<endl;
        }
    }
    double getBalance()
    {
        return balance;
    }
    void crebit(double Plus)
    {
        cout << "请输入存款金额" << endl;
        cin >> Plus;
        pbalance = Plus + balance;
        cout <<"您存了:"<<" "<<Plus<<endl;
        cout <<"当前余额:"<<" "<<pbalance<<endl;
        balance = pbalance;
    }

    void debit (double subract)
    {
        cout << "请输入取款金额" << endl;
        cin >> subract;
        sbalance = balance - subract;
        if (subract >= 0)
        {
            if (sbalance >= 0)
            {
                cout << "您取走了" << " " << subract <<endl;
                cout <<"当前余额:"<<" "<<sbalance<<endl;
            }
            else
            {
                cout << "Debit amount exceeded account balance" << endl;
                cout <<"当前余额："<<" "<< balance <<endl;
                sbalance = balance + subract;
            }
        }
        else
        {
            cout << "取款金额应该为正数"<<endl;
        }

    }
private:
    double balance;
    double pbalance;
    double sbalance;


};

#endif // 3_12_H_INCLUDED
