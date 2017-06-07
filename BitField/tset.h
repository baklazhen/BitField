#ifndef _SET_H_
#define _SET_H_

#include "bitfield.h"

class TSet
{
private:
  int MaxPower;       // ������������ �������� ���������
  TBitField BitField; // ������� ���� ��� �������� ������������������� �������
public:
  TSet(int mp);
  TSet(const TSet &s);       // ����������� �����������
  TSet(const TBitField &bf); // ����������� �������������� ����
  operator TBitField();      // �������������� ���� � �������� ����
  // ������ � �����
  int GetMaxPower(void) const;     // ������������ �������� ���������
  void InsElem(const int Elem);       // �������� ������� � ���������
  void DelElem(const int Elem);       // ������� ������� �� ���������
  void savetomas();       // ��������� � ������
  int IsMember(const int Elem) const; // ��������� ������� �������� � ���������
  // ���������-������������� ��������
  int operator== (const TSet &s) const; // ���������
  int operator!= (const TSet &s) const; // ���������
  TSet& operator=(const TSet &s);  // ������������
  TSet operator+ (const int Elem); // ����������� � ���������
                                   // ������� ������ ���� �� ���� �� ��������
  TSet operator- (const int Elem); // �������� � ���������
                                   // ������� ������ ���� �� ���� �� ��������
  TSet operator+ (const TSet &s);  // �����������
  TSet operator* (const TSet &s);  // �����������
  TSet operator~ (void);           // ����������

  friend istream &operator>>(istream &istr, TSet &bf);
  friend ostream &operator<<(ostream &ostr, const TSet &bf);
};


#endif