#ifndef FS_SHADERS_H
#define FS_SHADERS_H

struct Shader
{
	Shader(uint8_t id, std::string name, bool premium, int32_t storage) :
		name(std::move(name)), id(id), premium(premium), storage(storage) {}

	uint8_t id;
	std::string name;
	bool premium;
	int32_t storage;
};

class Shaders
{
	public:
		bool reload();
		bool loadFromXml();
		Shader* getShaderByID(uint8_t id);
		Shader* getShaderByName(const std::string& name);

		const std::vector<Shader>& getShaders() const {
			return shaders;
		}

	private:
		std::vector<Shader> shaders;
};

#endif
