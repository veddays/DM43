/*LED_P_Z
��������:
	������� ���������� ������� ����������� ����������
������������ ������:
	�����������
�������� ����������:
	st - ���������

������� ������
������� �����
4306
*/
RATIONAL LED_P_Z(struct POLYNOMIAL st)
{
return st.factors[st.degree];
}