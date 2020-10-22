#include "Objetos.h"

void Objetos::inicializar(string nome, string caminho, int animacoes, int frames, float posicaox, float posicaoy, int valor, bool destrutivel)
{
	this->nome = nome;
	this->caminho = caminho;
	posicao.x = posicaox;
	posicao.y = posicaoy;
	this->valor = valor;
	this->destrutivel = destrutivel;
	vivo = true;

	if (!gRecursos.carregouSpriteSheet(this->nome))
		gRecursos.carregarSpriteSheet(this->nome, this->caminho, animacoes, frames);

	sprite.setSpriteSheet(this->nome);

}

void Objetos::desenhar()
{
	if(vivo)
		sprite.desenhar(posicao.x, posicao.y);
}

int Objetos::executar(Vetor2D posPersonagem, Sprite sprPersonagem)
{
	//if(posicao.y < gJanela.getAltura() + 60) //Faz o objeto andar.
		//posicao.y++;

	if (uniTestarColisao(sprite, posicao.x, posicao.y, 0, sprPersonagem, posPersonagem.x, posPersonagem.y, 0) && vivo)
	{
		if (destrutivel)
			vivo = false;
		else
		{

		}

		return valor;
	}


	return 0;
}

void Objetos::finalizar()
{

	gRecursos.descarregarSpriteSheet(nome);

}