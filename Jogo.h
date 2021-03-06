#pragma once
#include "Fase.h"

enum Telas { tJogo, tCreditos, tInstrucoes, tGameOver, tSaida, tInicial };
enum Botoes { bJogar, bCreditos, bInstrucoes, bSair, bOk, bVoltar };

class Jogo
{
public:

	Jogo();
	~Jogo();

	void inicializar();
	void executar();
	void finalizar();

protected:

	Fase fase;
	Telas telaAtual;
	Sprite background, creditosBackground, instrucoesBackground;
	BotaoSprite botoes[6];
	Personagem personagem;
	Texto texto;
	int pontosTotais;
	void telaInicial();
	void telaJogo();
	void telaCreditos();
	void telaInstrucoes();
	void telaGameOver();
	
};

