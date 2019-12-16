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
	cout << "����\t:\t" << m_CharInfo.szName << endl;
	cout << "����\t:\t" << m_CharInfo.iLevel << endl;
	cout << "���ݷ�\t:\t" << m_CharInfo.iAtt << endl;
	cout << "����\t:\t" << m_CharInfo.iDef << endl;
	cout << "ü��\t:\t" << m_CharInfo.iCurHP << "/" << m_CharInfo.iMaxHP << endl;
	cout << "����ġ\t:\t" << m_CharInfo.iCurEXP << "/" << m_CharInfo.iMaxEXP << endl;
	cout << "������\t:\t" << m_CharInfo.iMoney << endl;
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
	// ����ó�� �����Ƽ� �׳� ��
	fopen_s(&fpItem, "../TextRPG_Item.txt", "wb");
	fopen_s(&fpInventory, "../TextRPG_Inventory.txt", "wb");
	if (0 == err)
	{
		fwrite(&m_CharInfo, sizeof(m_CharInfo), 1, fpPlayer);
		fwrite(&m_Item, sizeof(m_Item[0]), 4, fpPlayer);
		fwrite(&m_Inventory, sizeof(m_Inventory), 1, fpPlayer);
		cout << "����Ϸ�" << endl;
		system("pause");
		fclose(fpPlayer);
		fclose(fpItem);
		fclose(fpInventory);
		return true;
	}
	else
	{
		cout << "���̺� ����" << endl;
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
	// ����ó�� �����Ƽ� �׳� ��
	fopen_s(&fpItem, "../TextRPG_Item.txt", "rb");
	fopen_s(&fpInventory, "../TextRPG_Inventory.txt", "rb");
	if (0 == err)
	{
		fread(&m_CharInfo, sizeof(m_CharInfo), 1, fpPlayer);
		fread(&m_Item, sizeof(m_Item[0]), 4, fpPlayer);
		fread(&m_Inventory, sizeof(m_Inventory), 1, fpPlayer);
		cout << "�ҷ����� ����" << endl;
		fclose(fpPlayer);
		fclose(fpItem);
		fclose(fpInventory);
		system("pause");
		return true;
	}
	else
	{
		cout << "�ҷ����� ����" << endl;
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
	m_Inventory.reserve(100);			// ��â �ִ�ġ 100���� ����.
}

Player::~Player()
{
	Release();
}
