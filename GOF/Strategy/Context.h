//Context.h
#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class Strategy;
/**
*�������Strategy ģʽ�Ĺؼ���Ҳ��Strategyģʽ��Template ģʽ�ĸ����������ڡ�
*Strategy ͨ������ϡ���ί�У���ʽʵ���㷨��ʵ�֣����칹����Template ģʽ���ȡ���Ǽ̳еķ�ʽ
*������ģʽ������Ҳ�Ǽ̳к��������ʵ�ֽӿ����õķ�ʽ������
*/
class Context
{
public:
	Context(Strategy* stg);
	~Context();
	void DoAction();
protected:
private:
	Strategy* _stg;
};

#endif //~_CONTEXT_H_