Para criar uma nova quest/npc
deve-se adicionar um novo arquivo de texto
com a extensão '.c'

A sintaxe é a seguinte

QUEST* : Define um parametro da quest.
	*: indica o número da quest
	O limite de quests é de 1 à 45.
	Exemplo: QUEST1 NAME QuestNpc

Parametros:

NAME n : Define o nome do npc da quest
	n: indica o nome do npc
	O Arquivo do npc precisa estar
	na pasta quest.

POSITION x y : Define a posição que o npc será criado.

BASE_SPEECH s: Define uma mensagem que o npc falará de
	tempos em tempos.

CONDITION
	SPEECH
	LEVEL
	ITEM
	ITEMSANC
	CONNAME
	GOLDCHECK
	ISLOG
	TIMECHECK
	EQITEM
	CHECKBIT
	CHECKCLASS
	CHECKSTAT
	NOTEQUIP

REWARD-
	SPEECH