/*
** EPITECH PROJECT, 2018
** TekSpice
** File description:
** oui
*/

#pragma once

#include <vector>
#include <map>
#include <tuple>
#include "../IComponent.hpp"
#include "../Logic.hpp"

class Component_4001 : public nts::IComponent {
	public:
		Component_4001();
		~Component_4001() = default;

		nts::Tristate compute(std::size_t = 1) final;
		void setLink(std::size_t, nts::IComponent &, std::size_t) final;
		nts::Tristate &getPin(std::size_t) final;
		void dump() const final;
		nts::C_TYPE getType() {return nts ::C_4001;}
	protected:
	private:
		std::vector<std::tuple<nts::Tristate *, IComponent *, size_t>> _inPins;
		std::vector<nts::Tristate> _outPins;
		std::vector<int> _prohibedPins;
		std::vector<int> _computablePins;
		std::map<int, std::vector<int>> _pair;
};
