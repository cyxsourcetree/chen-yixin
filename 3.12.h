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
            cout << "���󣡣���ʼ���Ӧ�ò�С�� 0" <<endl;
        }
    }
    double getBalance()
    {
        return balance;
    }
    void crebit(double Plus)
    {
        cout << "����������" << endl;
        cin >> Plus;
        pbalance = Plus + balance;
        cout <<"������:"<<" "<<Plus<<endl;
        cout <<"��ǰ���:"<<" "<<pbalance<<endl;
        balance = pbalance;
    }

    void debit (double subract)
    {
        cout << "������ȡ����" << endl;
        cin >> subract;
        sbalance = balance - subract;
        if (subract >= 0)
        {
            if (sbalance >= 0)
            {
                cout << "��ȡ����" << " " << subract <<endl;
                cout <<"��ǰ���:"<<" "<<sbalance<<endl;
            }
            else
            {
                cout << "Debit amount exceeded account balance" << endl;
                cout <<"��ǰ��"<<" "<< balance <<endl;
                sbalance = balance + subract;
            }
        }
        else
        {
            cout << "ȡ����Ӧ��Ϊ����"<<endl;
        }

    }
private:
    double balance;
    double pbalance;
    double sbalance;


};

#endif // 3_12_H_INCLUDED
