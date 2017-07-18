
// ExcelCompareDlg.h : ͷ�ļ�
//

#pragma once


// CExcelCompareDlg �Ի���
class CExcelCompareDlg : public CDialogEx
{
// ����
public:
	CExcelCompareDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXCELCOMPARE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedOk();
    afx_msg void OnBnClickedOpenBtn1();
    afx_msg void OnBnClickedOpenBtn2();
    void initData();
    void doCompare();
    bool checkFileExist();
    
private:
    CString m_fileName1;
    CString m_fileName2;
};