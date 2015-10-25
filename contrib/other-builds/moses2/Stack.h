/*
 * Stack.h
 *
 *  Created on: 24 Oct 2015
 *      Author: hieu
 */

#ifndef STACK_H_
#define STACK_H_
#include <boost/unordered_set.hpp>
#include "Hypothesis.h"
#include "moses/Util.h"

class Stack {
protected:
	  typedef boost::unordered_set< Hypothesis*, Moses::UnorderedComparer<Hypothesis>, Moses::UnorderedComparer<Hypothesis> > _HCType;
	  _HCType m_hypos;
public:
  typedef _HCType::iterator iterator;
  typedef _HCType::const_iterator const_iterator;
  //! iterators
  const_iterator begin() const {
	return m_hypos.begin();
  }
  const_iterator end() const {
	return m_hypos.end();
  }

	Stack();
	virtual ~Stack();

	bool AddPrune(Hypothesis *hypo);
};

#endif /* STACK_H_ */