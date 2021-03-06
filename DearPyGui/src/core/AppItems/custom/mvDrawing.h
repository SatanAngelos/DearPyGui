#pragma once

#include "mvTypeBases.h"
#include "mvDrawList.h"

namespace Marvel {

	PyObject* add_drawing(PyObject* self, PyObject* args, PyObject* kwargs);

	class mvDrawing : public mvAppItem
	{

	public:

		static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

	public:

		MV_APPITEM_TYPE_OLD_SYSTEM(mvAppItemType::Drawing, "add_drawing")

		mvDrawing(const std::string& name);

		void draw() override;

		mvRef<mvDrawList> getDrawList();


	private:

		mvRef<mvDrawList> m_drawList;
		float             m_startx = 0.0f;
		float             m_starty = 0.0f;

	};
}