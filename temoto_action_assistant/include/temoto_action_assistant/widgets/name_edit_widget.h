/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright 2019 TeMoto Telerobotics
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef TEMOTO_ACTION_ASSISTANT_NAME_EDIT_WIDGET
#define TEMOTO_ACTION_ASSISTANT_NAME_EDIT_WIDGET

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>

#ifndef Q_MOC_RUN
#endif

#include "temoto_action_engine/umrf.h"

namespace temoto_action_assistant
{
class NameEditWidget : public QWidget
{
  Q_OBJECT

public:
  // ******************************************************************************************
  // Public Functions
  // ******************************************************************************************

  /// Constructor
  NameEditWidget(QWidget* parent, std::shared_ptr<Umrf> umrf = nullptr);

  void setUmrf( std::shared_ptr<Umrf> umrf);

  // ******************************************************************************************
  // Qt Components
  // ******************************************************************************************

  QLabel* title_;  // specify the title from the parent widget
  QLineEdit* name_field_;

private Q_SLOTS:

  // ******************************************************************************************
  // Slot Event Functions
  // ******************************************************************************************

  /// Modifies the word variable
  void modifyName();


Q_SIGNALS:

  // ******************************************************************************************
  // Emitted Signals
  // ******************************************************************************************
  void updated();

private:
  // ******************************************************************************************
  // Variables
  // ******************************************************************************************
  std::shared_ptr<Umrf> umrf_;


  // ******************************************************************************************
  // Private Functions
  // ******************************************************************************************
};
}

#endif
