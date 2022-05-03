#include "pch.h"
#include "ShaderClass.h"


ShaderClass::~ShaderClass()
{

}


void ShaderClass::EngineStart()
{
	D3DVERTEXELEMENT9 vtxElements[] =
	{
		{0, 0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
		{0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
		{0, 24, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 1},
		{0, 36, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 2},
		D3DDECL_END()
	};
	

	hrVtxDeclaration = d3ddev->CreateVertexDeclaration(vtxElements, &_decl);
}

void ShaderClass::EngineUpdate()
{
}
