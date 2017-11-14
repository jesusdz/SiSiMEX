#pragma once
#include "Agent.h"
#include <vector>

class AgentManager
{
public:
	AgentManager();
	~AgentManager();

	// Setters
	void addAgent(AgentPtr agent);

	// Getters
	AgentPtr getAgent(int agentId);
	bool empty() const;

	// Update
	void update();

	// Finalize
	void finalize();

public:

	std::vector<AgentPtr> _agents; /**< Array of agents. */
};