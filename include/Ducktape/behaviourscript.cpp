#include "behaviourscript.hpp"
#include "updateessentials.hpp"
#include "debug.hpp"

void BehaviourScript::Start()
{
}
void BehaviourScript::Update()
{
}
void BehaviourScript::FixedUpdate()
{
}
void BehaviourScript::Invoke(std::string methodName, float time)
{
    Debug::LogWarning("Invoke not Implemented yet.");
}

bool BehaviourScript::operator==(BehaviourScript script)
{
    if (enabled == script.enabled && gameObject == script.gameObject /* && transform == script.transform*/)
    {
        return true;
    }
    return false;
}
