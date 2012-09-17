// Copyright (C) 2011-2012, Tasos Varoudis

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "CompiledUI/ui_LicenceDialog.h"

class CLicenceDialog : public QDialog, public Ui::CLicenceDialog
{
	Q_OBJECT
public:
	CLicenceDialog(QWidget *parent = 0);
	QString	m_message;
	QString	m_agreement;

	QString  m_title;
	void UpdateData(bool value);
	void showEvent(QShowEvent * event);

	private slots:
		void OnOK();
		void OnCancel();
};
