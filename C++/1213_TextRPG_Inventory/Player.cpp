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

bool Player::Save()
{
	FILE* fpPlayer = nullptr;
	FILE* fpItem = nullptr;
	FILE* fpInventory = nullptr;
	errno_t err = fopen_s(&fpPlayer, "../TextRPG_Player.txt", "wb");
	// 예외처리 귀찮아서 그냥 함
	fopen_s(&fpItem, "../TextRPG_Item.txt", "wb");
	fopen_s(&fpInventory, "../TextRPG_Inventory.txt", "wb");
	if (0 == err)
	{
		fwrite(&m_CharInfo, sizeof(m_CharInfo), 1, fpPlayer);
		fwrite(&m_Item, sizeof(m_Item[0]), 4, fpPlayer);
		fwrite(&m_Inventory, sizeof(m_Inventory), 1, fpPlayer);
		cout << "저장완료" << endl;
		system("pause");
		fclose(fpPlayer);
		fclose(fpItem);
		fclose(fpInventory);
		return true;
	}
	else
	{
		cout << "세이브 실패" << endl;
		fclose(fpPlayer);
		fclose(fpItem);
		fclose(fpInventory);
		return false;
	}
}

bool Player::Load()
{
	FILE* fpPlayer = nullptr;
	FILE* fpItem = nullptr;
	FILE* fpInventory = nullptr;
	errno_t err = fopen_s(&fpPlayer, "../TextRPG_Player.txt", "rb");
	// 예외처리 귀찮아서 그냥 함
	fopen_s(&fpItem, "../TextRPG_Item.txt", "rb");
	fopen_s(&fpInventory, "../TextRPG_Inventory.txt", "rb");
	if (0 == err)
	{
		fread(&m_CharInfo, sizeof(m_CharInfo), 1, fpPlayer);
		fread(&m_Item, sizeof(m_Item[0]), 4, fpPlayer);
		fread(&m_Inventory, sizeof(m_Inventory), 1, fpPlayer);
		cout << "불러오기 성공" << endl;
		fclose(fpPlayer);
		fclose(fpItem);
		fclose(fpInventory);
		system("pause");
		return true;
	}
	else
	{
		cout << "불러오기 실패" << endl;
		return false;
	}
}


void Player::Release()
{
	for (auto iter = m_Inventory.begin(); iter != m_Inventory.end(); ++iter)
		SAFE_DELETE(*iter);
}

Player::Player()
{
	m_Inventory.reserve(100);			// 템창 최대치 100으로 지정.
}

Player::~Player()
{
	Release();
}
