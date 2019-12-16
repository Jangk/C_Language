#include "pch.h"
#include "Player.h"

void Player::Init()
{
}


void Player::Reset()
{
	m_CharInfo.iCurHP = m_CharInfo.iMaxHP;
}

void Player::Render()
{
	cout << "------------------------------------" << endl;
	cout << "직업\t:\t" << m_CharInfo.szName << endl;
	cout << "레벨\t:\t" << m_CharInfo.iLevel << endl;
	cout << "공격력\t:\t" << m_CharInfo.iAtt << endl;
	cout << "방어력\t:\t" << m_CharInfo.iDef << endl;
	cout << "체력\t:\t" << m_CharInfo.iCurHP << "/" << m_CharInfo.iMaxHP << endl;
	cout << "경험치\t:\t" << m_CharInfo.iCurEXP << "/" << m_CharInfo.iMaxEXP << endl;
	cout << "소지금\t:\t" << m_CharInfo.iMoney << endl;
	cout << "------------------------------------" << endl;
	for (int i = 0; i < 4; ++i)
		m_Item[i]->Render();
}


void Player::FightWin(Character& other)
{
	m_CharInfo.iCurEXP += other.GetCharacterInfo().iMaxEXP;
	SetMoney(other.GetCharacterInfo().iMoney);
	while (m_CharInfo.iCurEXP >= m_CharInfo.iMaxEXP)
	{
		m_CharInfo.iLevel++;
		m_CharInfo.iCurEXP -= m_CharInfo.iMaxEXP;
		m_CharInfo.iMaxEXP  = m_CharInfo.iLevel * 100;
		m_CharInfo.iAtt    += 10;
		m_CharInfo.iMaxHP  += 50;
		m_CharInfo.iCurHP   = m_CharInfo.iMaxHP;
	}
}


void Player::SetItem(Item* item)
{
	m_Inventory.push_back(item);
}


void Player::SetMoney(int iMoney)
{
	m_CharInfo.iMoney += iMoney;
}

const vector<Item*>& Player::GetInventory()
{
	return m_Inventory;
}

void Player::EquiItem(int index)
{
	int itemInedx = static_cast<int>(m_Inventory[index]->GetItemInfo().ItemType);
	m_Item[itemInedx] = m_Inventory[index];
}


void Player::Release()
{
	for (auto iter = m_Inventory.begin(); iter != m_Inventory.end(); ++iter)
		SAFE_DELETE(*iter);
}

Player::~Player()
{
	Release();
}
