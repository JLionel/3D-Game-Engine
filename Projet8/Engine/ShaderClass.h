#pragma once

struct Vertex
{
	D3DXVECTOR3 pos;
	D3DXVECTOR3 normal;
};

class ShaderClass : public EngineComponent
{
	string GetType() override { return NAMEOF(ShaderClass); }
	void EngineStart() override;
	void EngineUpdate() final;
	~ShaderClass() override;

public:
	HRESULT hrVtxDeclaration;
	IDirect3DVertexDeclaration9* _decl = 0;
};

